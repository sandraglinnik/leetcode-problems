#include <iostream>
#include <vector>
#include <unordered_map>

class Graph {
public:
    Graph() = default;
    explicit Graph(int n) {
        for (int i = 0; i < n; ++i) {
            vertices.push_back(i);
            pos[i] = i;
        }
        prev.resize(n);
    }

    void SetPrev(int a, int b) {
        prev[pos[a]].push_back(pos[b]);
    }

    void AddVertex(int v) {
        vertices.push_back(v);
        pos[v] = vertices.size() - 1;
        prev.emplace_back();
    }

    bool GetOrder(std::vector<int> &res) {
        const int n = vertices.size();
        std::vector<int> visited(n, 0);
        for (int i = 0; i < n; ++i) {
            if (!visited[i] && !get_order(res, visited, i)) {
                return false;
            }
        }
        return true;
    }

private:
    std::vector<int> vertices;
    std::unordered_map<int, int> pos;
    std::vector<std::vector<int>> prev;

    bool get_order(std::vector<int> &res, std::vector<int> &visited, int v) {
        visited[v] = 1;
        for (auto a : prev[v]) {
            if (visited[a] == 1 || (!visited[a] && !get_order(res, visited, a))) {
                return false;
            }
        }
        res.push_back(vertices[v]);
        visited[v] = 2;
        return true;
    }

};

class Solution {
public:
    std::vector<int> sortItems(int n, int m, std::vector<int>& group, const std::vector<std::vector<int>>& beforeItems) {
        for (auto &a : group) {
            if (a == -1) {
                a = m;
                ++m;
            }
        }
        Graph groups(m);
        std::vector<Graph> items(m);
        for (int i = 0; i < n; ++i) {
            items[group[i]].AddVertex(i);
        }

        for (int i = 0; i < n; ++i) {
            for (auto a : beforeItems[i]) {
                if (group[i] == group[a]) {
                    items[group[i]].SetPrev(i, a);
                } else {
                    groups.SetPrev(group[i], group[a]);
                }
            }
        }

        std::vector<int> res;
        res.reserve(n);

        std::vector<int> group_order;
        group_order.reserve(m);
        if (!groups.GetOrder(group_order)) {
            return {};
        }

        for (auto g : group_order) {
            if (!items[g].GetOrder(res)) {
                return {};
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
