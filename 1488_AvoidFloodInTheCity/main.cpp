#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

struct Rain {
    int day;
    int lake;
};

bool operator<(const Rain &a, const Rain &b) {
    return a.day > b.day;
}

class Solution {
public:
    std::vector<int> avoidFlood(const std::vector<int> &rains) {
        std::unordered_map<int, std::queue<int>> next_rains;
        std::unordered_map<int, bool> empty;
        int n = rains.size();
        for (int i = 0; i < n; ++i) {
            if (rains[i]) {
                next_rains[rains[i]].push(i);
            }
        }
        std::vector<int> ans(n, -1);
        std::priority_queue<Rain> upcoming_rains;
        for (auto &a : next_rains) {
            empty[a.first] = true;
            a.second.pop();
        }
        for (int i = 0; i < n; ++i) {
            if (rains[i]) {
                if (!empty[rains[i]]) {
                    return {};
                }
                empty[rains[i]] = false;
                if (!next_rains[rains[i]].empty()) {
                    upcoming_rains.push({next_rains[rains[i]].front(), rains[i]});
                    next_rains[rains[i]].pop();
                }
            } else {
                if (upcoming_rains.empty()) {
                    ans[i] = 1;
                    continue;
                }
                ans[i] = upcoming_rains.top().lake;
                empty[ans[i]] = true;
                upcoming_rains.pop();
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    for (auto a : sol.avoidFlood({69,0,0,0,69})) {
        std::cout << a << ' ';
    }
    return 0;
}
