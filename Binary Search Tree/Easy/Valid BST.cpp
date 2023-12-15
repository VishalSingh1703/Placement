https://leetcode.com/problems/validate-binary-search-tree/submissions/1120282135/


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
    bool isValidBST(TreeNode* root) 
    {
        return check(root, NULL, NULL);
    }

    bool check(TreeNode *root, TreeNode *minNode, TreeNode *maxNode)
    {
        if(!root) return true;
        if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val) return false;
        return check(root->left, minNode, root) && check(root->right, root, maxNode);
    }
};

// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         return help(root, LONG_MIN, LONG_MAX);
//     }
    
//     bool help(TreeNode* root, long min, long max){
//         if(!root)   return true;
//         if(root->val <= min || root->val >= max)  return false;
//         return help(root->left, min, root->val) && help(root->right, root->val, max);
//     }
// };
