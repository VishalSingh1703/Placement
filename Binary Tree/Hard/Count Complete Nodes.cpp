https://leetcode.com/problems/count-complete-tree-nodes/


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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        TreeNode *l = root, *r = root;
        int height = 0;
        while(r)
        {
            l = l->left;
            r = r->right;
            height++;
        }
        if(!l) return (1<<height) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
