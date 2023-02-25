import sys
from clang.cindex import Index

index = Index.create()
translation_unit = index.read("asts/orig_asts/2mm.ast")
print('Translation unit:', translation_unit.spelling)

def dfs_cursor(unit, cur_level):
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

    # .type.kind
    #    TypeKind.POINTER, TypeKind.FUNCTIONPROTO

    # .type.kind
    #   FILE, int *, etc

    # Basically print out the original code
    # print(" " * cur_level + "|-", " ".join([e.spelling for e in unit.get_tokens()]))

    usr = str(unit.get_usr())
    if usr.startswith("c:@SA@") or usr.startswith("c:@T@"):
        return

    print(" " * cur_level + "|-", unit.get_usr(), unit.type.spelling, unit.displayname)
    for child in unit.get_children():
        dfs_cursor(child, cur_level+1)


dfs_cursor(translation_unit.cursor, 0)

