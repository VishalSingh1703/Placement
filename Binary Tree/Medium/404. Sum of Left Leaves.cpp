https://leetcode.com/problems/sum-of-left-leaves/?envType=daily-question&envId=2024-04-14


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
    int sum;
    void dfs(TreeNode *root)
    {
        if(root->left)
        {
            if(!root->left->left && !root->left->right) sum += root->left->val;
            dfs(root->left);
        }
        if(root->right) dfs(root->right);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        sum = 0;
        dfs(root);
        return sum;
    }
};
