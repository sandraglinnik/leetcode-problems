#include <iostream>
#include <vector>

class Solution {
public:
    int numberOfArithmeticSlices(const std::vector<int> &A) {
        const int n = A.size();
        if (n < 3) {
            return 0;
        }
        int res = 0;
        int cur_begin = 0;
        int diff = A[1] - A[0];
        for (int i = 2; i < n; ++i) {
            if (A[i] - A[i -1] != diff) {
                res += count(i - cur_begin);
                diff = A[i] - A[i -1];
                cur_begin = i - 1;
            }
        }
        res += count(n - cur_begin);
        return res;
    }

private:
    int count(int n) {
        if (n < 3) {
            return 0;
        }
        return (n - 1) * (n - 2) / 2;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
