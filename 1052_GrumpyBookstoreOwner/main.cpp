#include <iostream>
#include <vector>

class Solution {
public:
    int maxSatisfied(std::vector<int>& customers, std::vector<int>& grumpy, int X) {
        const int n = customers.size();
        if (X >= n) {
            int res = 0;
            for (auto a : customers) {
                res += a;
            }
            return res;
        }
        std::vector<int> benefit(n);
        int res = 0;
        for (int i = 0; i < n; ++i) {
            benefit[i] = customers[i] - customers[i] * !grumpy[i];
            res += customers[i] * !grumpy[i];
        }

        for (int i = 1; i < n; ++i) {
            benefit[i] += benefit[i - 1];
        }
        int max_benefit = benefit[X - 1];
        for (int i = X; i < n; ++i) {
            max_benefit = std::max(max_benefit, benefit[i] - benefit[i - X]);
        }
        return res + max_benefit;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
