#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        int n = strs.size();
        if (n == 0) {
            return "";
        }
        if (n == 1) {
            return strs[0];
        }

        int res = strs[0].size(); // it can't be greater
        for (int i = 1; i < n; ++i) {
            count_prefix(strs[i - 1], strs[i], res);
            if (res == 0) {
                return "";
            }
        }
        return strs[0].substr(0, res);
    }

private:
    void count_prefix(const std::string &s1, const std::string &s2, int &res) {
        int n = std::min(int(std::min(s1.size(), s2.size())), res); // the final result can't be greater
        int i;
        for (i = 0; i < n; ++i) {
            if (s1[i] != s2[i]) {
                break;
            }
        }
        res = i;
    }
};

int main() {
    std::vector<std::string> v = {"flower", "flow", "flight"};
    Solution sol;
    std::cout << sol.longestCommonPrefix(v);
    return 0;
}
