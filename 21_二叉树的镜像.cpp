#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==NULL){
            return;
        }
        stack<TreeNode *> s;
        s.push(pRoot);
        while(!s.empty()){
            TreeNode *node = s.top();
            s.pop();
            TreeNode *tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            if (node->left){
                s.push(node->left);
            }
            if(node->right){
                s.push(node->right);
            }
        }

    }
// 递归
//    void Mirror(TreeNode *pRoot) {
//        if(pRoot==NULL){
//            return;
//        }
//        TreeNode *tmp = pRoot->left;
//        pRoot->left = pRoot->right;
//        pRoot->right = tmp;
//        if(pRoot->left){
//            Mirror(pRoot->left);
//        }
//        if(pRoot->right){
//            Mirror(pRoot->right);
//        }
//
//    }
};