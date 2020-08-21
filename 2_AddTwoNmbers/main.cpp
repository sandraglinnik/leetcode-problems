#include <iostream>

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int sum = l1->val + l2->val;
        bool temp = (sum >= 10);
        sum %= 10;

        ListNode *result = new ListNode(sum);
        ListNode *cur_res = result;

        ListNode *cur1 = l1->next, *cur2 = l2->next;
        while (cur1 != NULL || cur2 != NULL || temp) {
            sum = temp;
            sum += cur1 != NULL ? cur1->val : 0;
            sum += cur2 != NULL ? cur2->val : 0;
            temp = (sum >= 10);
            sum %= 10;
            cur_res->next = new ListNode(sum);
            cur_res = cur_res->next;

            if (cur1 != NULL) {
                cur1 = cur1->next;
            }
            if (cur2 != NULL) {
                cur2 = cur2->next;
            }
        }
        return result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
