// Problem: https://leetcode.com/problems/merge-intervals/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++){
            vector<int>& last=result.back();

            if(last[1]>=intervals[i][0]){
                last[1]=max(last[1], intervals[i][1]);
            }else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};
