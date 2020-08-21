#include <iostream>
#include <vector>

class Solution {
public:
    int largestRectangleArea(const std::vector<int>& heights) {
        int n = heights.size();
        std::vector<int> l_closest_least(n, -1);
        std::vector<int> r_closest_least(n, n);
        for (int i = 1; i < n; ++i) {
            int j = i - 1;
            while (j >= 0 && heights[j] >= heights[i]) {
                j = l_closest_least[j];
            }
            l_closest_least[i] = j;
        }
        for (int i = n - 2; i >= 0; --i) {
            int j = i + 1;
            while (j < n && heights[j] >= heights[i]) {
                j = r_closest_least[j];
            }
            r_closest_least[i] = j;
        }

        for (int i = 0; i < n; ++i) {
            std::cout << l_closest_least[i] << ' ' << r_closest_least[i] << '\n';
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            res = std::max(res, heights[i] * (r_closest_least[i] - l_closest_least[i] - 1));
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::cout << sol.largestRectangleArea({2,1,5,6,2,3});
    return 0;
}
