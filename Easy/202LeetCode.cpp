// Problem: https://leetcode.com/problems/happy-number/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int sumSquare(int n){
        int sum=0;
        while(n>0){
            int dig=n%10;
            sum+= (dig * dig);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> visited;

        while(n!=1 && visited.find(n)==visited.end()){
            visited.insert(n);
            n=sumSquare(n);
        }

        return n==1;
    }
};
