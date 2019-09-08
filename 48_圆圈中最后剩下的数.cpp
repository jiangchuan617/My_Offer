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
    // 环形链表
        // 数据方法
    int LastRemaining_Solution(int n, int m) {
        if (n == 0) {
            return -1;
        }
        if (n == 1) {
            return 0;
        }
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(0);
        for (int i = 2; i <= n; i++) {
            dp.push_back((dp[i - 1] + m) % i);

        }
        return dp[n];

    }
};