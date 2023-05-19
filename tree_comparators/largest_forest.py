from collections import deque

from structures.tree import *
import sorting

# TODO
class LargestForest():
    """ Class for largest common forest algortihm """
    
    def __init__(self, T1: TreeNode, T2: TreeNode) -> None:
        self.T1 = T1
        self.T2 = T2

    def count_certificates(self) -> None:
        """ Traverse tree and count certificate for each node

            If two nodes have same certificate value, subtrees rooted
            in these nodes are isomorphic.
        """

        certificates = {}
        count = 0
        T1_nodes_post = self.T1.get_nodes_postorder(only_name=False)
        T2_nodes_post = self.T2.get_nodes_postorder(only_name=False)
        for node in T1_nodes_post + T2_nodes_post:
            if len(node.children) > 0:
                certificate = (node.name, tuple(child.certificate for child in node.children))
            else:
                certificate = (node.name, None)
            if certificate in certificates:
                node.certificate = certificates[certificate]
            else:
                certificates[certificate] = count
                node.certificate = count
                count += 1
            node.size = sum(child.size for child in node.children) + 1

    def largest_common_forest(self, min_size: int=1) -> (int, int):
        """ Find largest common subtrees and calculate size of the forest """

        L1 = self.T1.get_nodes_postorder(only_name=False)
        L1 = bucket_sort(L1, lambda x: x.certificate)
        L2 = self.T2.get_nodes_postorder(only_name=False)
        L2 = bucket_sort(L2, lambda x: x.certificate)

        max_size = max(len(L1), len(L2))

        for node in L1 + L2: 
            node.marked = False
        v = L1.pop()
        w = L2.pop()
        common = 0

        while len(L1) > 0 and len(L2) > 0:
            if v.marked or v.certificate > w.certificate:
                v = L1.pop()
            elif w.marked or v.certificate < w.certificate:
                w = L2.pop()
            else:
                if v.size >= min_size:
                    common += v.size
                v.marked = True
                for node in self.T1.get_descendants(v):
                    node.marked = True
                v = L1.pop()
                w.marked = True
                for node in self.T2.get_descendants(w):
                    node.marked = True
                w = L2.pop()
        return common, max_size
        
    def count_similarity(self, n) -> float:
        """ Count similarity using largest forest algorithm """

        self.count_certificates()
        common, max_size = self.largest_common_forest(n)
        return common / max_size         


def bucket_sort(list_to_sort, function):
    """ Bucket sort algortihm

        When used with uniform distribution expected linear time
    """

    buckets = [[] for _ in range(len(list_to_sort))]
    max_value = max([function(el) for el in list_to_sort])
    # put each value in proper bucket
    for j in list_to_sort:
        index_b = int((len(list_to_sort)) * function(j) / (max_value+1))
        buckets[index_b].append(j)
    
    # sort values in each bucket
    for i in range(len(list_to_sort)):
        buckets[i].sort(key=function)
    
    # merge all sorted buckets
    k = 0
    for i in range(len(list_to_sort)):
        for j in range(len(buckets[i])):
            list_to_sort[k] = buckets[i][j]
            k += 1
    return list_to_sort
