// Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Category: Medium
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail=head;
        int count=1;

        while(tail->next!=nullptr){
            tail=tail->next;
            count++;
        }

        if(n==count){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }

        tail=head;
        for(int i=0; i<count-n-1;i++){
            tail=tail->next;
        }

        ListNode* nodeDelete=tail->next;
        tail->next=tail->next->next;
        delete nodeDelete;

        return head;
    }
};
