#include <gtest/gtest.h>
#include "leet0001.hpp"

vector<int> prepare_vector() {
    int array[] = {1, 3, 5, 88, 321, 4, 66, 98};
    vector<int> vec(array, array + sizeof(array) / sizeof(int));
    
    return vec;
}

TEST(Leet0001, target_exist)
{
    Leet0001Solution s;
    vector<int> array = prepare_vector();
    vector<int> result = s.twoSum(array, 93);
    
    ASSERT_EQ(result.size(), 2);
    
    EXPECT_EQ(result[0], 2);
    EXPECT_EQ(result[1], 3);
}

TEST(Leet0001, target_exist_larg_range)
{
    Leet0001Solution s;
    vector<int> array = prepare_vector();
    vector<int> result = s.twoSum(array, 186);

    ASSERT_EQ(result.size(), 2);
    
    EXPECT_EQ(result[0], 3);
    EXPECT_EQ(result[1], 7);
}

TEST(Leet0001, target_not_exist)
{
    Leet0001Solution s;
    vector<int> array = prepare_vector();
    vector<int> result = s.twoSum(array, 1001);
    
    EXPECT_EQ(result.size(), 0);
}

