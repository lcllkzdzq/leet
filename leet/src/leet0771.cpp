#include "leet0771.hpp"
#include <unordered_set>
#include <iterator>

using namespace std;

int Leet0771Solution::numJewelsInStones(string J, string S) {
    unordered_set<char> jSet;
    
    for (char c : J) {
        jSet.insert(c);
    }
    
    int count = 0;
    
    for (char c : S) {
        if (jSet.find(c) != jSet.end())
            ++count;
    }
    
    return count;
}
