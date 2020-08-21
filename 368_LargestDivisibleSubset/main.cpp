#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> largestDivisibleSubset(std::vector<int> &nums) {
        if (nums.empty()) {
            return nums;
        }

        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        std::vector<int> max_size(n, 0);
        std::vector<int> next(n, -1);

        int pos = 0;
        for (int i = 0; i < n; ++i) {
            if (!max_size[i]) {
                get_max(i, nums, max_size, next);
            }
            if (max_size[i] > max_size[pos]) {
                pos = i;
            }
        }

        std::vector<int> res;
        while (pos >= 0) {
            res.push_back(nums[pos]);
            pos = next[pos];
        }

        return res;
    }

private:
    int get_max(int v, std::vector<int> &nums, std::vector<int> &max_size, std::vector<int> &next) {
        if (max_size[v]) {
            return max_size[v];
        }
        int n = nums.size();
        for (int i = v + 1; i < n; ++i) {
            if (nums[i] % nums[v] == 0 && get_max(i, nums, max_size, next) > max_size[v]) {
                max_size[v] = max_size[i];
                next[v] = i;
            }
        }
        return ++max_size[v];
    }
};

int main() {
    return 0;
}