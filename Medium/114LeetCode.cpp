// Problem: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


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
    void preOrder(TreeNode* root, vector<int> &nums) {
        if(root==nullptr) return;
        nums.push_back(root->val);

        preOrder(root->left, nums);
        preOrder(root->right, nums);
    }

    void flatten(TreeNode* root) {
        vector<int> nums;
        preOrder(root, nums);

        TreeNode* curr = root;

        for (int i=0; i<nums.size(); i++) {
            curr->val=nums[i];
            curr->left=nullptr;

            if (i<nums.size()-1) {
                if (curr->right == nullptr) {
                    curr->right = new TreeNode();
                }
                curr = curr->right;
            }
        }
    }
};
