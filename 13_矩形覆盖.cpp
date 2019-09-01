#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int rectCover(int number) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(2);
        for (int i = 3; i <= number; i++) {
            dp.push_back(dp[i-1]+dp[i-2]);
        }
        return dp[number];
    }
};