#include "leet0014.hpp"
#include <iterator>
#include <algorithm>

using namespace std;

string Leet0014Solution::longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) {
        return "";
    }
    
    string value = strs[0];
    string result;
    
    for (int j = 0; j < value.size(); ++j) {
        char c = value[j];
        bool con = true;
        
        for (int i = 1; i < strs.size(); ++i) {
            string str = strs[i];
            
            if (str[j] != c) {
                con = false;
                break;
            }
        }
        
        if (!con) {
            break;
        }
        
        result.push_back(c);
    }

    
    return result;
};
