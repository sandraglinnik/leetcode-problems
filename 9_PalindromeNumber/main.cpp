#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int copy = x;
        int64_t reversed = 0;
        while (copy) {
            reversed *= 10;
            reversed += copy % 10;
            copy /= 10;
        }
        if (reversed > INT32_MAX) {
            return false;
        }
        return x == reversed;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
