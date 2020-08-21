#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<int64_t>> dp(5, std::vector<int64_t>(n + 1, 0));
        for (auto &a : dp) {
            a[1] = 1;
        }

        for (int i = 2; i <= n; ++i) {
            for (int a = 0; a < 5; ++a) {
                int64_t res = 0;
                for (auto b : next[a]) {
                    res += dp[b][i - 1];
                    res %= modulo;
                }
                dp[a][i] = res;
            }
        }

        int64_t res = 0;
        for (auto &a : dp) {
            res += a[n];
            res %= modulo;
        }
        return res;
    }

private:
    int64_t modulo = 1000000007;

    std::vector<std::vector<int>> next = {
            {1},
            {0, 2},
            {0, 1, 3, 4},
            {2, 4},
            {0}
    };
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
