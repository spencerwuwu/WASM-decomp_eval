import sys
from clang.cindex import *

class TreeNode():
    def __init__(self, cursor_kind=None, children=[], parent=None):
        self.cursor_kind = cursor_kind
        self.parent = parent
        self.children = children



def dfs_cursor(cursor, cur_level):
    # raw_comment 
    #   -> None

    # get_usr():
    #  c:@F@memcpy memcpy(void *restrict, const void *restrict, int)
    #  c:@SA@__mbstate_t@U@__mbstate_t.h@451@FI@__wchb __wchb
    #  c:stdlib.h@32153@F@mbtowc@__pwc __pwc

    # list(unit.get_arguments())
    #    []
    
    # mangled_name
    #  tempnam tempnam(const char *, const char *)

    # objc_type_encoding 
    #  *20*0i8^{_IO_FILE=}12

    # .kind


    # .type.kind
    #    TypeKind.POINTER, TypeKind.FUNCTIONPROTO, CursorKind.VAR_DECL

    # .type.spelling
    #   FILE, int *, etc

    # Basically print out the original code
    # print(" " * cur_level + "|-", " ".join([e.spelling for e in unit.get_tokens()]))

    # Remove parameters for function
    if cursor.kind == CursorKind.PARM_DECL:
        return

    print(" " * cur_level + "|-", cursor.kind, cursor.spelling, cursor.displayname)
    for child in cursor.get_children():
        dfs_cursor(child, cur_level+1)



def check_only_def(cursor):
    arg_len = len(list(cursor.get_arguments()))
    children_len = len(list(cursor.get_children()))
    if arg_len == children_len:
        return True
    return False

index = Index.create()
filename = "target.c"

translation_unit = index.parse("target.c")
#translation_unit = index.read("saved_ast.txt")

def create_ast_tree(translation_unit):
    print('Translation unit:', translation_unit.spelling)

    for top_node in translation_unit.cursor.get_children():

        # Remove included functions
        node_location = top_node.location.file
        if node_location is not None and\
                filename not in str(node_location):
            continue

        node_kind = top_node.type.kind
        if node_kind == TypeKind.RECORD or\
                node_kind == TypeKind.TYPEDEF or\
                node_kind == TypeKind.FUNCTIONNOPROTO:
            continue
        if node_kind == TypeKind.FUNCTIONPROTO:
            if check_only_def(top_node):
                continue
        dfs_cursor(top_node, 0)
        print()

