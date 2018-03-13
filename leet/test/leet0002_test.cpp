#include <gtest/gtest.h>
#include "leet0002.hpp"

using namespace std;

TEST(Leet0002, add)
{
    Leet0009Solution s;
    
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(9);
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(8);
    l2->next->next = new ListNode(3);
    
    ListNode* result = s.addTwoNumbers(l1, l2);
    
    EXPECT_EQ(result->val, 8);
    EXPECT_EQ(result->next->val, 2);
    EXPECT_EQ(result->next->next->val, 3);
    EXPECT_EQ(result->next->next->next->val, 1);
}

TEST(Leet0002, add_diff_len)
{
    Leet0009Solution s;
    
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(3);
    
    ListNode* result = s.addTwoNumbers(l1, l2);
    
    EXPECT_EQ(result->val, 4);
    EXPECT_EQ(result->next->val, 6);
    EXPECT_EQ(result->next->next->val, 3);
}

