#include <iostream>
#include <vector>

class Solution {
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>> &intervals) {
        if (intervals.empty()) {
            return 0;
        }
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int> &a, const std::vector<int> &b) {
            return (a[1] < b[1] || (a[1] == b[1] && a[0] < b[0]));
        });
        int max_intervals = 1;
        int last_end = intervals[0][1];
        for (const auto &interval : intervals) {
            if (interval[0] >= last_end) {
                ++max_intervals;
                last_end = interval[1];
            }
        }
        return intervals.size() - max_intervals;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
