#include <iostream>
#include <vector>

class Solution {
public:
    int makeConnected(int n, std::vector<std::vector<int>>& connections) {
        if (connections.size() < n - 1) {
            return -1;
        }

        graph.resize(n);
        for (auto &a : connections) {
            graph[a[0]].push_back(a[1]);
            graph[a[1]].push_back(a[0]);
        }

        visited.resize(n, false);

        int components = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                ++components;
                visit(i);
            }
        }
        return components - 1;
    }

private:
    std::vector<std::vector<int>> graph;
    std::vector<bool> visited;

    void visit(int v) {
        visited[v] = true;
        for (auto next : graph[v]) {
            if (!visited[next]) {
                visit(next);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
