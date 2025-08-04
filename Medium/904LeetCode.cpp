// Problem: https://leetcode.com/problems/fruit-into-baskets/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int answer=0;
        int last=-1, secondLast=-1;
        int lastCount=0, curr=0;
        for(auto val: fruits){
            if(val==last || val ==secondLast){
                curr++;
            }else{
                curr=lastCount+1;
            }

            if(val==last){
                lastCount++;
            }else{
                lastCount=1;
                secondLast=last;
                last=val;
            }
            answer=max(answer, curr);
        }

        return answer;
    }
};
