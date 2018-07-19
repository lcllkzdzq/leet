//
//  leet0868.cpp
//  gmock
//
//  Created by lcl on 2018/7/19.
//

#include "leet0868.hpp"


int Leet0868Solution::binaryGap(int N) {
    int n = N;
    int max = 0;
    int dis = 1;
    
    while (n > 0) {
        int c = n & 1;
        n >>= 1;
        
        if ( c == 1 ) {
            break;
        }
    }
    
    while (n > 0) {
        int c = n & 1;
        
        if (c == 0) {
            ++dis;
        } else {
            if ( max < dis ) {
                max = dis;
            }
            
            dis = 1;
        }
        
        n >>= 1;
    }
    
    return max;
}
