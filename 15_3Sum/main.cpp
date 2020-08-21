#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
        if (nums.size() < 3) {
            return {};
        }

        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> res;
        int n = nums.size();

        for (int i = 0; i <= n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;   // to avoid duplicates
            }

            int j = i + 1;
            int k = n - 1;
            int sum = -nums[i];

            while (j < k) {
                if (nums[j] + nums[k] < sum) {
                    ++j;
                } else if (nums[j] + nums[k] == sum) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    int a = nums[j];
                    while (j < n && nums[j] == a) {
                        ++j;    // to avoid duplicates
                    }
                } else {
                    --k;
                }
            }
        }
        
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
