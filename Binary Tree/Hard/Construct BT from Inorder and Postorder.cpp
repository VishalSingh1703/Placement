https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *build(vector<int> &in, int x, int y, vector<int> &po, int a, int b)
    {
        if(x>y || a>b) return nullptr;
        TreeNode *node = new TreeNode(po[b]);
        int si = x;
        while(node->val != in[si])si++;
        node->left = build(in, x, si-1, po, a, a+si-x-1);
        node->right = build(in, si+1, y, po, a+si-x, b-1);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& in, vector<int>& po) {
        return build(in, 0, in.size()-1, po, 0, po.size()-1);
    }
};
