// Problem: https://leetcode.com/problems/word-pattern/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(2)


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map;
        unordered_map<string, char> map2;

        vector<string> words;
        stringstream ss(s);
        string word;

        while(ss>>word){
            words.push_back(word);
        }

        if(pattern.size()!=words.size()){
            return false;
        }

        for(int i=0; i<pattern.size(); i++){
            if(map.find(pattern[i])==map.end()){
                map[pattern[i]]=words[i];
            }else{
                if(map[pattern[i]]!=words[i]){
                    return false;
                }
            }
            if(map2.find(words[i])==map2.end()){
                map2[words[i]]=pattern[i];
            }else{
                if(map2[words[i]]!=pattern[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
