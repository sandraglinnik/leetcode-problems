#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int longestConsecutive(std::vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }
        std::unordered_map<int, int> starting;
        for (auto a : nums) {
            starting[a] = 0;
        }
        int res = 1;
        for (auto a : nums) {
            res = std::max(res, count_length(a, starting));
        }
        return res;
    }

private:
    int count_length(int x, std::unordered_map<int, int> &starting) {
        if (!starting.count(x)) {
            return 0;
        }
        if (starting[x]) {
            return starting[x];
        }
        starting[x] = count_length(x + 1, starting) + 1;
        return starting[x];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
