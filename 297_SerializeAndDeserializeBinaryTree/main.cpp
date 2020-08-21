#include <iostream>
#include <unordered_map>
#include <stack>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    std::string serialize(TreeNode* root);

    TreeNode* deserialize(const std::string &data);

private:
    void encode(TreeNode* root, std::string &res);
    TreeNode* decode(const std::string &data, int i, int j, const std::unordered_map<int, int> &pairs);
};

void Codec::encode(TreeNode *root, std::string &res) {
    if (root == nullptr) {
        return;
    }
    res += std::to_string(root->val);
    res += '(';
    encode(root->left, res);
    res += ")(";
    encode(root->right, res);
    res += ')';
}

std::string Codec::serialize(TreeNode *root) {
    std::string res;
    encode(root, res);
    return res;
}

TreeNode *Codec::decode(const std::string &data, int i, int j, const std::unordered_map<int, int> &pairs) {
    if (i >= j) {
        return nullptr;
    }
    int pos = data.find('(', i);
    int val = std::stoi(data.substr(i, pos - i));
    auto root = new TreeNode(val);
    root->left = decode(data, pos + 1, pairs.at(pos), pairs);
    root->right = decode(data, pairs.at(pos) + 2, j - 1, pairs);
    return root;
}

TreeNode *Codec::deserialize(const std::string &data) {
    std::stack<int> opens;
    std::unordered_map<int, int> pairs;
    int n = data.size();
    for (int i = 0; i < n; ++i) {
        if (data[i] == '(') {
            opens.push(i);
        } else if (data[i] == ')') {
            pairs[opens.top()] = i;
            opens.pop();
        }
    }

    return decode(data, 0, n, pairs);
}

int main() {
    auto root = new TreeNode(5);
    root->left = new TreeNode(12);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(81);
    Codec c;

    std::string ser = c.serialize(root);
    std::cout << ser << std::endl;

    delete root->left->right;
    delete root->right;
    delete root->left;
    delete root;

    auto new_tree = c.deserialize(ser);
    std::cout << (ser == c.serialize(new_tree)) << std::endl;
    root = new_tree;
    delete root->left->right;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
