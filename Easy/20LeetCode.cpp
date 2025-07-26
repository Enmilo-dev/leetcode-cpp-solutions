// Problem: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    bool isValid(string s) {
        stack<char> str;

        for(auto val: s){
            if(str.size()!=0 && ((str.top()=='(' && val==')' )|| (str.top()=='{' && val=='}') || (str.top()=='[' && val==']'))){
                str.pop();
            }else{
                str.push(val);
            }
        }

        return str.size()==0;
    }
};
