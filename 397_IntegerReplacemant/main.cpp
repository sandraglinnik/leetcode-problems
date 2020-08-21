#include <iostream>
#include <vector>

class Solution {
public:
    int integerReplacement(uint64_t n) {
        int res = 0;
        while (n != 1) {
            if (n == 3) {
                return res + 2;
            }
            if (n % 2 == 0) {
                n /= 2;
            } else {
                if ((n >> 1) % 2 == 0) {
                    --n;
                } else {
                    ++n;
                }
            }
            ++res;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
