// Problem: https://leetcode.com/problems/single-number/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer=0;

        for(auto val: nums){
            answer^=val;
        }

        return answer;
    }
};
