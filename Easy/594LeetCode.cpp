// Problem: https://leetcode.com/problems/longest-harmonious-subsequence/
// Category: Easy
// Language: C++
// Time Complexity: O(logn), Space Complexity: O(1)


class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int j=0, maxLenght=0;

        for(int i=0; i<nums.size(); i++){
            while(nums[i]-nums[j]>1){
                j++;
            }
            if(nums[i]-nums[j]==1){
                maxLenght=max(maxLenght, i-j+1);
            }
        }

        return maxLenght;
    }
};
