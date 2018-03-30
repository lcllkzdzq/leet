#include <gtest/gtest.h>
#include "leet0804.hpp"

using namespace std;

TEST(Leet0804, words)
{
    string array[] = {"gin", "zen", "gig", "msg"};
    vector<string> words;
    
    for (int i = 0; i < 4; ++i) {
        words.push_back(array[i]);
    }
    
    
    Leet0804Solution s;
    EXPECT_EQ(s.uniqueMorseRepresentations(words), 2);
}
