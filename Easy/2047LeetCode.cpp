// Problem: https://leetcode.com/problems/number-of-valid-words-in-a-sentence/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    bool isValid(string& word){
        int n=word.size();
        int hyphen=0;

        for(int i=0; i<n; i++){
            char ch=word[i];
            if(isdigit(ch)||(ch=='!') && i!=n-1) return false;
            if(isalpha(ch)) continue;

            if(ch=='-'){
                if(++hyphen>1) return false;
                if(i==0 || i==n-1 || !isalpha(word[i-1]) || !isalpha(word[i+1])) return false;
            }
            else if(i!=n-1) return false;
        }
        return true;
    }
    int countValidWords(string s) {
        int ans=0;
        stringstream ss(s);
        string token;

        while(getline(ss,token,' ')){
            if(token.empty()) continue;
            ans+=isValid(token);
        }
        return ans;
    }
};
