// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer=0;

        int buy=prices[0];
        for(int i=1; i<prices.size(); i++){
            answer=max(answer, prices[i]-buy);
            buy=min(buy, prices[i]);
        }

        return answer;
    }
};
