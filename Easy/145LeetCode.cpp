// Problem: https://leetcode.com/problems/binary-tree-postorder-traversal/
// Category: Easy
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;

        helper(root, answer);

        return answer;
    }

    void helper(TreeNode* root, vector<int>& answer){
        if(root==nullptr) return;

        helper(root->left, answer);
        helper(root->right, answer);

        answer.push_back(root->val);
    }
};
