https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q) return root;
        TreeNode *lt = lowestCommonAncestor(root->left, p, q);
        TreeNode *rt = lowestCommonAncestor(root->right, p, q);
        if(!lt) return rt;
        if(!rt) return lt;
        return root;

        
        // if((root->val>p->val) && (root->val>q->val)) return lowestCommonAncestor(root->left, p, q);
        // if((root->val<p->val) && (root->val<q->val)) return lowestCommonAncestor(root->right, p, q);
        // return root;
    }
};
