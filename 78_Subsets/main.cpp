#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> res = {{}};
        res.reserve(std::pow(2, nums.size()));
        for (auto a : nums) {
            int n = res.size();
            for (int i = 0; i < n; ++i) {
                std::vector<int> new_set = res[i];
                new_set.push_back(a);
                res.push_back(new_set);
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
