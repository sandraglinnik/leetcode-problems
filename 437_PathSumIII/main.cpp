#include <iostream>
#include <unordered_map>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        target = sum;
        prev_sums[0] = 1;
        count(root, 0);
        return ans;
    }

private:
    int target = 0;
    std::unordered_map<int, int> prev_sums;
    int ans = 0;

    void count(TreeNode* bottom, int cur_sum) {
        if (bottom == nullptr) {
            return;
        }
        cur_sum += bottom->val;
        ans += prev_sums[cur_sum - target];
        ++prev_sums[cur_sum];
        count(bottom->left, cur_sum);
        count(bottom->right, cur_sum);
        --prev_sums[cur_sum];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
