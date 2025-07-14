// Problem: https://leetcode.com/problems/reverse-words-in-a-string/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)

class Solution {
public:
    string reverseWords(string s) {
        string answer="";
        reverse(s.begin(), s.end());

        for(int i=0; i<s.size(); i++){
            string temp="";
            while(i<s.size() && s[i]!=' '){
                temp+=s[i++];
            }
            if(temp.size()>0){
                reverse(temp.begin(), temp.end());
                answer+=" "+temp;
            }
        }
        return answer.substr(1);
    }
};
