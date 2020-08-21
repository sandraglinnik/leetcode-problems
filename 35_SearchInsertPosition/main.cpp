#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int> &nums, int target) {
        int l = 0, r = nums.size();
        while (l < r) {
            int mid = (l + r) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (target > nums[mid]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return r;
    }
};

int main() {
    std::vector<int> v = {0, 2, 4};
    Solution sol;
    std::cout << sol.searchInsert(v, 1);
    return 0;
}
