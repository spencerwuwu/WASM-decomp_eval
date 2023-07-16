from clang.cindex import CursorKind, Index
import regex


def parseFunctionNames(filepath):
    index = Index.create()
    try:
        file = index.parse(
            filepath,
        )

        function_names = []

        for func in file.cursor.get_children():
            children = list(func.get_children())
            if len(children) == 0:
                continue
            statement_body = children[-1]
            if (
                func.kind == CursorKind.FUNCTION_DECL
                and statement_body.kind == CursorKind.COMPOUND_STMT
            ):
                function_names.append(func.mangled_name)
                # print(func.mangled_name)
                # print('-----------')
                # print(statement_body)

        return function_names
    except:
        return []


# This pattern is buggy
def parseFunctionBody(file, function_name):
    pattern = (
        r"%s\s*\(([a-zA-z0-9\n\s\t,#*().])*\)((?1)|[;])*({((?>[^{}]+|(?3))*)})"
        % function_name
    )
    matches = regex.search(pattern, file)

    if matches is None:
        return None

    return matches.group(0)


def parseFunctionNamesAndBody(filepath):
    index = Index.create()
    f = open(filepath, mode='r')
    raw = f.readlines()
    f.close()
    try:
        file = index.parse(
            filepath,
        )

        function_pairs = []

        for func in file.cursor.get_children():
            children = list(func.get_children())
            if len(children) == 0:
                continue
            statement_body = children[-1]
            if (
                func.kind == CursorKind.FUNCTION_DECL
                and statement_body.kind == CursorKind.COMPOUND_STMT
            ):
                start = func.extent.start.line
                #print(func.extent.start)
                end = func.extent.end.line
                function_pairs.append([func.mangled_name, ''.join(raw[start-1:end])])

        return function_pairs
    except:
        return []
