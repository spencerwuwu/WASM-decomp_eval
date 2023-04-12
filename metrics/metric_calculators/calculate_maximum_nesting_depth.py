#!/usr/bin/env python3
from clang.cindex import CursorKind, Index

import argparse
import logging


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    index = Index.create()
    translation_unit = None
    try:
        translation_unit = index.parse(
            args.PROGRAM_SOURCE_CODE_FILE,
            args=[
                r"-Inew_compiled_benchmarks/decompiler_lib",
            ],
        )
    except:
        print(-1)
        exit()

    depth = DepthVisitor()
    print(depth.visit(translation_unit.cursor))


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
        self.ignored_statements_with_compound = [CursorKind.FUNCTION_DECL]
        self.compound_statement = CursorKind.COMPOUND_STMT

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
            and prevNodeType not in self.ignored_statements_with_compound
        ):
            return True

        return False


if __name__ == "__main__":
    main()
