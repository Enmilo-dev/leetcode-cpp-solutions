// Problem: https://leetcode.com/problems/reverse-linked-list-ii/
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> nums;
        ListNode* temp=head;

        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }

        right=nums.size()-right;

        reverse(nums.begin()+left-1, nums.end()-right);

        ListNode* newHead=new ListNode(nums[0]);
        temp=newHead;

        for(int i=1; i<nums.size(); i++){
            temp->next=new ListNode(nums[i]);
            temp=temp->next;
        }

        return newHead;
    }
};
