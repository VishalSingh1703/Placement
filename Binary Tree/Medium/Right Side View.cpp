https://leetcode.com/problems/binary-tree-right-side-view/


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
    void solve(TreeNode *root, int level, vector<int> &ans)
    {
        if(!root) return;
        if(ans.size()<level) ans.push_back(root->val);
        solve(root->right, level + 1, ans);
        solve(root->left, level + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        solve(root, 1, ans);
        return ans;
    }
};


// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int>ans;
//         if(!root) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int s = q.size();
//             vector<int> nums;
//             for(int i = 0; i<s; i++)
//             {
//                 TreeNode *node = q.front();
//                 q.pop();
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//                 nums.push_back(node->val);
//             }
//             ans.push_back(nums.back());
//         }
//         return ans;
//     }
// };
