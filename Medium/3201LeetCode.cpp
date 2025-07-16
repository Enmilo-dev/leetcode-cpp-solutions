// Problem: https://leetcode.com/problems/reverse-words-in-a-string/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenCount = 0, oddCount = 0;
        for (int num : nums) {
            if (num % 2 == 0) evenCount++;
            else oddCount++;
        }

        int count0 = 0, count1 = 0;
        int expect0 = 0, expect1 = 1;
        
        for (int num : nums) {
            int parity = num % 2;
            if (parity == expect0) {
                count0++;
                expect0 = 1 - expect0;
            }
            if (parity == expect1) {
                count1++;
                expect1 = 1 - expect1;
            }
        }

        return max({evenCount, oddCount, count0, count1});
    }
};
