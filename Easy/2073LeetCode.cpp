// Problem: https://leetcode.com/problems/time-needed-to-buy-tickets/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int answer=0;
        int i=0;

        while(tickets[k]!=0) {
            if(tickets[i]!=0) {
                tickets[i]-=1;
                answer++;
            }
            i++;
            if (i>tickets.size()-1) i=0;
        }

        return answer;
    }
};
