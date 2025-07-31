// Problem: https://leetcode.com/problems/reorder-list/
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
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return;

        vector<int> nums;

        ListNode* temp=head;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }

        int n=nums.size()-1;
        int i=1;

        ListNode* current=head;
        bool takeFromEnd=true;
        while(i<=n){
            if(takeFromEnd){
                current->next=new ListNode(nums[n--]);
            }else{
                current->next=new ListNode(nums[i++]);
            }
            current=current->next;
            takeFromEnd=!takeFromEnd;
        }
    }
};
