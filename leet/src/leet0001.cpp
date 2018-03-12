#include "leet0001.hpp"
#include <unordered_map>

vector<int> Leet0001Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            int index[2] = {map[complement], i};
            vector<int> result(index, index + 2);
            return result;
        }
        
        map[nums[i]] = i;
    }
    
    vector<int> result;
    return result;
}
