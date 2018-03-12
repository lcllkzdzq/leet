#include "leet0007.hpp"
#include <climits>

int Leet0007Solution::reverse(int x) {
    long result = 0;
    
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
        
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
    }
    
    return (int)result;
}
