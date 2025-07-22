// Problem: https://leetcode.com/problems/maximum-erasure-value/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int answer=0, curr=0, st=0;
        unordered_set<int> l;

        for(int i=0; i<nums.size(); i++){

            while(l.count(nums[i])){
                curr-=nums[st];
                l.erase(nums[st++]);
            }

            l.insert(nums[i]);
            curr+=nums[i];
            answer=max(answer, curr);
        }

        return answer;
    }
};
