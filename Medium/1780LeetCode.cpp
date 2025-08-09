// Problem: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/
// Category: Medium
// Language: C++
// Time Complexity: O(log3n), Space Complexity: O(1)


class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            int reminder=n%3;
            if(reminder==2) return false;
            n/=3;
        }
        return true;
    }
};
