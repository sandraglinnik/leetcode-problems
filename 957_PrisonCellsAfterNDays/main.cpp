#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> &prisonAfterNDays(std::vector<int>& cells, int N) {
        if (N == 0) {
            return cells;
        }

        uint x = 0;
        for (auto a : cells) {
            x = x << uint(1);
            x += a;
        }

        uint k  = std::pow(2, 6);
        uint a = x >> uint(2);
        uint b = x % k;
        x = (~(a ^ b) % k) << uint(1);

        uint second_day = x;

        for (int i = 2; i <= N; ++i) {
            uint a = x >> uint(2);
            uint b = x % k;
            x = (~(a ^ b) % k) << uint(1);

            if (x == second_day) {
                N = (N - i) % (i - 1);
                for (int j = 0; j < N; ++j) {
                    uint a = x >> uint(2);
                    uint b = x % k;
                    x = (~(a ^ b) % k) << uint(1);
                }
                break;
            }
        }

        for (int i = 7; i >= 0; --i) {
            cells[i] = x % 2;
            x = x >> uint(1);
        }

        return cells;
    }
};

int main() {
    std::vector<int> v = {0,1,0,1,1,0,0,1};
    Solution sol;
    return 0;
}
