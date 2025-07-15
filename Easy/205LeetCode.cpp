// Problem: https://leetcode.com/problems/isomorphic-strings/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;
        for(int i=0; i<s.size(); i++){
            if(mapS.find(s[i])==mapS.end()){
                mapS[s[i]]=t[i];
            }else{
                if(mapS[s[i]]!=t[i]){
                    return false;
                }
            }
            if(mapT.find(t[i])==mapT.end()){
                mapT[t[i]]=s[i];
            }else{
                if(mapT[t[i]]!=s[i]){
                    return false;
                }
            }
        }

        return true;
    }
};
