// Problem: https://leetcode.com/problems/reverse-words-in-a-string/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int answer = INT_MAX;
        int sum=0;
        int left=0, right=0;

        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                answer=min(answer, right-left+1);
                sum-=nums[left++];
            }
            right++;
        }

        return answer==INT_MAX? 0: answer;
    }
};
