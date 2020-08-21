#include <iostream>
#include <vector>

class Solution {
public:
    int jump(std::vector<int> &nums) {
        int n = nums.size();
        std::vector<int> to(n, -1);
        nums[n - 1] = 0;
        to[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; --i) {
            if (i + nums[i] >= n - 1) {
                nums[i] = 1;
                to[i] = n - 1;
            } else {
                int j = i + 1;
                while (to[j] - i <= nums[i]) {
                    j = to[j];
                }
                to[i] = j;
                nums[i] = nums[j] + 1;
            }
        }
        return nums[0];
    }
};

int main() {
    std::vector<int> v = {2, 5, 3, 2, 1, 0, 5};
    Solution sol;
    std::cout << sol.jump(v);
    return 0;
}
