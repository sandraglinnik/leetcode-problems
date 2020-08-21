#include <iostream>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string &s) {
        size_t n = s.size();
        size_t i = 0;
        while (i < n && s[i] == ' ') {
            ++i;
        }
        std::string res = "";
        std::vector<std::string> words;
        if (i == n) {
            return res;
        }
        while (i < n) {
            size_t j = s.find(' ', i);
            words.push_back(s.substr(i, j - i));
            i = j;
            while (i < n && s[i] == ' ') {
                ++i;
            }
        }
        n = words.size();
        for (size_t i = n - 1; i >= 1; --i) {
            res += (words[i] + " ");
        }
        res += words[0];
        return res;
    }
};

int main() {
    Solution sol;
    std::string s = "  abc ab  cd";
    std::cout << sol.reverseWords(s);
    return 0;
}
