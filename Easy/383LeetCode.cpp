// Problem: https://leetcode.com/problems/ransom-note/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for(char val: magazine){
            map[val]++;
        }

        for(char val: ransomNote){
            if(map[val]==0){
                return false;
            }else{
                map[val]--;
            }
        }

        return true;
    }
};
