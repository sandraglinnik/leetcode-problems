#include <iostream>
#include <vector>

class Solution {
public:
    int findLength(std::vector<int>& A, std::vector<int>& B) {
        const int n = A.size();
        const int m = B.size();
        max_length.resize(n + 1, std::vector<int>(m + 1, 0));

        int res = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (A[i - 1] == B[j - 1]) {
                    max_length[i][j] = max_length[i - 1][j - 1] + 1;
                    res = std::max(res, max_length[i][j]);
                }
            }
        }

        return res;
    }

private:
    std::vector<std::vector<int>> max_length;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
