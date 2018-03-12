#include "leet0013.hpp"
#include <unordered_map>
#include <iterator>

using namespace std;

int Leet0013Solution::romanToInt(string s) {
    unordered_map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;
    
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    int summer = 0;
    int prev = 0;

    for (auto it = s.begin(); it != s.end(); ++it) {
        int value = map[*it];
        summer += (value > prev) ? (value - 2 * prev) : value;
        prev = value;
    }


        
    return summer;
};
