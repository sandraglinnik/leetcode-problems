#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findOrder(int numCourses, const std::vector<std::vector<int>> &prerequisites) {
        prev.resize(numCourses);
        for (auto &p : prerequisites) {
            prev[p[0]].push_back(p[1]);
        }
        finished.resize(numCourses, 0);
        for (int i = 0; i < numCourses; ++i) {
            if (!finish(i)) {
                return {};
            }
        }
        return order;
    }

private:
    bool finish(int v) {
        if (finished[v] == 2) {
            return true;
        }
        if (finished[v] == 1) {
            return false;
        }
        ++finished[v];
        for (auto p : prev[v]) {
            if (!finish(p)) {
                return false;
            }
        }
        order.push_back(v);
        ++finished[v];
        return true;
    }

    std::vector<std::vector<int>> prev;
    std::vector<int> order;
    std::vector<int> finished;
};

int main() {
    Solution sol;
    for (auto a : sol.findOrder(4, {{1, 0}, {0, 1}, {3, 1}, {3, 2}})) {
        std::cout << a << ' ';
    }
    return 0;
}
