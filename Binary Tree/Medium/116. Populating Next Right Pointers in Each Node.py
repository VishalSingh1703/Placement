https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/



"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=0, left=None, right=None, next=None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution(object):
    def connect(self, root):
        if root is None:
            return root

        if root.left is not None:
            root.left.next = root.right

        if root.right is not None and root.next is not None:
            root.right.next = root.next.left

        self.connect(root.left)
        self.connect(root.right)

        return root



# class Solution(object):
#     def connect(self, root):
#         if not root: return None
#         q = deque([root])
#         while q:
#             rightNode = None
#             for _ in range(len(q)):
#                 cur = q.popleft()
#                 cur.next, rightNode = rightNode, cur
#                 if cur.right:
#                     q.extend([cur.right, cur.left])
#         return root
        
