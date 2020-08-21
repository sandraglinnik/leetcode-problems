#include <iostream>
#include <vector>
#include <stack>
using namespace std;



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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode *cur = st.top();
            if (cur-> left == nullptr) {
                if (cur->right == nullptr) {
                    res.push_back(cur->val);
                    st.pop();
                } else {
                    st.push(cur->right);
                    cur->right = nullptr;
                }

            } else {
                st.push(cur->left);
                cur->left = nullptr;
            }
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
