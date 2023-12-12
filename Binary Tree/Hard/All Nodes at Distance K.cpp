https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    unordered_map<TreeNode*, TreeNode*> parent;
    unordered_set<TreeNode*> visited; 

    void findParent(TreeNode* node)
    {
        if(!node) return;
        if(node->left)
        {
            parent[node->left] = node;
            findParent(node->left);
        }
        if(node->right)
        {
            parent[node->right] = node;
            findParent(node->right);
        }
    }

    void dfs(TreeNode *node, int k)
    {
        if(!node) return;
        if(visited.count(node) > 0) return;
        visited.insert(node);
        if(k == 0)
        {
            ans.push_back(node->val);
            return;
        }
        dfs(node->left, k-1);
        dfs(node->right, k-1);
        dfs(parent[node], k-1);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(!root) return {};
        findParent(root);
        dfs(target, k);
        return ans;
    }
};
