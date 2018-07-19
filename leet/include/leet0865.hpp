//
//  leet0866.hpp
//  leet
//
//  Created by lcl on 2018/7/19.
//

#ifndef leet0866_hpp
#define leet0866_hpp

#include <unordered_map>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

using namespace std;

class Leet0865Solution {
public:
    void collectionDeepth(TreeNode* node, unordered_map<TreeNode*, int>& map, int deep);
private:
    TreeNode* subTreeNode(TreeNode* node, unordered_map<TreeNode*, int>& map, int maxDeepth);
    TreeNode* subtreeWithAllDeepest(TreeNode* root);
};


#endif /* leet0866_hpp */
