// Problem: https://leetcode.com/problems/power-of-three/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        if(n==1) return true;

        return n%3==0 && isPowerOfThree(n/3);
    }
};
