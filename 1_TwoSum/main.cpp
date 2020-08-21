#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = nums;
        std::sort(v.begin(), v.end());
        size_t i = 0, j = v.size() - 1;
        int a, b;
        while (true) {
            if (v[i] + v[j] < target) {
                ++i;
            } else if (v[i] + v[j] > target) {
                --j;
            } else {
                a = v[i];
                b = v[j];
                break;
            }
        }

        vector<int> sol;
        i = 0;
        for (; i < nums.size(); ++i) {
            if (nums[i] == a || nums[i] == b) {
                sol.push_back(i);
            }
        }

        return sol;
    }
};

int main() {
    Solution sol;
    vector<int> v = {7, 11, 2, 15};
    int target = 9;
    vector<int> result = sol.twoSum(v, target);
    for (auto a : result) {
        std::cout << a << ' ';
    }
    return 0;
}
