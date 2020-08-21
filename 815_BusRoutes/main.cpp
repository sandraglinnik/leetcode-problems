#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    int numBusesToDestination(std::vector<std::vector<int>>& routes, int S, int T) {
        if (S == T) {
            return 0;
        }
        std::unordered_map<int, std::vector<int>> buses_on_stop;
        int n = routes.size();
        for (int i = 0; i < n; ++i) {
            for (auto stop : routes[i]) {
                buses_on_stop[stop].push_back(i);
            }
        }

        std::vector<bool> used_buses(n, false);
        std::unordered_map<int, int> reached_stops;

        reached_stops[S] = 0;

        std::queue<int> q;
        q.push(S);

        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (auto bus : buses_on_stop[cur]) {
                if (!used_buses[bus]) {
                    used_buses[bus] = true;
                    for (auto stop : routes[bus]) {
                        if (!reached_stops.count(stop)) {
                            if (stop == T) {
                                return reached_stops[cur] + 1;
                            }
                            reached_stops[stop] = reached_stops[cur] + 1;
                            q.push(stop);
                        }
                    }

                }
            }
        }

        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
