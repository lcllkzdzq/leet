#include <gtest/gtest.h>
#include "leet0868.hpp"

TEST(Leet0868, binaryGap)
{
    Leet0868Solution s;
    EXPECT_EQ(s.binaryGap(0), 0);
    EXPECT_EQ(s.binaryGap(1), 0);
    EXPECT_EQ(s.binaryGap(14), 1);
    EXPECT_EQ(s.binaryGap(32), 0);
    EXPECT_EQ(s.binaryGap(79), 3);
    EXPECT_EQ(s.binaryGap(686), 2);
    EXPECT_EQ(s.binaryGap(1121), 5);
}
