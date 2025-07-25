// Problem: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        int maxLength=0;
        unordered_set<int> seen(nums.begin(), nums.end());

        for(auto val: seen){
            if(!seen.count(val-1)){
                int currNum=val;
                int currLength=1;
                while(seen.count(currNum+1)){
                    currNum++;
                    currLength++;
                }
                maxLength=max(maxLength, currLength);
            }
        }

        return maxLength;
    }
};
