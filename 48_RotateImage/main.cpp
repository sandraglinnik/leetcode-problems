#include <iostream>
#include <vector>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& m) {
        const int n = m.size();
        for (int i = 0; i < (n + 1) / 2; ++i) {
            for (int j = i; j < n - 1 - i; ++j) {
                swap_round(m[i][j], m[j][n - 1 - i], m[n - 1 - i][n - 1 - j], m[n - 1 - j][i]);
            }
        }
    }

private:
    void swap_round(int &a, int &b, int &c, int &d) {
        std::swap(a, b);
        std::swap(a, c);
        std::swap(a, d);
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
