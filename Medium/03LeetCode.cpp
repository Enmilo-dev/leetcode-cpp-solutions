// Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> ch;
        int j=0;
        int ans=0;

        for(int i=0; i<s.size(); i++){
            while(j<s.size() && ch.find(s[i])!=ch.end()){
                ch.erase(s[j++]);
            }
            ch.insert(s[i]);
            ans = max(ans, i-j+1);
        }

        return ans;
    }
};
