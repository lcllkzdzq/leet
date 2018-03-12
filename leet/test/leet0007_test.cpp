#include <gtest/gtest.h>
#include "leet0007.hpp"

TEST(Leet0007, less_than_10)
{
    Leet0007Solution s;
    EXPECT_EQ(s.reverse(4), 4);
}

TEST(Leet0007, 10_mulit)
{
    Leet0007Solution s;
    EXPECT_EQ(s.reverse(8990), 998);
}

TEST(Leet0007, too_large)
{
    Leet0007Solution s;
    EXPECT_EQ(s.reverse(1234567899), 0);
}
