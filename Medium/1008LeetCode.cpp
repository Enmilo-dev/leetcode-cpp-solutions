// Problem: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


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
    TreeNode* insert(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);

        if (root->val < val) {
            root->right = insert(root->right, val);
        } else {
            root->left = insert(root->left, val);
        }

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) return nullptr;
        TreeNode* root = nullptr;

        for (auto &val:preorder) {
            root = insert(root, val);
        }
        return root;
    }
};
