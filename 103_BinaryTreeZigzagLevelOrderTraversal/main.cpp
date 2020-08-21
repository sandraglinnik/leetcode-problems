#include <iostream>
#include <vector>
#include <queue>

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
    std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }
        std::vector<std::vector<int>> res = {{root->val}};
        std::queue<TreeNode*> cur, next;
        next.push(root);
        std::vector<int> nums;
        int order = 1;
        while (!next.empty()) {
            std::swap(cur, next);
            while (!cur.empty()) {
                auto node = cur.front();
                cur.pop();
                if (node->left != nullptr) {
                    next.push(node->left);
                    nums.push_back(node->left->val);
                }
                if (node->right != nullptr) {
                    next.push(node->right);
                    nums.push_back(node->right->val);
                }
            }

            if (!nums.empty()) {
                if (order) {
                    std::reverse(nums.begin(), nums.end());
                }
                order = !order;
                res.push_back(nums);
                nums = {};
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
