#include <iostream>
#include <vector>
#include <queue>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct NodeWithSource {
    ListNode *node;
    int k;
};

bool operator<(const NodeWithSource &a, const NodeWithSource &b) {
    return a.node->val > b.node->val;
}

class Solution {
public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        auto head = new ListNode();
        auto tail = head;
        int n = lists.size();
        std::priority_queue<NodeWithSource> q;
        for (int i = 0; i < n; ++i) {
            if (lists[i] != nullptr) {
                q.push({lists[i], i});
                lists[i] = lists[i]->next;
            }
        }

        while (!q.empty()) {
            auto cur = q.top();
            q.pop();
            tail->next = cur.node;
            tail = tail->next;
            if (lists[cur.k] != nullptr) {
                q.push({lists[cur.k], cur.k});
                lists[cur.k] = lists[cur.k]->next;
            }
        }
        tail->next = nullptr;
        auto res = head->next;
        delete head;
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
