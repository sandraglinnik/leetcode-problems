#include <iostream>
#include <vector>

class Solution {
public:
    Solution(const std::vector<int> &w) {
        size = w.size();
        pos.resize(size);
        for (int i = 1; i < size; ++i) {
            pos[i] = pos[i - 1] + w[i - 1];
        }
        total_weight = pos[size - 1] + w[size - 1];
    }

    int pickIndex() {
//        srand(10);
        int a = rand() % total_weight;
        std::cout << a << ": ";
        int l = 0, r = size;
        while (r - l > 1) {
            int mid = (l + r) / 2;
            if (a == pos[mid]) {
                return mid;
            }
            if (a > pos[mid]) {
                l = mid;
            } else {
                r = mid;
            }
        }
        return l;
    }

private:
    int size = 0;
    std::vector<int> pos;
    int total_weight = 0;
};

int main() {
    Solution sol ({1, 5, 3});
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        std::cout << sol.pickIndex() << '\n';
    }

    return 0;
}
