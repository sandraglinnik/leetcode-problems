#include <iostream>
#include <vector>
#include <unordered_map>

struct cmp {
    bool operator()(std::vector<int> &a, std::vector<int> &b) {
        int n = a.size() - 1;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                return true;
            }
            if (a[i] < b[i]) {
                return false;
            }
        }
        return a[n] < b[n];
    }
};

class Solution {
public:
    std::string rankTeams(std::vector<std::string> &votes) {
        int n = votes[0].size(); // number of teams
        std::unordered_map<char, int> team_id;
        for (int i = 0; i < n; ++i) {
            team_id[votes[0][i]] = i;
        }

        std::vector<std::vector<int>> stat(n, std::vector<int>(n + 1, 0));
        for (int i = 0; i < n; ++i) {
            stat[i][n] = votes[0][i];
        }

        for (auto &vote : votes) {
            for (int i = 0; i < n; ++i) {
                ++stat[team_id[vote[i]]][i];
            }
        }

        cmp a;
        std::sort(stat.begin(), stat.end(), a);

        std::string res;
        for (auto &team : stat) {
            res += char(team[n]);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
