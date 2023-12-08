https://leetcode.com/problems/construct-string-from-binary-tree/?envType=daily-question&envId=2023-12-08


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
    static void solve(TreeNode* node, string &ans)
    {
        if(!node) return;
        ans += to_string(node->val);
        if(node->left)
        {
            ans += '(';
            solve(node->left, ans);
            ans += ')';
        }
        if(node->right)
        {
            if(!node->left) ans += "()";
            ans += '(';
            solve(node->right, ans);
            ans += ')';
        }
    }

    string tree2str(TreeNode* root) {
        string ans;
        solve(root, ans);
        return ans;
    }
};
