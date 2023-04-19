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

        return function_names
    except:
        return []


def parseFunctionBody(file, function_name):
    pattern = r"(%s\s*\(.*?\)\s)({((?>[^{}]+|(?2))*)})" % function_name
    matches = regex.search(pattern, file)

    if matches is None:
        external_signature_pattern = (
            r"(%s\s*\(.*?\)[^;]\X*?)({((?>[^{}]+|(?2))*)})" % function_name
        )
        matches = regex.search(external_signature_pattern, file)
        if matches is None:
            return None

    return matches.group(3)
