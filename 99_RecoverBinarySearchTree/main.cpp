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
    void recoverTree(TreeNode* root) {
        assign_arr(root);
        int n = arr.size();
        int first = -1, second = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i]->val > arr[i + 1]->val) {
                second = i + 1;
                if (first < 0) {
                    first = i;
                } else {
                    break;
                }
            }
        }

        std::swap(arr[first]->val, arr[second]->val);
    }

    void assign_arr(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        assign_arr(root->left);
        arr.push_back(root);
        assign_arr(root->right);
    }

private:
    std::vector<TreeNode*> arr;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
