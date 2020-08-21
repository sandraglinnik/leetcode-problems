#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;
        }

        std::vector<int> max_benefit_after(n, 0);
        std::vector<int> max_benefit_before(n, 0);
        int min_price_before = prices[0], max_price_after = prices[n - 1];
        for (int i = 1; i < n; ++i) {
            max_benefit_before[i] = std::max(max_benefit_before[i - 1], prices[i] - min_price_before);
            min_price_before = std::min(min_price_before, prices[i]);

            max_benefit_after[n - 1 - i] = std::max(max_benefit_after[n - i], max_price_after - prices[n - 1 - i]);
            max_price_after = std::max(max_price_after, prices[n - 1 - i]);
        }

        int res = max_benefit_after[0];
        for (int i = 1; i < n; ++i) {
            res = std::max(res, max_benefit_before[i - 1] + max_benefit_after[i]);
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::cout << sol.maxProfit({1});
    return 0;
}
