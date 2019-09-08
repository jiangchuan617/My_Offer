#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        // 动态规划 dp是以i为节点的子数组的最大和
        vector<int> dp;
        dp.push_back(array[0]);
        int max_val = array[0];
        for (int i = 1; i < array.size(); i++) {
            if (dp[i - 1] > 0) {
                dp.push_back(array[i] + dp[i - 1]);
            } else {
                dp.push_back(array[i]);
            }
            if (dp[i]>max_val){
                max_val = dp[i];
            }
        }
        return max_val;

    }
};