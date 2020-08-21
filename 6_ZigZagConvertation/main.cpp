#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(const string &s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        int n = s.size();
        int k = numRows * 2 - 2;

        string result(n, ' ');
        vector<int> borders(numRows + 1);
        vector<int> rows(n);

        for (int i = 0; i < n; ++i) {
            rows[i] = k / 2 - abs(i % k - k / 2);
            ++borders[rows[i] + 1];
        }

        for (int i = 2; i < numRows; ++i) {
            borders[i] += borders[i - 1];
        }

        for (int i = 0; i < n; ++i) {
            result[borders[rows[i]]++] = s[i];
        }
        return result;

    }
};


int main() {
    Solution sol;
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << sol.convert(s,n);
    return 0;
}
