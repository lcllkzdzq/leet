//
//  leet0866.hpp
//  leet
//
//  Created by lcl on 2018/7/19.
//

#ifndef leet0866_hpp
#define leet0866_hpp

class Leet0866Solution {
public:
    int primePalindrome(int N);
private:
    bool isPrime(int n);
    int recentPalindrome(int n);
    int nextPalindrome(int n);
};


#endif /* leet0866_hpp */
