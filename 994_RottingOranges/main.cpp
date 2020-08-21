#include <iostream>
#include <vector>
#include <queue>

struct Orange {
    int i = 0;
    int j = 0;
    int rotten_time = 0;
};

class Solution {
public:
    int orangesRotting(std::vector<std::vector<int>> &grid) {
        int n = grid.size(), m = grid[0].size();
        int time = 0;

        std::queue<Orange> rotten;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 2) {
                    rotten.push({i, j, 0});
                }
            }
        }

        while (!rotten.empty()) {
            auto cur = rotten.front();
            rotten.pop();
            time = cur.rotten_time;
            if (cur.i > 0 && grid[cur.i - 1][cur.j] == 1) {
                grid[cur.i - 1][cur.j] = 2;
                rotten.push({cur.i - 1, cur.j, cur.rotten_time + 1});
            }
            if (cur.i + 1 < n && grid[cur.i + 1][cur.j] == 1) {
                grid[cur.i + 1][cur.j] = 2;
                rotten.push({cur.i + 1, cur.j, cur.rotten_time + 1});
            }
            if (cur.j > 0 && grid[cur.i][cur.j - 1] == 1) {
                grid[cur.i][cur.j - 1] = 2;
                rotten.push({cur.i, cur.j - 1, cur.rotten_time + 1});
            }
            if (cur.j + 1 < m && grid[cur.i][cur.j + 1] == 1) {
                grid[cur.i][cur.j + 1] = 2;
                rotten.push({cur.i, cur.j + 1, cur.rotten_time + 1});
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return time;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
