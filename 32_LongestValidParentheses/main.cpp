#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int res = 0;
        int cur_len = 0;
        int balance = 0;

        for (auto c : s) {
            if (balance == 0 && c == ')') {
                res = max(cur_len, res);
                cur_len = 0;
                continue;
            }
            if (c == '(') {
                ++ balance;
            } else {
                -- balance;
            }
            ++cur_len;
        }
        if (balance == 0) {
            res = max(cur_len, res);
            return res;
        }

        int start = n - cur_len;
        cur_len = 0;
        balance = 0;
        for (int i = n - 1; i >= start; --i) {
            if (balance == 0 && s[i] == '(') {
                res = max(res, cur_len);
                cur_len = 0;
                continue;
            }
            if (s[i] == '(') {
                ++balance;
            } else {
                --balance;
            }
            ++cur_len;
        }
        return max(res, cur_len);
    }
};

int main() {
    string s;
    cin >> s;
    Solution sol;
    cout << sol.longestValidParentheses(s);
    return 0;
}
