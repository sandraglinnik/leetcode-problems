#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxEqualFreq(const std::vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }
        int ans = 1;
        int max_freq = 1;
        int max_freq_count = 1;
        int single = 1;
        std::unordered_map<int, int> freq;
        freq[nums[0]] = 1;
        int n = nums.size();
        for (int i = 1; i < n; ++i) {
            int cur_freq = ++freq[nums[i]];
            if (cur_freq > max_freq) {
                max_freq = cur_freq;
                max_freq_count = 1;
            } else if (cur_freq == max_freq) {
                ++max_freq_count;
            }
            if (cur_freq == 1) {
                ++single;
            } else if (cur_freq == 2) {
                --single;
            }
            if ((single == freq.size()) ||
                    (single == 1 && i == max_freq * (freq.size() - 1)) ||
                    (max_freq_count == 1 && i == (max_freq - 1) * freq.size())) {
                ans = i + 1;
            }
        }
        return ans;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
