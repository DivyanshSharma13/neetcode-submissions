class Solution {
   public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == dig && i != row) {
                return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == dig && i != col) {
                return false;
            }
        }
        int brow = (row / 3) * 3;
        int bcol = (col / 3) * 3;
        for (int i = brow; i <= brow + 2; i++) {
            for (int j = bcol; j <= bcol + 2; j++) {
                if (board[i][j] == dig && (i != row || j != col)) {
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (!isSafe(board, i, j, board[i][j])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
