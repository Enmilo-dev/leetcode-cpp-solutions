// Problem: https://leetcode.com/problems/reverse-linked-list/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


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
    ListNode* reverseList(ListNode* head) {
        ListNode* ans=nullptr;

        while(head){
            ListNode* temp=head->next;
            head->next=ans;

            ans=head;
            head=temp;
        }

        return ans;
    }
};
