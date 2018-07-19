//
//  leet0867.cpp
//  leet
//
//  Created by lcl on 2018/7/19.
//

#include "leet0867.hpp"

vector<vector<int>> Leet0867Solution::transpose(vector<vector<int> > &A) {
    vector<vector<int>> val;
    
    int len = A[0].size();
    for (int i = 0; i < len; ++i) {
        vector<int> col;
        
        for (int j = 0; j < A.size(); ++j) {
            col.push_back(A[j][i]);
        }
        
        val.push_back(col);
    }
    
    return val;
}
