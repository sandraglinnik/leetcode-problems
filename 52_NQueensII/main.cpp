#include <iostream>
#include <vector>

class Solution {
public:
    int totalNQueens(int n) {
        size = n;
        col.resize(n, true);
        ld.resize(2 * n - 1, true);
        rd.resize(2 * n - 1, true);

        return count(0);
    }

private:
    int size;
    std::vector<bool> col;
    std::vector<bool> ld;
    std::vector<bool> rd;

    bool is_possible(int i, int j) {
        return (col[j] && ld[i - j + size - 1] && rd[i + j]);
    }

    int count(int i) {
        if (i == size) {
            return 1;
        }
        int res = 0;
        for (int j = 0; j < size; ++j) {
            if (is_possible(i, j)) {
                col[j] = false;
                ld[i - j + size - 1] = false;
                rd[i + j] = false;
                res += count(i + 1);
                col[j] = true;
                ld[i - j + size - 1] = true;
                rd[i + j] = true;
            }
        }
        return res;
    }

};

int main() {
    Solution sol;
    std::cout << sol.totalNQueens(8);
    return 0;
}
