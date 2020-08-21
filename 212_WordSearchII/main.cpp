#include <iostream>
#include <vector>
#include <string>

using Board = std::vector<std::vector<char>>;
using Dict = std::vector<std::string>;
using vv = std::vector<std::vector<bool>>;

class Solution {
public:
    Dict findWords(Board &board, Dict &words) {
        Dict res;
        vv visited(board.size(), std::vector<bool>(board[0].size(), false));
        for (auto &w : words) {
            if (find_word(board, w, visited)) {
                res.push_back(w);
            }
        }
        return res;
    }

    bool find_word(Board &b, std::string &word, vv &visited) {
        int n = b.size();
        int m = b[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (find(i, j, b, word, 0, visited)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool find(int i, int j, Board &b, std::string &word, int pos, vv &visited) {
        if (visited[i][j] || b[i][j] != word[pos]) {
            return false;
        }
        if (pos == word.size() - 1) {
            return true;
        }
        visited[i][j] = true;
        bool res = (i > 0 && find(i - 1, j, b, word, pos + 1, visited)) ||
                (i + 1 < b.size() && find(i + 1, j, b, word, pos + 1, visited)) ||
                (j > 0 && find(i, j - 1, b, word, pos + 1, visited)) ||
                (j + 1 < b[0].size() && find(i, j + 1, b, word, pos + 1, visited));
        visited[i][j] = false;
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
