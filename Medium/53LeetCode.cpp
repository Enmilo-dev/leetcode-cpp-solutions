// Problem: https://leetcode.com/problems/maximum-subarray/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN, temp=0;

        for(const auto val: nums){
            temp+=val;
            sum=max(sum, temp);
            if(temp<0) temp=0;
        }

        return sum;
    }
};
