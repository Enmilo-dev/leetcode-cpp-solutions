// Problem: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int sum=0;
        vector<int> nums;

        while(head){
            nums.push_back(head->val);
            head=head->next;
        }

        for(int i=0; i<nums.size()/2; i++){
            sum=max(sum, nums[i]+nums[nums.size()-1-i]);
        }

        return sum;
    }
};
