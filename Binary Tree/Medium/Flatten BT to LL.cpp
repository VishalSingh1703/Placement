https://leetcode.com/problems/flatten-binary-tree-to-linked-list/


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    TreeNode *prev = NULL;

public:
    void flatten(TreeNode *root) {
        if (!root)
            return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
};

// Driver code
int main() {
    Solution sol;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    sol.flatten(root);

    // The tree is modified in place. You can print the modified structure.
    // The right pointers now form a flattened structure.
    
    return 0;
}
