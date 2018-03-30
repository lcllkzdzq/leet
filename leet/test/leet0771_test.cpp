#include <gtest/gtest.h>
#include "leet0771.hpp"

using namespace std;

TEST(Leet0771, zero)
{
    Leet0771Solution s;
    EXPECT_EQ(s.numJewelsInStones("abc","ZZB"), 0);
}

TEST(Leet0771, four)
{
    Leet0771Solution s;
    EXPECT_EQ(s.numJewelsInStones("aK","asdfsadfeKKEye"), 4);
}


