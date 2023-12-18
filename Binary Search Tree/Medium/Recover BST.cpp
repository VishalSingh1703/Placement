https://leetcode.com/problems/recover-binary-search-tree/


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
    TreeNode *firstMis, *secondMis, *pre;
    void recoverTree(TreeNode* root) {
        pre = new TreeNode(INT_MIN);
        inorder(root);
        swap(firstMis->val, secondMis->val);
    }
    void inorder(TreeNode *root)
    {
        if(!root) return;
        inorder(root->left);
        if(!firstMis && root->val<pre->val) firstMis = pre;
        if(firstMis && root->val<pre->val) secondMis = root;
        pre = root;
        inorder(root->right);
    }
};
