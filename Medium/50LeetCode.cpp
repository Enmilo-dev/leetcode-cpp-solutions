// Problem: https://leetcode.com/problems/powx-n/
// Category: Medium
// Language: C++
// Time Complexity: O(log(n)), Space Complexity: O(1)


class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long num=abs((long long)n);

        while(num>0){
            if(num&1) result*=x;
            x*=x;
            num>>=1;
        }

        return n>=0?result:1/result;
    }
};
