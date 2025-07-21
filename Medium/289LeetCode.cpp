// Problem: https://leetcode.com/problems/game-of-life/
// Category: Medium
// Language: C++
// Time Complexity: O(n*m), Space Complexity: O(1)


class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                int liveNeighbors = 0;
                
                for (int i = r - 1; i <= r + 1; i++) {
                    for (int j = c - 1; j <= c + 1; j++) {
                        if (i == r && j == c) continue; 
                        if (i >= 0 && i < m && j >= 0 && j < n && (board[i][j] & 1) == 1) {
                            liveNeighbors++;
                        }
                    }
                }
                if ((board[r][c] & 1) == 1) { 
                    if (liveNeighbors == 2 || liveNeighbors == 3) {
                        board[r][c] |= 2;
                    }
                } else { 
                    if (liveNeighbors == 3) {
                        board[r][c] |= 2;
                    }
                }
            }
        }
        
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                board[r][c] >>= 1;
            }
        }
    }
};
