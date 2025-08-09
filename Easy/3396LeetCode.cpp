// Problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(101)


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> map(101);

        for(int i=nums.size()-1; i>=0;--i){
            if(++map[nums[i]]>1) return (i+3)/3;
        }
        return 0;
    }
};
