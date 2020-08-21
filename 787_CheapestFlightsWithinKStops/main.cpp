#include <iostream>
#include <vector>

class Solution {
public:
    int findCheapestPrice(int n, std::vector<std::vector<int>> &flights, int src, int dst, int k) {
        std::vector<int> d(n, -1);
        d[src] = 0;
        for (int i = 0; i <= k; ++i) {
            std::vector<int> new_d = d;
            for (const auto &a : flights) {
                if (d[a[0]] != -1) {
                    if (new_d[a[1]] == -1 || new_d[a[1]] > d[a[0]] + a[2]) {
                        new_d[a[1]] = d[a[0]] + a[2];
                    }
                }
            }
            d = new_d;
        }
        return d[dst];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
