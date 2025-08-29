// Problem: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    int count = 0;
    int kthSmallest(TreeNode* root, int k) {
        if (root->left) {
            int leftAns = kthSmallest(root->left, k);
            if (leftAns!=-1) {
                return leftAns;
            }
        }

        if (count+1 == k) {
            return root->val;
        }
        count++;

        if(root->right) {
            int rightAns = kthSmallest(root->right, k);
            if (rightAns!=-1) {
                return rightAns;
            }
        }
        return -1;
    }
};
