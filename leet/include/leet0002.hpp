#include <cstddef>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Leet0009Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
