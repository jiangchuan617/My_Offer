#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>
#include <queue>

using namespace std;

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0) {
            return false;
        }
        return VS_helper(sequence, 0, sequence.size() - 1);
 
    }
 
private:
    bool VS_helper(vector<int> sequence, int start, int end) {
        if (start == end) {
            return true;
        }
        int root = sequence[end];
        int split = end - 1;
        // 左子树都小于根节点
        for (int i = start; i < end - 1; i++) {
            if (sequence[i] > root) {
                split = i;
                break;
            }
        }
        // 右子树都大于根节点
        for (int j = split; j < end - 1; j++) {
            if (sequence[j] < root) {
                return false;
            }
        }
        bool left = true;
        bool right = true;
        if (split > start) {
            left = VS_helper(sequence, start, split - 1);
        }
        if (split < end - 1) {
            right = VS_helper(sequence, split + 1, end);
        }
        return left && right;
 
    }
};
