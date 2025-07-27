// Problem: https://leetcode.com/problems/count-hills-and-valleys-in-an-array
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int start=0;
        int mid=1;
        int end=2;
        int answer=0;

        while(mid<nums.size()){
            if(nums[mid]==nums[mid-1]){
                nums.erase(nums.begin()+mid);
            }else{
                mid++;
            }
        }
        mid=1;

        while(end<nums.size()){
            if((nums[start]<nums[mid] && nums[mid]>nums[end]) 
                || (nums[start]>nums[mid] && nums[mid]<nums[end])){
                answer++;
                start++; mid++; end++;
            }else{
                start++; mid++; end++;
            }
        }

        return answer;
    }
};
