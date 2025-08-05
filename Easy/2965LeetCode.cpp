// Problem: https://leetcode.com/problems/find-missing-and-repeated-values/
// Category: Easy
// Language: C++
// Time Complexity: O(n^2), Space Complexity: O(n^2)


class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>gr;
        vector<int>ans(2,0);

        for(auto &row: grid){
            for(auto &col: row){
                gr.push_back(col);
            }
        }

        sort(gr.begin(), gr.end());

        if(gr[0]!=1) ans[1]=1;
        for(int i=1; i<gr.size(); i++){
            if(gr[i]==gr[i-1]){
                ans[0]=gr[i];
            }
            if(gr[i]-gr[i-1]==2){
                ans[1]=gr[i]-1;
            }
        }
        if(gr.back()!=gr.size()) ans[1]=gr.size();

        return ans;
    }
};
