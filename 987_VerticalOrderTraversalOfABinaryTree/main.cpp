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

struct Node {
    Node(TreeNode *r, int a, int b) : root(r), x(a), y(b) {}

    TreeNode *root;
    int x;
    int y;
};

bool operator<(const Node &a, const Node &b) {
    return (a.y < b.y || (a.y == b.y && a.root->val < b.root->val));
}

class Solution {
public:
    std::vector<std::vector<int>> verticalTraversal(TreeNode* root) {
        get_nodes(root, 0, 0);
        std::vector<std::vector<int>> res;
        int n = 0;
        for (int i = left; i <= right; ++i) {
            res.emplace_back();
            ++n;
            std::sort(nodes[i].begin(), nodes[i].end());
            for (auto &node : nodes[i]) {
                res[n - 1].push_back(node.root->val);
            }
        }
        return res;
    }

private:
    void get_nodes(TreeNode *root, int x, int y);

    std::unordered_map<int, std::vector<Node>> nodes;
    int left = 0;
    int right = 0;

};

void Solution::get_nodes(TreeNode *root, int x, int y) {
    if (root == nullptr) {
        return;
    }
    left = std::min(left, x);
    right = std::max(right, x);
    nodes[x].emplace_back(root, x, y);
    get_nodes(root->left, x - 1, y + 1);
    get_nodes(root->right, x + 1, y + 1);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
