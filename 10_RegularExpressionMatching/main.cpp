#include <iostream>
#include <string>

class Solution {
public:
    bool isMatch(const std::string &s, const std::string &p) {
        int n = s.size(), m = p.size();

        if (m == 0) {
            return (n == 0);
        }
        if (n == 0) {
            return (p == "*");
        }

        
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
