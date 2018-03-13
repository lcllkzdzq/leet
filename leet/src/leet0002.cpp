#include "leet0002.hpp"

ListNode* Leet0009Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *result = new ListNode(0);
    ListNode *cur = result;
    
    int carray = 0;
    
    while (l1 != nullptr || l2 != nullptr || carray != 0) {
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;
        int value = val1 + val2 + carray;
        
        cur->next = new ListNode(value % 10);
        cur = cur->next;
        carray = (val1 + val2 + carray) / 10;
        
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    
    return result->next;
}
