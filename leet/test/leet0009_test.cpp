#include <gtest/gtest.h>
#include "leet0009.hpp"

TEST(Leet0009, small_number_palindrome)
{
    Leet0009Solution s;
    EXPECT_TRUE(s.isPalindrome(1221));
}

TEST(Leet0009, small_number_not_palindrome)
{
    Leet0009Solution s;
    EXPECT_TRUE(!s.isPalindrome(1234));
}

TEST(Leet0009, large_number)
{
    Leet0009Solution s;
    EXPECT_TRUE(s.isPalindrome(111343111));
}

TEST(Leet0009, multiple_ten)
{
    Leet0009Solution s;
    EXPECT_TRUE(!s.isPalindrome(1430));
}

TEST(Leet0009, negative)
{
    Leet0009Solution s;
    EXPECT_TRUE(!s.isPalindrome(-54));
}
