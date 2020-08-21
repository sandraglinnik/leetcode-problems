#include <iostream>

class Solution {
public:
    bool isPalindrome(std::string &s) {
        int n = s.size();
        int i = 0, j = n - 1;
        while (true) {
            while (i < j && !valid(s[i])) {
                ++i;
            }
            while (j > i && !valid(s[j])) {
                --j;
            }
            if (i >= j) {
                break;
            }
            if (s[i] != s[j]) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }

    bool valid(char &c) {
        if ((c >= 'A' && c <= 'Z')) {
            c -= ('A' - 'a');
            return true;
        }
        return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'));
    }
};

int main() {
    Solution sol;
    std::string s = "race a car";
    std::cout << sol.isPalindrome(s);
    return 0;
}
