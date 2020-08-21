#include <iostream>
#include <vector>
class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int>>& A) {
        int n = A.size();
        for (int i = 1; i < n; ++i) {
            A[i][0] += std::min(A[i - 1][0], A[i - 1][1]);
            for (int j = 1; j < n - 1; ++j) {
                A[i][j] += std::min(A[i - 1][j - 1], std::min(A[i - 1][j], A[i - 1][j + 1]));
            }
            A[i][n - 1] += std::min(A[i - 1][n - 2], A[i - 1][n - 1]);
        }
        int res = A[n - 1][0];
        for (auto a : A[n - 1]) {
            res = std::min(res, a);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
