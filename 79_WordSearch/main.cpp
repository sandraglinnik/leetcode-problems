#include <iostream>
#include <vector>

class Solution {
public:
    bool exist(std::vector<std::vector<char>> &board, std::string &word) {
        int n = board.size();
        int m = board[0].size();
        std::vector<std::vector<bool>> used(n, std::vector<bool>(m, false));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (find(i, j, board, word, 0, used)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool find(int i, int j, std::vector<std::vector<char>> &board, std::string &word, int pos,
              std::vector<std::vector<bool>> &used) {
        if (pos >= word.size()) {
            return true;
        }
        if (i >= board.size() || i < 0 || j >= board[0].size() || j < 0 || used[i][j] || board[i][j] != word[pos]) {
            return false;
        }
        used[i][j] = true;
        if (find(i - 1, j, board, word, pos + 1, used) ||
            find(i + 1, j, board, word, pos + 1, used) ||
            find(i, j - 1, board, word, pos + 1, used) ||
            find(i, j + 1, board, word, pos + 1, used)) {
            return true;
        }
        used[i][j] = false;
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
