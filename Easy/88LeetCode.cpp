// Problem: https://leetcode.com/problems/merge-sorted-array/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n-1;
        n--;
        m--;
        while(n>=0 && m>=0){
            if(nums1[m]<nums2[n]){
                nums1[i--]=nums2[n--];
            }else{
                nums1[i--]=nums1[m--];
            }
        }
        while(n>=0) nums1[i--]=nums2[n--];
    }
};
