// Problem: https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode* middleNode(ListNode* head) {
        int n=0;

        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            n++;
        }

        temp=head;
        for(int i=0; i<n/2; i++){
            temp=temp->next;
        }

        return temp;
    }
};
