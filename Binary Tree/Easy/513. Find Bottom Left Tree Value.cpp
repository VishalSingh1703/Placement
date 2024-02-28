https://leetcode.com/problems/find-bottom-left-tree-value/?envType=daily-question&envId=2024-02-28


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

    void solve(TreeNode* node, vector<int> &nums, int h)
    {
        if(!node) return;

        if(nums.size() < h) nums.push_back(node->val);

        solve(node->left, nums, h+1);
        solve(node->right, nums, h+1);
    }

    int findBottomLeftValue(TreeNode* root) 
    {
        vector<int> nums;
        solve(root, nums, 1);
        return nums.back();
    }
};
