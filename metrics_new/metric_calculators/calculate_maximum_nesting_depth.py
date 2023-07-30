#!/usr/bin/env python3
import os

from clang.cindex import CursorKind, Index

import argparse
import logging
import json
import re


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    depth = DepthVisitor()
    print(json.dumps(depth.visitFile(args.PROGRAM_SOURCE_CODE_FILE)))


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the "
        + "maximum nesting depth of the program"
    )
    parser.add_argument(
        "PROGRAM_SOURCE_CODE_FILE",
        help="A file containing the source code to be analyzed",
    )
    parser.add_argument(
        "-v",
        "--verbose",
        action="store_true",
        help="Enables printing of debug statements",
    )
    arguments = parser.parse_args()
    return arguments


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


class DepthVisitor:
    def __init__(self):
        self.statements_with_optional_compound = [
            CursorKind.IF_STMT,
            CursorKind.SWITCH_STMT,
            CursorKind.WHILE_STMT,
            CursorKind.DO_STMT,
            CursorKind.FOR_STMT,
        ]
        self.function_decl = CursorKind.FUNCTION_DECL
        self.compound_statement = CursorKind.COMPOUND_STMT

    def visitFile(self, file_name):
        f = open(file_name, mode= 'r')
        raw1 = f.readlines()
        f.close()

        # replace some complex cases with easier ones (without changing MND)
        f = open('temp.c', mode= 'w')
        for i in raw1:
            if re.match(r'for(\s)*\(.*;.*;.*\)', ''.join(i.split())):
                new_i = re.sub(r'for(\s)*\(.*;.*;.*\)', 'for(;;)', ''.join(i.split()))
                f.write(new_i)
            elif 'else' == ''.join(i.split()) or 'else{' == ''.join(i.split()):
                f.write('if (1)\n')
            else:
                f.write(i)
        f.close()

        index = Index.create()
        try:
            file = index.parse(
                file_name
                #'temp.c',
            )
            os.remove('temp.c')
            # map function name: compound statement (ignore function declarations)
            defined_functions = []

            for func in file.cursor.get_children():
                children = list(func.get_children())
                if len(children) == 0:
                    continue
                statement_body = children[-1]
                if (
                    func.kind == self.function_decl
                    and statement_body.kind == self.compound_statement
                ):
                    defined_functions.append((func.mangled_name, statement_body))

            nesting_depth = {
                name: self.visit(statement_body) - 1
                for name, statement_body in defined_functions
            }
            return nesting_depth
        except:
            os.remove('temp.c')
            return None

    # assume functions cannot be nested (only supported thru GCC extension)
    def visit(self, node, parentNode=None):
        maxDepth = 0

        for c in node.get_children():
            innerDepth = self.visit(c, node)
            maxDepth = max(maxDepth, innerDepth)

        parentNodeType = parentNode.kind if parentNode is not None else None
        if self.doesEncapsulatesScope(node.kind, parentNodeType):
            maxDepth += 1

        return maxDepth

    def doesEncapsulatesScope(self, type, prevNodeType):
        if type in self.statements_with_optional_compound:
            return True

        if (
            type == self.compound_statement
            and prevNodeType not in self.statements_with_optional_compound
            and prevNodeType != self.function_decl
        ):
            return True

        return False


if __name__ == "__main__":
    main()
