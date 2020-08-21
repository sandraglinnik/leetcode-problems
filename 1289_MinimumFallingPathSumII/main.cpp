#include <iostream>
#include <vector>
class Solution {
public:
    int minFallingPathSum(std::vector<std::vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();
        for (int i = 0; i < n - 1; ++i) {
            int fm, sm;
            find_min(arr[i], fm, sm);
            for (int j = 0; j < m; ++j) {
                if (j != fm) {
                    arr[i + 1][j] += arr[i][fm];
                } else {
                    arr[i + 1][j] += arr[i][sm];
                }
            }
        }
        int res = arr[n - 1][0];
        for (auto a : arr[n - 1]) {
            res = std::min(res, a);
        }
        return res;
    }

private:
    void find_min(const std::vector<int> &v, int &first_min, int &second_min) {
        if (v[0] <= v[1]) {
            first_min = 0, second_min = 1;
        } else {
            first_min = 1, second_min = 0;
        }
        int n = v.size();
        for (int i = 2; i < n; ++i) {
            if (v[i] <= v[first_min]) {
                second_min = first_min;
                first_min = i;
            } else if (v[i] < second_min) {
                second_min = i;
            }
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
