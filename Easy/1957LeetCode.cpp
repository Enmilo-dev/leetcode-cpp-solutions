// Problem: https://leetcode.com/problems/game-of-life/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    string makeFancyString(string s) {
        if (s.empty()) return s;
        
        string result;
        result += s[0];
        int count = 1;
        
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                if (count < 2) {
                    result += s[i];
                    count++;
                }
            } else {
                result += s[i];
                count = 1;
            }
        }
        
        return result;
    }
};
