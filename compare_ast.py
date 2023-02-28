#!/usr/bin/env python3
import sys
from clang.cindex import *


class TreeNode():
    def __init__(self, cursor=None):
        if cursor is None:
            self.translation_unit = None 
            self.cursor_kind = None
        else:
            self.cursor_kind = cursor.kind
            self.translation_unit = cursor.translation_unit
        self.cursor = cursor
        self.parent = None
        self.children = []
    
    def get_children(self):
        return self.children


def dfs_print_tree(node, cur_level=0):
    print(" " * cur_level + "|-", node.cursor_kind, node.cursor.displayname)
    for child in node.get_children():
        dfs_print_tree(child, cur_level+1)


def dfs_build_tree(cursor, cur_level=0):
    # Remove parameters for function
    if cursor.kind == CursorKind.PARM_DECL:
        return None

    print(" " * cur_level + "|-", cursor.kind, cursor.spelling, cursor.displayname)

    cur_node = TreeNode(cursor)

    if len(list(cursor.get_children())) == 0:
        return cur_node

    for child in cursor.get_children():
        child_node = dfs_build_tree(child, cur_level+1)
        if child_node is None:
            continue
        child_node.parent = cur_node
        cur_node.children.append(child_node)
    return cur_node


def check_only_def(cursor):
    arg_len = len(list(cursor.get_arguments()))
    children_len = len(list(cursor.get_children()))
    if arg_len == children_len:
        return True
    return False


def create_ast_tree(translation_unit):
    print('Translation unit:', translation_unit.spelling)
    function_trees = []

    for top_node in translation_unit.cursor.get_children():
        # Remove included functions
        node_location = top_node.location.file
        if node_location is not None and\
                translation_unit.spelling not in str(node_location):
            continue

        node_kind = top_node.type.kind
        if node_kind == TypeKind.RECORD or\
                node_kind == TypeKind.TYPEDEF or\
                node_kind == TypeKind.FUNCTIONNOPROTO:
            continue
        
        if node_kind != TypeKind.FUNCTIONPROTO:
            continue
        if check_only_def(top_node):
            continue

        node = dfs_build_tree(top_node)
        function_trees.append(node)
    return function_trees



if __name__ == '__main__':
    orig_t_unit = Index.create().read("asts/orig_asts/aes.ast")
    decom_t_unit = Index.create().read("asts/em_output_O0/aes.ast")

    orig_trees = create_ast_tree(orig_t_unit)
    decom_trees = create_ast_tree(decom_t_unit)
    exit(0)

    for root in orig_trees:
        dfs_print_tree(root)
        print()

    print("============= +++++++ =============")
    for root in decom_trees:
        dfs_print_tree(root)
        print()
