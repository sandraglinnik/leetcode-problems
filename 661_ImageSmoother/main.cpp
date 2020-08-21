#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> &imageSmoother(std::vector<std::vector<int>> &M) {
        int n = M.size(), m = M[0].size();
        std::vector<std::vector<int>> res(n, std::vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int c = 0, sum = 0;
                for (int k = std::max(0, i - 1); k <= i + 1 && k < n; ++k) {
                    for (int l = std::max(0, j - 1); l <= j + 1 && l < m; ++l) {
                        ++c;
                        sum += M[k][l];
                    }
                }
                res[i][j] = sum / c;
            }
        }
        M = std::move(res);
        return M;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
