import logging
import sys
import os
from clang.cindex import *

log = logging.getLogger("tree.py")

class TreeNode():
    def __init__(self, cursor=None, depth=-1):
        if cursor is None:
            self.translation_unit = None 
            self.cursor_kind = None
        else:
            self.cursor_kind = cursor.kind
            self.translation_unit = cursor.translation_unit
        self.cursor = cursor
        self.parent = None
        self.children = []
        self.depth = depth
    
    def get_children(self):
        return self.children

    # TODO: not sure how this work
    def get_nodes_pre(self, only_name: bool):
        """ Traverses tree and returns a list of nodes in preorder
            if only_name then list of strings, else list od node objects
        """
        nodes = []
        def _get_children(node):
            for child in node.children:
                nodes.append(str(child.cursor_kind) if only_name else child)
                _get_children(child)
        nodes.append(str(self.cursor_kind) if only_name else self)
        _get_children(self)
        return nodes

    def get_nodes_postorder(self, only_name: bool):
        """ Traverses tree and returns a list of nodes in preorder
            if only_name then list of strings, else list od node objects
        """
        
        nodes = []
        def _get_children(node):
            for child in node.children:
                _get_children(child)
            nodes.append(str(child.cursor_kind) if only_name else child.cursor)
        get_children(self)
        return nodes

    def get_descendants(self, node):
        """ Traverses a subtree rooted in a node,
            returns list of node descendants
        """

        nodes = []
        def f(node):
            for child in node.children:
                nodes.append(child)
                f(child)
        f(node)
        return nodes


def dfs_print_tree(node, cur_level=0):
    print(" " * cur_level + "|-", node.cursor_kind, node.cursor.displayname)
    for child in node.get_children():
        dfs_print_tree(child, cur_level+1)


def dfs_build_tree(cursor, cur_level=0):
    # Remove parameters for function
    if cursor.kind == CursorKind.PARM_DECL:
        return None
    # print(" " * cur_level + "|-", cursor.kind, cursor.spelling, cursor.displayname)

    cur_node = TreeNode(cursor, cur_level)

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


def create_ast_tree(translation_unit, symbols):
    file_prefix = str
    function_trees = {}

    for top_node in translation_unit.cursor.get_children():
        # Remove included functions
        # node_location = top_node.location.file
        # if node_location is not None and\
        #         translation_unit.spelling not in str(node_location):
        #     continue
        
        if top_node.type.kind != TypeKind.FUNCTIONPROTO:
            continue
        if check_only_def(top_node):
            continue

        # Remoe __wasm* and CLIBS
        func_name = top_node.displayname.split("(")[0]
        if func_name not in symbols:
            continue

        # print(func_name)
        node = dfs_build_tree(top_node)
        function_trees[func_name] = node
    return function_trees

