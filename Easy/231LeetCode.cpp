// Problem: https://leetcode.com/problems/power-of-two/
// Category: Easy
// Language: C++
// Time Complexity: O(logn), Space Complexity: O(1)


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n&(n-1))==0;
    }
};
