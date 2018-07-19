
//
//  leet0865.cpp
//  gmock
//
//  Created by lcl on 2018/7/19.
//

#include "leet0865.hpp"

using namespace std;

void Leet0865Solution::collectionDeepth(TreeNode* node, unordered_map<TreeNode*, int>& map, int deep) {
    map[node] = deep;
    if (node->left) {
        collectionDeepth(node->left, map, deep + 1);
    }
    
    if (node->right) {
        collectionDeepth(node->right, map, deep + 1);
    }
}

TreeNode* Leet0865Solution::subTreeNode(TreeNode* node, unordered_map<TreeNode*, int>& map, int maxDeepth) {
    if (map[node] == maxDeepth) {
        return node;
    }
    
    TreeNode *left = node->left ? subTreeNode(node->left, map, maxDeepth) : NULL;
    TreeNode *right = node->right ? subTreeNode(node->right, map, maxDeepth) : NULL;
    
    if (left && right) {
        return node;
    } else if (left) {
        return left;
    } else if (right) {
        return right;
    } else {
        return NULL;
    }
}

TreeNode* Leet0865Solution::subtreeWithAllDeepest(TreeNode* root) {
    unordered_map<TreeNode*, int> map;
    
    collectionDeepth(root, map, 0);
    int maxDeepth = 0;
    for (auto item : map) {
        if (maxDeepth < item.second) {
            maxDeepth = item.second;
        }
    }
    
    return subTreeNode(root, map, maxDeepth);
}
