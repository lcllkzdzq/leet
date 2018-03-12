#include <gtest/gtest.h>
#include "leet0013.hpp"

TEST(Leet0013, less_than_10)
{
    Leet0013Solution s;
    EXPECT_EQ(s.romanToInt("IV"), 4);
}


TEST(Leet0013, 10_to_100)
{
    Leet0013Solution s;
    EXPECT_EQ(s.romanToInt("XLIII"), 43);
}


TEST(Leet0013, 100_to_1000)
{
    Leet0013Solution s;
    EXPECT_EQ(s.romanToInt("DCCCXCIII"), 893);
}



TEST(Leet0013, 1000_than_3999)
{
    Leet0013Solution s;
    EXPECT_EQ(s.romanToInt("MMCLXXXV"), 2185);
}
