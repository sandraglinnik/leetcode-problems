#include <iostream>
#include <vector>

class Solution {
public:
    int change(int amount, std::vector<int> &coins) {
        std::vector<int> res(amount + 1);
        res[0] = 1;
//        std::sort(coins.begin(), coins.end());
        for (auto a : coins) {
            for (int i = a; i <= amount; ++i) {
                res[i] += res[i - a];
            }
        }
        return res[amount];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
