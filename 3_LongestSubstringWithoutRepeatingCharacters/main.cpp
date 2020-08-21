#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, begin = 0;
        vector<int> used(256, -1);
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            if (used[s[i]] < begin)  {
                used[s[i]] = i;
            } else {
                res = max(res, i - begin);
                begin = used[s[i]] + 1;
                used[s[i]] = i;

            }
        }
        return max(res, len - begin);
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.lengthOfLongestSubstring(s);
    return 0;
}
