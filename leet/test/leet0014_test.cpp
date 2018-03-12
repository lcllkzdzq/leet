#include <gtest/gtest.h>
#include "leet0014.hpp"

using namespace std;

vector<string> prepare_vector() {
    string array[] = {"longgest", "longger", "long", "lonth"};
    vector<string> vec(array, array + sizeof(array) / sizeof(string));
    
    return vec;
}


TEST(Leet0014, prefix)
{
    Leet0014Solution s;
    vector<string> array = prepare_vector();
    
    EXPECT_EQ(s.longestCommonPrefix(array), "lon");
}

