#include "leet0009.hpp"

bool Leet0009Solution::isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
        
    int y = 0;
    while (y < x) {
        y = y * 10 + x % 10;
        x /= 10;
    }

        
    return y == x || y/10 == x;
}
