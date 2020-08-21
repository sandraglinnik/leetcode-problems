#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    double frogPosition(int n, std::vector<std::vector<int>>& edges, int t, int target) {
        std::vector<std::vector<int>> next(n);
        for (auto &e : edges) {
            next[e[0] - 1].push_back(e[1] - 1);
            next[e[1] - 1].push_back(e[0] - 1);
        }
        std::vector<int> choices(n, 0);
        std::vector<int> p(n, -1);
        choices[0] = 1;
        std::queue<int> next_q;
        next_q.push(0);
        int time = 0;
        while (!next_q.empty()) {
            std::queue<int> cur_q;
            std::swap(cur_q, next_q);
            while (!cur_q.empty()) {
                int cur = cur_q.front();
                cur_q.pop();

                if ((cur == 0 && next[cur].empty()) || (cur > 0 && next[cur].size() == 1)) {
                    if (cur == target - 1) {
                        return 1. / choices[cur];
                    }
                    continue;
                }

                if (cur == target - 1) {
                    return 0;
                }

                for (auto a : next[cur]) {
                    if (a == p[cur]) {
                        continue;
                    }
                    p[a] = cur;
                    choices[a] = choices[cur] * (next[cur].size() - (cur > 0));
                    next_q.push(a);
                }
                choices[cur] = 0;
            }
            ++time;
            if (time == t) {
                return choices[target - 1] ? 1. / choices[target - 1] : 0;
            }
        }

        return 0;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
