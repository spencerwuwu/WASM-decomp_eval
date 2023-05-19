#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys

from clang.cindex import CursorKind, Index


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    complexity = ComplexityVisitor()
    print(complexity.visitFile(args.PROGRAM_SOURCE_CODE_FILE))


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the "
        + "McCabe Cyclomatic Complexity of the program"
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


class ComplexityVisitor:
    def __init__(self):
        self.function_decl = CursorKind.FUNCTION_DECL
        self.compound_statement = CursorKind.COMPOUND_STMT
        self.decision_points = [
            CursorKind.IF_STMT,
            CursorKind.CASE_STMT,
            CursorKind.FOR_STMT,
            CursorKind.WHILE_STMT,
            CursorKind.DO_STMT,
        ]

    def visitFile(self, file_name):
        index = Index.create()
        try:
            file = index.parse(
                file_name,
            )

            # map function name: compound statement (ignore function declarations)
            metric = {}

            for func in file.cursor.get_children():
                children = list(func.get_children())
                if len(children) == 0:
                    continue
                statement_body = children[-1]
                if (
                    func.kind == self.function_decl
                    and statement_body.kind == self.compound_statement
                ):
                    metric[func.mangled_name] = self.visit(statement_body) + 1

            return metric
        except:
            return None

    # assume functions cannot be nested (only supported thru GCC extension)
    def visit(self, node):
        decision_point_count = 0

        for c in node.get_children():
            decision_point_count += self.visit(c)

        if node.kind in self.decision_points:
            decision_point_count += 1

        return decision_point_count


if __name__ == "__main__":
    main()
