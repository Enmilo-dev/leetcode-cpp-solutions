// Problem: https://leetcode.com/problems/two-sum/
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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int Decimal=0;

        while(temp!= nullptr){
            Decimal=Decimal*2+temp->val;
            temp=temp->next;
        }

        return Decimal;
    }
};
