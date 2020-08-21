#include <iostream>
#include <vector>

class Solution {
public:
    int maxChunksToSorted(const std::vector<int> &arr) {
        const int n = arr.size();
        std::vector<int> max_left(n), min_right(n);

        min_right[n - 1] = arr[n - 1]; // min_right[i] is min in [i, n - 1]
        for (int i = n - 2; i >= 0; --i) {
            min_right[i] = std::min(min_right[i + 1], arr[i]);
        }

        max_left[0] = min_right[0]; // max_left[i] is max in [0, i - 1]
        for (int i = 1; i < n; ++i) {
            max_left[i] = std::max(max_left[i - 1], arr[i - 1]);
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            if (max_left[i] <= min_right[i]) { // arr[0, i - 1] <= arr[i, n-1]
                ++res;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::cout << sol.maxChunksToSorted({2, 1, 3, 4, 4});
    return 0;
}
