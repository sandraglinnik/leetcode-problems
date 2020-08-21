#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct NodeNum {
    TreeNode *node;
    int num;

    NodeNum() = delete;
    NodeNum(TreeNode *_node, int _num) : node(_node), num(_num) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        std::vector<NodeNum> level;
        level.emplace_back(root, 0);

        int res = 0;
        while (!level.empty()) {
            if (level[0].num) {
                int diff = level[0].num;
                for (auto &a : level) {
                    a.num -= diff;
                }
            }

            res = std::max(res, level[level.size() - 1].num + 1);
            std::vector<NodeNum> next_level;
            next_level.reserve(level.size() * 2);

            for (const auto &a : level) {
                if (a.node->left != nullptr) {
                    next_level.emplace_back(a.node->left, a.num * 2);
                }
                if (a.node->right != nullptr) {
                    next_level.emplace_back(a.node->right, a.num * 2 + 1);
                }
            }

            level = std::move(next_level);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
