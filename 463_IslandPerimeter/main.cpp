#include <iostream>
#include <vector>

class Solution {
public:
    int islandPerimeter(std::vector<std::vector<int>> &grid) {

        int n = grid.size();
        if (n == 0) {
            return 0;
        }
        int m = grid[0].size();
        if (m == 0) {
            return 0;
        }

        int res = 0;

        for (int i = 0; i < m; ++i) {
            if (grid[0][i]) {
                ++i;
                res += 4;
                while (i < m && grid[0][i]) {
                    res += 2;
                    ++i;
                }
            }
        }

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    ++j;
                    res += grid[i - 1][j] ? 2 : 4;
                    while (j < m && grid[0][j]) {
                        if (!grid[i - 1][j]) {
                            res += 2;
                        }
                        ++j;
                    }
                }
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
