#include <iostream>
#include <vector>

struct Element {
    int id;
    int val;
};

bool operator<=(const Element &a, const Element &b) {
    return a.val <= b.val;
}

class Solution {
public:
    std::vector<int> countSmaller(std::vector<int> &nums) {
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        ans.resize(n, 0);
        sort_and_count(0, n, nums);
        return ans;
    }

private:
    std::vector<int> ans;

    std::vector<Element> sort_and_count(int i, int j, std::vector<int> &nums) {
        if (i + 1 == j) {
            return {{i, nums[i]}};
        }
        int mid = (i + j) / 2;
        auto left = sort_and_count(i, mid, nums);
        auto right = sort_and_count(mid, j, nums);
        std::vector<Element> res;
        int a = 0, b = 0;
        int n = left.size(), m = right.size();

        while (a < n || b < m) {
            if (a == n) {
                res.push_back(right[b]);
                ++b;
            } else if (b == m || left[a] <= right[b]) {
                ans[left[a].id] += res.size() - a;
                res.push_back(left[a]);
                ++a;
            } else {
                res.push_back(right[b]);
                ++b;
            }
        }

        return res;


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
