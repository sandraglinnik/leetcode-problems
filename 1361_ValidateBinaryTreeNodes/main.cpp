#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    bool validateBinaryTreeNodes(int n, std::vector<int> &leftChild, std::vector<int> &rightChild) {
        std::vector<int> parents(n);
        for (int i = 0; i < n; ++i) {
            if (leftChild[i] >= 0) {
                ++parents[leftChild[i]];
            }
            if (rightChild[i] >= 0) {
                ++parents[rightChild[i]];
            }
        }

        int roots = 0;
        int root = -1;
        for (int i = 0; i < n; ++i) {
            if (parents[i] == 0) {
                if (roots) { // anothe root
                    return false;
                }
                ++roots;
                root = i;
            }
            if (parents[i] > 1) {
                return false;
            }
        }

        if (!roots) { // no roots
            return false;
        }

        std::queue<int> q;
        q.push(root);
        int k = 1;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            if (leftChild[cur] >= 0) {
                q.push(leftChild[cur]);
                ++k;
            }
            if (rightChild[cur] >= 0) {
                q.push(rightChild[cur]);
                ++k;
            }
        }

        return (k == n); // if all the nodes are visited
    }

};

int main() {
    std::vector<int> left = {1, 2, 0, -1};
    std::vector<int> right = {-1, -1, -1, -1};
    Solution sol;
    std::cout << sol.validateBinaryTreeNodes(4, left, right);

    return 0;
}
