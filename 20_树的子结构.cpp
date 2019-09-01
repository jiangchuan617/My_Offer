#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>

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
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2) {

        bool res = false;
        if (pRoot1 && pRoot2) {
            if(pRoot1->val==pRoot2->val){
                res = hasSubtree_helper(pRoot1,pRoot2);
            }
            if(!res){
                res = HasSubtree(pRoot1->left,pRoot2);
            }
            if(!res){
                res = HasSubtree(pRoot1->right,pRoot2);
            }
        }
        return res;

    }

private:
    bool hasSubtree_helper(TreeNode *p1, TreeNode *p2) {
        if (p2 == NULL) {
            return true;
        }
        if (p1 == NULL) {
            return false;
        }
        if (p2->val != p1->val) {
            return false;
        }
        bool res = hasSubtree_helper(p1->left, p2->left) && hasSubtree_helper(p1->right, p2->right);
        return res;
    }
};