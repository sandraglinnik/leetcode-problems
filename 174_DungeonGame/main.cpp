#include <iostream>
#include <vector>

class Solution {
public:
    int calculateMinimumHP(std::vector<std::vector<int>> &dungeon) {
        int n = dungeon.size();
        int m = dungeon[0].size();
        std::vector<std::vector<bool>> counted(n, std::vector<bool>(m, false));
        counted[n - 1][m - 1] = true;
        int res = count_max_min(0, 0, dungeon, counted);
        return std::max(0, -res) + 1;
    }

    int count_max_min(int i, int j, std::vector<std::vector<int>> &dungeon, std::vector<std::vector<bool>> &counted) {
        if (counted[i][j]) {
            return dungeon[i][j];
        }
        int res;
        if (i + 1 < dungeon.size()) {
            if (j + 1 < dungeon[0].size()) {
                res = std::max(count_max_min(i + 1, j, dungeon, counted),
                        count_max_min(i, j + 1, dungeon, counted));
            } else {
                res = count_max_min(i + 1, j, dungeon, counted);
            }
        } else {
            res = count_max_min(i, j + 1, dungeon, counted);
        }
        if (res < 0) {
            dungeon[i][j] += res;
        }
        counted[i][j] = true;
        return dungeon[i][j];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
