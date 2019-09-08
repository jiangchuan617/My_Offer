
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
    int TreeDepth(TreeNode* pRoot){
        // 层次遍历
        if (!pRoot){
            return 0;
        }
        queue<TreeNode *> que;
        que.push(pRoot);
        int depth=0;
        while(!que.empty()){
            int size= que.size();
            depth++;
            for(int i = 0;i<size;i++){
                TreeNode *node = que.front();
                que.pop();
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
        }
        return depth;
    }
 
//    int TreeDepth(TreeNode* pRoot){
//        // 递归
//        if(!pRoot){
//            return 0;
//        }
//        int left = TreeDepth(pRoot->left);
//        int right = TreeDepth(pRoot->right);
//        return max(left,right)+1;
//    }
};
