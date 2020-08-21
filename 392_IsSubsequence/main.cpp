#include <iostream>

class Solution {
public:
    bool isSubsequence(const std::string &s, const std::string &t) {
        int n = t.size(), k = s.size();
        int j;
        for (int i = j = 0; i < n && j < k; ++i) {
            if (t[i] == s[j]) {
                ++j;
            }
        }
        return (j == k);

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
