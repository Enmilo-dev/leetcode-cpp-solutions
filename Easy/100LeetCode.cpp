// Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr||q==nullptr)
            return p==q;
        
        bool isLeft = isSameTree(p->left, q->left);
        bool isRight = isSameTree(p->right, q->right);

        return isLeft && isRight && p->val==q->val;
    }
};
