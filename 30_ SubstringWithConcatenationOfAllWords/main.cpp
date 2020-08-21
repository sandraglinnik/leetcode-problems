#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> findSubstring(const std::string &s, std::vector<std::string> &words) {
        if (s.empty() || words.empty()) {
            return {};
        }
        std::unordered_map<std::string, int> _dict;
        for (const auto &word : words) {
            ++_dict[word];
        }

        std::vector<int> res;
        int k = words.size();
        int l = words[0].size();

        int n = s.size(), start = -1;
        for (int r = 0; r < k; ++r) {
            auto dict = _dict;
            std::unordered_map<std::string, std::queue<int>> prev;
            int i = r;
            while (i + l <= n) {
                std::string cur = s.substr(i, l);
                if (dict.count(cur)) {
                    if (dict[cur]) {
                        --dict[cur];
                        prev[cur].push(i);
                        if (start < 0) {
                            start = i;
                        }
                    } else {
                        int new_start = prev[cur].front();
                        prev[cur].pop();
                        prev[cur].push(i);
                        for (int j = start; j < new_start; j += l) {
                            auto str = s.substr(j, l);
                            ++dict[str];
                            prev[str].pop();
                        }
                        start = new_start + l;
                    }
                    i += l;
                    if ((i - start) / l == k) {
                        res.push_back(start);
                    }
                } else {
                    dict = _dict;
                    prev.clear();
                    start = -1;
                    i += l;
                }
            }
        }

        return res;
    }
};

int main() {
    std::string a = "abcdefg";
    std::cout << a.substr(2, 3);
    return 0;
}
