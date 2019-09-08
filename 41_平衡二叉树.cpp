#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>

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
    bool IsBalanced_Solution(TreeNode *pRoot) {
        return helper(pRoot) != -1;
    }
 
    int helper(TreeNode *node) {
        if (!node) {
            return 0;
        }
        int left = helper(node->left);
        int right = helper(node->right);
        if (left == -1) {
            return -1;
        }
        if (right == -1) {
            return -1;
        }
        if (abs(left - right) > 1) {
            return -1;
        }
        return max(left, right) + 1;
    }
};
