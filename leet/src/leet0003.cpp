#include "leet0003.hpp"
#include <iterator>
#include <unordered_map>
#include <queue>

using namespace std;

int Leet0003Solution::lengthOfLongestSubstring(string s) {
    unordered_map<char, int> char_map;
    queue<char> char_queue;
    
    int start = 0;
    int end = 0;
    int reslut = 0;
    
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        auto it = char_map.find(c);
        
        if (it != char_map.end()) {
            int ps = char_map[c];
            int count = ps - start + 1;
            start = ps + 1;
            
            for (int j = 0; j < count; ++j) {
                char key = char_queue.front();
                char_map.erase(key);
                char_queue.pop();
            }
            
        }
        
        char_map[c] = i;
        char_queue.push(c);
        ++end;
        
        if (char_queue.size() > reslut) {
            reslut = char_queue.size();
        }
    }

    return reslut;
}

