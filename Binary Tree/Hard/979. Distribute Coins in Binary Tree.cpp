https://leetcode.com/problems/distribute-coins-in-binary-tree/?envType=daily-question&envId=2024-05-18


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
    int res = 0;
    int dfs(TreeNode *root)
    {
        if(!root) return 0;
        
        int l_extra, r_extra, extra;
        l_extra = dfs(root->left);
        r_extra = dfs(root->right);
        extra = root->val - 1 + l_extra + r_extra;
        res += labs(extra);
        return extra;
    }

    int distributeCoins(TreeNode* root) 
    {
        dfs(root);
        return res;
    }
};
