// Problem: https://leetcode.com/problems/palindrome-linked-list/
// Category: Easy
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
    bool isPalindrome(ListNode* head) {
        stack<int> store;

        ListNode* curr=head;

        while(curr){
            store.push(curr->val);
            curr=curr->next;
        }

        curr=head;

        while(curr && curr->val==store.top()){
            store.pop();
            curr=curr->next;
        }

        return curr==nullptr;
    }
};
