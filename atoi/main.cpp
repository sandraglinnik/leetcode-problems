#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(const string &str) {
        int64_t result = 0;
        int sign = 1;
        if (str.empty()) {
            return 0;
        }
        int i = 0;
        while (str[i] == ' ') {
            ++i;
        }

        if (str[i] == '-' || str[i] == '+') {
            if (str[i] == '-') {
                sign = -1;
            }
            ++i;
        }

        int n = str.size();
        for (; i < n; ++i) {
            if (str[i] < '0' || str[i] > '9') {
                return int(result * sign);
            }
            result = result * 10 + (str[i] - '0');
            if (result * sign < INT32_MIN) {
                return INT32_MIN;
            }
            if (result * sign > INT32_MAX) {
                return INT32_MAX;
            }
        }
        return int(result * sign);
    }
};

int main() {
    Solution sol;
    string s = "+-2";
    cout << sol.myAtoi(s);
    return 0;
}
