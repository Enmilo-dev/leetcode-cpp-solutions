// Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;

        int maxWater=0;

        while(start<end){
            maxWater=max(maxWater, (min(height[start], height[end]))*(end-start));
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }

        return maxWater;
    }
};
