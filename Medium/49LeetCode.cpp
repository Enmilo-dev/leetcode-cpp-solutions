// Problem: https://leetcode.com/problems/group-anagrams/
// Category: Medium
// Language: C++
// Time Complexity: O(m*n), Space Complexity: O(m*n)


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string, int> map;

        for(int i=0; i<strs.size(); i++){
            int count[26]={0};
            for(int j=0; j<strs[i].size();j++){
                count[strs[i][j]-'a']++;
            }

            string key="";
            for(int k=0; k<26; k++){
                key+=to_string(count[k])+"#";
            }

            if(map.find(key)!=map.end()){
                answer[map[key]].push_back(strs[i]);
            }else{
                map[key]=answer.size();
                answer.push_back({strs[i]});
            }
        }

        return answer;
    }
};
