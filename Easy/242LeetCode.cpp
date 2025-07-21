// Problem: https://leetcode.com/problems/valid-anagram
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for(int i=0; i<s.size(); i++){
            sMap[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            tMap[t[i]]++;
        }


        return sMap==tMap;
    }
};
