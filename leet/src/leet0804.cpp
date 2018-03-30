#include "leet0804.hpp"
#include <unordered_set>
#include <sstream>
#include <iterator>
using namespace std;

int Leet0804Solution::uniqueMorseRepresentations(vector<string>& words) {
    string map[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."};
    
    unordered_set<string> charSet;
    for (string word : words) {
        stringstream sstream;
        
        for (char c : word) {
            sstream << map[c - 'a'];
        }
        
        charSet.insert(sstream.str());
    }
    
    return charSet.size();
}
