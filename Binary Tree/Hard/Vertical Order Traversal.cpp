https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/


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
#define rep(i, a, b) for(int i = a; i<b; i++)
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int, map<int, multiset<int>>> nodes;
        traverse(root, 0, 0, nodes);
        vector<vector<int>> ans;
        for(auto p : nodes)
        {
            vector<int> col;
            for(auto q : p.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }

    void traverse(TreeNode *node, int x, int y, map<int, map<int, multiset<int>>> &nodes)
    {
        if(node)
        {
            nodes[x][y].insert(node->val);
            traverse(node->left, x-1, y+1, nodes);
            traverse(node->right, x+1, y+1, nodes);
        }
    }
};
