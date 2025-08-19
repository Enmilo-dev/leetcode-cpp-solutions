// Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int l=0, ans=0, diff=0;

        for(int r=1; r<nums.size(); r++) {
            int currDiff=nums[r]-nums[r-1];
            if (currDiff==diff) {
                if (r-l+1==3) {
                    ans++;
                }else if (r-l+1>3) {
                    ans+=r-l-1;
                }
            } else {
                diff=currDiff;
                l=r-1;
            }
        }

        return ans;
    }
};
