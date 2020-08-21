#include <iostream>
#include <vector>

class Solution {
public:
    std::string getPermutation(int n, int k) {
        std::string to_permute;
        for (int i = 1; i <= n; ++i) {
            to_permute += std::to_string(i);
        }
        std::vector<int> f(n, 1);
        for (int i = 2; i < n; ++i) {
            f[i] = f[i - 1] * i;
        }
        --k;

        std::string res;
        while (!to_permute.empty()) {
            int i = k / f[to_permute.length() - 1];
            k %= f[to_permute.length() - 1];
            res += to_permute[i];
            to_permute.erase(i, 1);
        }

        return res;
    }
};

int main() {
    Solution sol;
    std::cout << sol.getPermutation(4, 9);
    return 0;
}
