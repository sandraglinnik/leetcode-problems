#include <iostream>
#include <vector>

class Solution {
public:
    int superPow(int a, std::vector<int>& b) {
        int res = 1;
        a %= 1337;
        int cur = a;
        for (int i = b.size() - 1; i >= 0; --i) {
            res *= my_pow(cur, b[i]);
            res %= 1337;
            cur = my_pow(cur, 10);
        }
        return res;
    }

private:
    int my_pow(int a, int b) {
        int res = 1;
        for (int i = 0; i < b; ++i) {
            res *= a;
            res %= 1337;
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
