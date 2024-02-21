https://leetcode.com/problems/sum-root-to-leaf-numbers/description/


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def treeSum(self, node, val):
        if node is None: return 0
        val = val * 10 + node.val
        if node.left is None and node.right is None: return val
        return ( self.treeSum(node.left, val) + self.treeSum(node.right, val) )

    def sumNumbers(self, root):
        return self.treeSum(root, 0)        
