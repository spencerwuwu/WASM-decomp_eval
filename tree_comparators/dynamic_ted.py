from structures.tree import Tree
from structures.node import Node

# TODO
def tree_edit_distance(T1: Tree, T2: Tree) -> float:
    """ Calculate distance between two rooted trees using TED algorithm
        Returns float from [0,1] range
    """

    T1.depth_calc()
    T2.depth_calc()
    A = [None] + T1.get_nodes_pre(only_name=False)
    B = [None] + T2.get_nodes_pre(only_name=False)
    D = [[0 for _ in range(len(B))] for _ in range(len(A))]
    D[0][0] = 0
    for i in range(1, len(A), 1):
        D[i][0] = D[i-1][0] + 1
    for j in range(1, len(B), 1):
        D[0][j] = D[0][j-1] + 1
    for i in range(1, len(A), 1):
        for j in range(1, len(B), 1):
            m1, m2, m3 = float('inf'), float('inf'), float('inf')
            # if diagonal edge exists
            if A[i].depth == B[j].depth:
                m1 = D[i-1][j-1] 
            # if vertical edge exists
            if j == len(B)-1 or B[j+1].depth <= A[i].depth:
                m2 = D[i-1][j] + 1
            # if horizontal edge exists
            if i == len(A)-1 or A[i+1].depth <= B[j].depth:
                m3 = D[i][j-1] + 1
            D[i][j] = min(m1, m2, m3)
    return  1 - D[len(A)-1][len(B)-1] / (len(A) + len(B) - 2)
