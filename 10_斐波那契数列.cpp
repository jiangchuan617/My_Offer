
class Solution {
public:
    int Fibonacci(int n) {
//        vector<int> dp;
//        dp.push_back(0);
//        dp.push_back(1);
//        for(int i=2;i<=n;i++){
//            dp.push_back(dp[i-1]+dp[i-2]);
//        }
//        return dp[n];
        int dp[40] ={0};
        dp[1]=1;
        for (int i =2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];

    }
};