// Problem: https://leetcode.com/problems/set-matrix-zeroes/
// Category: Medium
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }
        
        for(auto& zero : zeros) {
            int row = zero.first, col = zero.second;
            
            for(int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0;
            }
            
            for(int i = 0; i < matrix.size(); i++) {
                matrix[i][col] = 0;
            }
        }
    }
};
