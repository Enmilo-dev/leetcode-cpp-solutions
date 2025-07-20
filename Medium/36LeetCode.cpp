// Problem: https://leetcode.com/problems/valid-sudoku/
// Category: Medium
// Language: C++
// Time Complexity: O(1), Space Complexity: O(1)


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board.size(); j++){
                if(board[i][j]=='.') continue;

                int boxIndex=(i/3) *3+(j/3);
                if(rows[i].count(board[i][j])||
                    cols[j].count(board[i][j])||
                    boxes[boxIndex].count(board[i][j])){
                        return false;
                }
                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                boxes[boxIndex].insert(board[i][j]);
            }
        }

        return true;
    }
};
