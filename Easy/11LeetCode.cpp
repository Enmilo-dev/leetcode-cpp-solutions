// Problem: https://leetcode.com/problems/container-with-most-water
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int maxArea(vector<int>& height) {
       int water=-1;

       int st=0, en=height.size()-1;

       while(st<en){
        water=max(water, (en-st)*min(height[st], height[en]));
        if(height[st]<height[en]){
            st++;
        }else{
            en--;
        }
       }

       return water;
    }
};
