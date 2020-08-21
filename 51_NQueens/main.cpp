#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        size = n;
        col.resize(n, true);
        ld.resize(2 * n - 1, true);
        rd.resize(2 * n - 1, true);
        std::vector<std::string> queens(size, std::string(size, '.'));
        get(0, queens);
        return ans;
    }

private:
    int size;
    std::vector<bool> col;
    std::vector<bool> ld;
    std::vector<bool> rd;

    std::vector<std::vector<std::string>> ans;

    bool is_possible(int i, int j) {
        return (col[j] && ld[i - j + size - 1] && rd[i + j]);
    }

    void get(int i, std::vector<std::string> &queens) {
        if (i == size) {
            ans.push_back(queens);
        }

        for (int j = 0; j < size; ++j) {
            if (is_possible(i, j)) {
                queens[i][j] = 'Q';
                col[j] = false;
                ld[i - j + size - 1] = false;
                rd[i + j] = false;
                get(i + 1, queens);
                col[j] = true;
                ld[i - j + size - 1] = true;
                rd[i + j] = true;
                queens[i][j] = '.';
            }
        }
    }

};


int main() {
    Solution sol;
    for (auto &a : sol.solveNQueens(4)) {
        for (auto &str : a) {
            std::cout << str << '\n';
        }
        std::cout << std::endl;
    }
    return 0;
}
