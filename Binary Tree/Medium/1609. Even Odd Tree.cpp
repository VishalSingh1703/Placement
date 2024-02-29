https://leetcode.com/problems/even-odd-tree/


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
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*>q;
        bool evelLevel=true;
        q.push(root);

        while(!q.empty()){
            int size = q.size() ;
            int prev = evelLevel ? INT_MIN : INT_MAX;
            while(size-- > 0)
            {
                TreeNode* root = q.front();
                q.pop();  
                if(evelLevel && (root->val %2==0 || root->val <=  prev)) return false;
                else if(!evelLevel && (root->val %2!=0  || root->val  >= prev)) return false;

                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
                prev = root->val;

            }
            evelLevel=!evelLevel;
        }
        return true;
    }
};
