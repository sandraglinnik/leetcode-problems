#include <iostream>
#include <vector>

class Solution {
public:
    int findMinMoves(std::vector<int> &nums) {
        int s = 0;
        for (auto m:nums) {
            s += m;
        }
        int n = nums.size();
        if (s % n != 0) {
            return -1;
        }
        int re = s / n, ans = 0, co = 0;
        for (int i = 0; i < n; i++) {
            co += nums[i] - re;
            ans = std::max(ans, std::max(abs(co), nums[i] - re));
        }
        return ans;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
