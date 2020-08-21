#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int triangleNumber(std::vector<int> &nums) {
        int n = nums.size();
        if (n < 3) {
            return 0;
        }

        std::sort(nums.begin(), nums.end());
        int res = 0;

        for (int i = n - 1; i >= 2; --i) {
            int l = 0, r = i - 1;
            while (l < r) {
                if (nums[l] + nums[r] > nums[i]) {
                    res += r - l;
                    --r;
                } else {
                    ++l;
                }
            }
        }
        return res;

    }
};

int main() {
    std::vector<int> nums = {40, 80, 36, 86, 71, 30, 13, 41, 13, 80, 4, 23, 0, 93, 22, 14, 51, 78, 46, 93, 90, 78, 8,
                             23, 65, 24, 71, 84, 61, 19, 30, 1, 72, 88, 15, 94, 4, 91, 14, 45, 21, 84, 98, 16, 77, 85,
                             31, 49, 90, 60, 53, 51, 89, 17, 30, 84, 98, 83, 36, 35, 35, 35, 34, 51, 39, 67, 7, 59, 64,
                             62, 33, 51, 49, 4, 46, 7, 20, 15, 76, 46, 58, 26, 26, 25, 82, 19, 67, 98, 49, 51, 40, 84,
                             96, 75, 85, 30, 1, 76, 78, 53};

    Solution sol;
    std::cout << sol.triangleNumber(nums);
    return 0;
}


//