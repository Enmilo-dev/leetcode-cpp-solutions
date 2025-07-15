// Problem: https://leetcode.com/problems/valid-word/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)

class Solution {
public:

    bool isVowel(char ch){
        string vowel= "aeiouAEIOU";
        return vowel.find(ch)!=string::npos;
    }

    bool isValid(string word) {
        if(word.size()<3){
            return false;
        }

        int ch=0;
        int vowel=0;
        int cons=0;

        for(auto val: word){
            if(!isalnum(val)){
                return false;
            }else{
                ch++;
            }
            if(isVowel(val)){
                vowel++;
            }else if(!(val>='0' && val<='9')){
                cons++;
            }
        }

        return vowel>=1 && cons>=1 && ch>=3;
    }
};
