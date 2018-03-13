#include <gtest/gtest.h>
#include "leet0003.hpp"

using namespace std;

TEST(Leet0003, all)
{
    Leet0003Solution s;
    
    EXPECT_EQ(s.lengthOfLongestSubstring("asdfsalkdj"), 7);
}

TEST(Leet0003, repeat)
{
    Leet0003Solution s;
    
    EXPECT_EQ(s.lengthOfLongestSubstring("adfdfef"), 3);
}

TEST(Leet0003, one)
{
    Leet0003Solution s;
    
    EXPECT_EQ(s.lengthOfLongestSubstring("ffaaaaa"), 2);
}
