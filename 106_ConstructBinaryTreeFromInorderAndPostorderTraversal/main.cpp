#include <iostream>
#include <vector>
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
    TreeNode *buildTree(std::vector<int> &_inorder, std::vector<int> &_postorder) {
        in_order = _inorder;
        post_order = _postorder;
        int n = in_order.size();
        if (n == 0) {
            return nullptr;
        }
        for (int i = 0; i < n; ++i) {
            in_order_pos[in_order[i]] = i;
        }

        return get_subtree(0, n - 1, 0, n - 1);
    }

private:
    TreeNode *get_subtree(int a1, int b1, int a2, int b2);

    std::vector<int> in_order;
    std::vector<int> post_order;

    std::unordered_map<int, int> in_order_pos;
};

TreeNode *Solution::get_subtree(int a1, int b1, int a2, int b2) {
    auto *root = new TreeNode(post_order[b2]);
    int root_pos = in_order_pos[root->val];
    int left = root_pos - a1, right = b1 - root_pos;
    if (left) {
        root->left = get_subtree(a1, root_pos - 1, a2, a2 + left - 1);
    }
    if (right) {
        root->right = get_subtree(root_pos + 1, b1, a2 + left, b2 - 1);
    }
    return root;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
