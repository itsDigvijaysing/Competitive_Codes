from collections import defaultdict
from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def treeQueries(self, root: Optional[TreeNode], queries: List[int]) -> List[int]:
        def calc_depth(node):
            if node is None:
                return 0
            left_d, right_d = calc_depth(node.left), calc_depth(node.right)
            node_depths[node] = 1 + max(left_d, right_d)
            return node_depths[node]

        def depth_first_search(node, curr_depth, max_visible):
            if node is None:
                return
            curr_depth += 1
            query_results[node.val] = max_visible
            depth_first_search(node.left, curr_depth, max(max_visible, curr_depth + node_depths[node.right]))
            depth_first_search(node.right, curr_depth, max(max_visible, curr_depth + node_depths[node.left]))

        node_depths = defaultdict(int)
        calc_depth(root)
        query_results = [0] * (len(node_depths) + 1)
        depth_first_search(root, -1, 0)
        return [query_results[val] for val in queries]