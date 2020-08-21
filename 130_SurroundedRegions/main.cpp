#include <iostream>
#include <vector>

class Solution {
public:
    void solve(std::vector<std::vector<char>> &board) {
        const int n = board.size();
        if (n == 0) {
            return;
        }
        const int m = board[0].size();
        if (m == 0) {
            return;
        }
        std::vector<std::vector<bool>> bordering(n, std::vector<bool>(m, false));

        for (int i = 0; i < n; ++i) {
            if (board[i][0] == 'O' && !bordering[i][0]) {
                get_bordering(i, 0, board, bordering);
            }
            if (board[i][m - 1] == 'O' && !bordering[i][m - 1]) {
                get_bordering(i, m - 1, board, bordering);
            }
        }
        for (int j = 0; j < m; ++j) {
            if (board[0][j] == 'O' && !bordering[0][j]) {
                get_bordering(0, j, board, bordering);
            }
            if (board[n - 1][j] == 'O' && !bordering[n - 1][j]) {
                get_bordering(n - 1, j, board, bordering);
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == 'O' && !bordering[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }



    }

    void get_bordering(int i, int j, std::vector<std::vector<char>> &board, std::vector<std::vector<bool>> &bordering) {
        const int n = board.size();
        const int m = board[0].size();
        bordering[i][j] = true;
        if (i > 0 && board[i - 1][j] == 'O' && !bordering[i - 1][j]) {
            get_bordering(i - 1, j, board, bordering);
        }
        if (i + 1 < n && board[i + 1][j] == 'O' && !bordering[i + 1][j]) {
            get_bordering(i + 1, j, board, bordering);
        }
        if (j > 0 && board[i][j - 1] == 'O' && !bordering[i][j - 1]) {
            get_bordering(i, j - 1, board, bordering);
        }
        if (j + 1 < m && board[i][j + 1] == 'O' && !bordering[i][j + 1]) {
            get_bordering(i, j + 1, board, bordering);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
