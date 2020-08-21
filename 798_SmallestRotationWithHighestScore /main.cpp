#include <iostream>
#include <vector>

class Solution {
public:
    int bestRotation(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> events(n, 0);
        for (int i = 0; i < n; ++i) {
            if (arr[i] >= n) {
                continue;
            }
            ++events[n - i];
            if ((i - arr[i] + n) % n < n - 1) {
                --events[(i - arr[i] + n) % n + 1];
            }
        }
        int max_score = 0, pos = 0, cur_score = 0;
        for (int i = 1; i < n; ++i) {
            cur_score += events[i];
            if (cur_score > max_score) {
                max_score = cur_score;
                pos = i;
            }
        }
        return pos;

    }
};

int main() {
    std::vector<int> arr = {2, 3, 1, 4, 0};
    Solution sol;
    std::cout << sol.bestRotation(arr);
    return 0;
}
