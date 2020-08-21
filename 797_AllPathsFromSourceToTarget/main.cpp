#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> allPathsSourceTarget(const std::vector<std::vector<int>>& graph) {
        const int n = graph.size();
        ways.resize(n);
        ways[n - 1] = {{n - 1}};
        get_ways(0, graph);
        auto res = ways[0];
        for (auto &way : res) {
            std::reverse(way.begin(), way.end());
        }
        return res;
    }

private:
    std::vector<std::vector<std::vector<int>>> ways; // to 0 vertex

    void get_ways(int v, const std::vector<std::vector<int>> &graph) {
        if (!ways[v].empty()) {
            return;
        }
        for (auto next : graph[v]) {
            get_ways(next, graph);
            auto next_ways = ways[next];
            for (auto &way : next_ways) {
                way.push_back(v);
                ways[v].push_back(way);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
