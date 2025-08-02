// Problem: https://leetcode.com/problems/split-array-by-prime-indices/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;

        for(int i=3; i*i<=n; i+=2){
            if(n%i==0)return false;
        }
        return true;
    }

    long long splitArray(vector<int>& nums) {
        if (nums.size()==0) return 0;

        vector<int> A, B;

        for(int i=0; i< nums.size(); i++){
            if(isPrime(i)){
                A.push_back(nums[i]);
            }else{
                B.push_back(nums[i]);
            }
        }

        long long aSum=0, bSum=0;
        for(auto val: A){
            aSum+=val;
        }
        for(auto val: B){
            bSum+=val;
        }

        return abs(aSum-bSum);
    }
};
