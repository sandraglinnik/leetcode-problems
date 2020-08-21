#include <iostream>
#include <vector>
#include <unordered_map>


class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        const int n = nums.size();

        std::unordered_map<int, int> last;
        for (int i = 0; i < n; ++i) {
            if (last.count(nums[i]) && i - last[nums[i]] <= k) {
                return true;
            }
            last[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
