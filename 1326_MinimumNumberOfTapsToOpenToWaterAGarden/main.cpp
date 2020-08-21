#include <iostream>
#include <vector>

class Solution {
public:
    int minTaps(int n, std::vector<int>& ranges) {
        for (int i = 0; i <= n; ++i) {
            ranges[std::max(0, i - ranges[i])] = std::min(n, i + ranges[i]);
        }
        int res = 1;
        int left = 1, right = ranges[0];
        while (right < n) {
            int max_right = right;
            for (int i = left; i <= right; ++i) {
                max_right = std::max(max_right, ranges[i]);
            }
            if (max_right == right) {
                return -1;
            }
            ++res;
            left = right;
            right = max_right;
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::vector<int> v = {4,0,0,0,4,0,0,0,4};
    std::cout << sol.minTaps(v.size() - 1, v);
    return 0;
}
