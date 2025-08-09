// Problem: https://leetcode.com/problems/power-of-four/
// Category: Easy
// Language: C++
// Time Complexity: O(logn), Space Complexity: O(1)


class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;

        return n%4==0 && isPowerOfFour(n/4);
    }
};
