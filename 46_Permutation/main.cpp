#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        size_t n = nums.size();
        if (n == 0) {
            return {};
        }
        vector<bool> indexes(n, true);
        return get_permutations(nums, indexes);
    }

private:
    vector<vector<int>> get_permutations(const vector<int> &nums, vector<bool> &to_permute) {
        size_t n = nums.size();
        vector<vector<int>> res;
        for (size_t last = 0; last < n; ++last) {
            if (!to_permute[last]) {
                continue;
            }
            to_permute[last] = false;
            vector<vector<int>> cur = get_permutations(nums, to_permute);
            to_permute[last] = true;
            for (auto &a : cur) {
                a.push_back(nums[last]);
            }
            add_vector(res, cur);
        }
        if (res.empty()) {
            return {{}};
        }
        return res;
    }

    template<class T>
    void add_vector(vector<T> &v1, const vector<T> &v2) {
        for (const auto &a : v2) {
            v1.push_back(a);
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    auto permutations = sol.permute(nums);
    cout << permutations.size() << '\n';
    for (const auto &permutation : permutations) {
        for (auto a : permutation) {
            cout << a << ' ';
        }
        cout << '\n';
    }
    return 0;
}
