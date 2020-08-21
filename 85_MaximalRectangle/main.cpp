#include <iostream>
#include <vector>


class Solution {
public:
    int maximalRectangle(std::vector<std::vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }
        int n = matrix.size();
        int m = matrix[0].size();

        std::vector<int> heights(m, 0);
        int res = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (heights[j]) {
                    --heights[j];
                } else {
                    heights[j] = count_height(matrix, i, j);
                }
            }
            res = std::max(res, largest_rectangle(heights));
        }

        return res;
    }

private:
    int count_height(std::vector<std::vector<char>>& matrix, int i, int j) {
        if (matrix[i][j] == '0') {
            return 0;
        }
        int n = matrix.size();
        int res = 0;
        for (; i < n && matrix[i][j] == '1'; ++i) {
            ++res;
        }
        return res;
    }

    int largest_rectangle(const std::vector<int>& heights) {
        int n = heights.size();

        std::vector<int> l_closest_least(n, -1);
        std::vector<int> r_closest_least(n, n);
        for (int i = 1; i < n; ++i) {
            int j = i - 1;
            while (j >= 0 && heights[j] >= heights[i]) {
                j = l_closest_least[j];
            }
            l_closest_least[i] = j;
        }
        for (int i = n - 2; i >= 0; --i) {
            int j = i + 1;
            while (j < n && heights[j] >= heights[i]) {
                j = r_closest_least[j];
            }
            r_closest_least[i] = j;
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            res = std::max(res, heights[i] * (r_closest_least[i] - l_closest_least[i] - 1));
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
