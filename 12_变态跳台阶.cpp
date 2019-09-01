#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(2);
        for (int i = 3; i <= number; i++) {
            int sum = 1;
            for (int j = 0; j < i; j++) {
                sum = sum+dp[j];
            }
            dp.push_back(sum);
        }
        return dp[number];
    }
};