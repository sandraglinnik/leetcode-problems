#include <iostream>
#include <vector>

class Solution {
public:
    int maximaSquare(const std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        int n = matrix.size();
        int m = matrix[0].size();

        std::vector<std::vector<int>> longest_side(n, std::vector<int>(m, 0));

        int res = 0;
        for (int i = 0; i < n; ++i) {
            longest_side[i][0] = (matrix[i][0] == '1');
            res = res || longest_side[i][0];
        }
        for (int j = 0; j < m; ++j) {
            longest_side[0][j] = (matrix[0][j] == '1');
            res = res || longest_side[0][j];
        }

        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][j] == '0') {
                    longest_side[i][j] = 0;
                } else {
                    longest_side[i][j] = std::min(longest_side[i - 1][j - 1], std::min(longest_side[i - 1][j], longest_side[i][j - 1])) + 1;
                }
                res = std::max(res,longest_side[i][j]);
            }
        }

        return res * res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
