#include <iostream>
#include <vector>
#include <cmath>

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
    std::vector<std::vector<std::string>> printTree(TreeNode *root) {
        if (root == nullptr) {
            return {};
        }
        int depth = get_depth(root);
        int width = int(std::pow(2, depth + 1)) - 1;
        std::vector<std::vector<std::string>> res(depth + 1, std::vector<std::string>(width));
        fill(root, 0, width - 1, 0, res);
        return res;
    }

private:
    int get_depth(TreeNode *root) {
        if (root == nullptr) {
            return -1;
        }
        return std::max(get_depth(root->left), get_depth(root->right)) + 1;
    }

    void fill(TreeNode *root, int left, int right, int depth, std::vector<std::vector<std::string>> &res) {
        if (root == nullptr) {
            return;
        }
        int mid = (left + right) / 2;
        res[depth][mid] = std::to_string(root->val);
        fill(root->left, left, mid - 1, depth + 1, res);
        fill(root->right, mid + 1, right, depth + 1, res);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
