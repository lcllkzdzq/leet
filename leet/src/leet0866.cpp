//
//  leet0866.cpp
//  gmock
//
//  Created by lcl on 2018/7/19.
//

#include "leet0866.hpp"
#include <cmath>

bool Leet0866Solution::isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if ((n % i) == 0) {
            return false;
        }
    }
    
    return true;
}

int Leet0866Solution::recentPalindrome(int n) {
    int val = n;
    int rvs = 0;
    int count = 0;
    
    while (val > 0) {
        rvs = rvs * 10 + val % 10;
        val /= 10;
        ++count;
    }
    
    int pri = (int)pow(10, count / 2);
    return n / pri * pri + rvs % pri;
}

int Leet0866Solution::nextPalindrome(int n) {
    int val = n;
    int rvs = 0;
    int count = 0;
    
    while (val > 0) {
        rvs = rvs * 10 + val % 10;
        val /= 10;
        ++count;
    }
    
    int pri = (int)pow(10, count / 2);
    return recentPalindrome(n + pri);
}


int Leet0866Solution::primePalindrome(int N) {
    if (N == 1) { return 2; }
    
    int val = recentPalindrome(N);
    while (val < N || !isPrime(val)) {
        val = nextPalindrome(val);
    }
    
    return val;
}

