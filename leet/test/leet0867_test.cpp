#include <gtest/gtest.h>
#include "leet0867.hpp"

TEST(Leet0867, binaryGap)
{
    Leet0867Solution s;
    
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> b = s.transpose(a);
    
    EXPECT_EQ(b[0][0], 1);
    EXPECT_EQ(b[0][1], 4);
    EXPECT_EQ(b[0][2], 7);
    EXPECT_EQ(b[1][0], 2);
    EXPECT_EQ(b[1][1], 5);
    EXPECT_EQ(b[1][2], 8);
    EXPECT_EQ(b[2][0], 3);
    EXPECT_EQ(b[2][1], 6);
    EXPECT_EQ(b[2][2], 9);

}
