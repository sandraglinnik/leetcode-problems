#include <iostream>
#include <vector>
class Solution {
public:
    int numTrees(int n) {
        std::vector<int> res(n + 1, 0);
        res[0] = 1;
        for (int k = 1; k <= n; ++k) {
            for (int i = 0; i < k; ++i) {
                res[k] += (res[i] * res[k - 1 - i]);
            }
        }
        return res[n];
    }
};

int main() {
    Solution sol;
    std::cout << sol.numTrees(3);
    return 0;
}
