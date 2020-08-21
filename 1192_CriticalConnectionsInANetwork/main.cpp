#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> criticalConnections(int n, std::vector<std::vector<int>> &connections) {
        std::vector<std::vector<int>> next(n);
        for (const auto &a : connections) {
            next[a[0]].push_back(a[1]);
            next[a[1]].push_back(a[0]);
        }
        std::vector<bool> visited(n);
        std::vector<int> time(n), parent(n), l(n);
        visit(0, next, visited, time, l, parent);

        std::vector<std::vector<int>> res;
        for (const auto &edge : connections) {
            int a = edge[0], b = edge[1];
            if (time[a] < l[b] || time[b] < l[a]) {
                res.push_back(edge);
            }
        }
        return res;
    }

private:
    void visit(int v, const std::vector<std::vector<int>> &next, std::vector<bool> &visited, std::vector<int> &time,
               std::vector<int> &l, std::vector<int> &parent) {
        visited[v] = true;
        l[v] = time[v];
        for (auto a : next[v]) {
            if (!visited[a]) {
                parent[a] = v;
                time[a] = time[v] + 1;
                visit(a, next, visited, time, l, parent);
            }
            if (a != parent[v]) {
                l[v] = std::min(l[v], l[a]);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
