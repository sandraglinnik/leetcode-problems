#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int> &prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }
        if (n == 2) {
            return std::max(0, prices[1] - prices[0]);
        }

        std::vector<int> diff(n - 1, 0);
        for (int i = 0; i < n - 1; ++i) {
            diff[i] = prices[i + 1] - prices[i];
        }
        std::vector<std::vector<int>> res(n - 1, std::vector<int>(3, 0));
        // 0 - using last, 1 - not using only 1 last, 2 - not using 2+ last
        res[0][0] = diff[0];
        for (int i = 1; i < n - 1; ++i) {
            res[i][0] = std::max(res[i - 1][0], res[i - 1][2]) + diff[i];
            res[i][1] = res[i - 1][0];
            res[i][2] = std::max(res[i - 1][1], res[i - 1][2]);
        }

        return std::max(res[n - 2][0], std::max(res[n - 2][1], res[n - 2][2]));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
