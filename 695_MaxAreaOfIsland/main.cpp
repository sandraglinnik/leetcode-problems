#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        if (n == 0) {
            return 0;
        }
        int m = grid[0].size();
        if (m == 0) {
            return 0;
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    res = std::max(res, visit(i, j, grid));
                }
            }

        }

        return res;
    }

private:
    int visit(int i, int j, std::vector<std::vector<int>> &grid) {
        int res = 0;
        int n = grid.size();
        int m = grid[0].size();
        grid[i][j] = 0;
        std::queue<std::pair<int, int>> q;
        q.push(std::make_pair(i, j));
        while (!q.empty()) {
            ++res;
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (i > 0 && grid[i - 1][j]) {
                grid[i - 1][j] = 0;
                q.push(std::make_pair(i - 1, j));
            }
            if (i < n - 1 && grid[i + 1][j]) {
                grid[i + 1][j] = 0;
                q.push(std::make_pair(i + 1, j));
            }
            if (j > 0 && grid[i][j - 1]) {
                grid[i][j - 1] = 0;
                q.push(std::make_pair(i, j - 1));
            }
            if (j < m - 1 && grid[i][j + 1]) {
                grid[i][j + 1] = 0;
                q.push(std::make_pair(i, j + 1));
            }
        }
        return res;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
