#include <iostream>
#include <unordered_map>

class Solution {
public:
    std::string minWindow(const std::string &s, const std::string &t) {
        std::unordered_map<char, int> t_dict, cur_dict;
        for (auto c : t) {
            ++t_dict[c];
        }
        int target = t_dict.size();
        int k = 0;
        int n = s.size();
        int i = 0;
        for (; i < n; ++i) {
            if (t_dict.count(s[i]) && t_dict[s[i]] == ++cur_dict[s[i]]) {
                ++k;
            }
            if (k == target) {
                break;
            }
        }
        if (i == n) {
            return "";
        }
        if (t.size() == 1) {
            return s.substr(i, 1);
        }
        int start = 0;
        for (int j = 0; j < i; ++j) {
            if (t_dict.count(s[j]) && cur_dict[s[j]] == t_dict[s[j]]) {
                start = j;
                break;
            }
        }
        ++i;
        int pos = start;
        int length = i - start;

        for (; i < n; ++i) {
            if (!t_dict.count(s[i])) {
                continue;
            }
            ++cur_dict[s[i]];
            for (int j = start; j < i; ++j) {
                if (t_dict.count(s[j]) && cur_dict[s[j]] == t_dict[s[j]]) {
                    start = j;
                    break;
                }
            }
            if (i + 1 - start < length) {
                pos = start;
                length = i + 1 - start;
            }
        }

        return s.substr(pos, length);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
