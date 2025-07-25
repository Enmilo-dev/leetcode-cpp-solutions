// Problem: https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> seen;
        int sum=0, minusSum=INT_MIN;
        bool positive = false;

        for(auto val: nums){
            if(!seen.count(val)){
                if(val>0){
                    positive=true;

                    seen.insert(val);
                    sum+=val;
                }else if(!positive){
                    minusSum=max(minusSum, val);
                }
            }
        }

        if(!positive){
            sum=minusSum;
        }

        return sum;
    }
};
