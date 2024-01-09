https://leetcode.com/problems/leaf-similar-trees/?envType=daily-question&envId=2024-01-09


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
    void inorder(TreeNode *root, vector<int> &nums)
    {
        if(!root) return;
        inorder(root->left, nums);
        if(!root->left && !root->right) nums.push_back(root->val);
        inorder(root->right, nums);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> nums1, nums2;
        inorder(root1, nums1);
        inorder(root2, nums2);
        if(nums1. size() != nums2.size()) return false;
        for(int i = 0; i<nums1.size(); i++)
        {
            if(nums1[i] != nums2[i]) return false;
        }
        return true;
    }
};
