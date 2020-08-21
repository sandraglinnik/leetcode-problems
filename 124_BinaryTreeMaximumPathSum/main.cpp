#include <iostream>
#include <limits.h>

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
    int maxPathSum(TreeNode* root);

private:
    int max_node = -2000000000;
    int max_path = 0;
    int max_line(TreeNode *root);
};

int Solution::max_line(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    max_node = std::max(max_node, root->val);
    int l = max_line(root->left);
    int r = max_line(root->right);
    max_path = std::max(max_path, root->val + l + r);
    return std::max(0, std::max(l, r) + root->val);
}

int Solution::maxPathSum(TreeNode *root) {
    max_line(root);
    return max_path ? max_path : max_node;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
