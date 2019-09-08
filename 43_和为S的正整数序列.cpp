#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>

using namespace std;

 
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        int left = 1;
        int right = 2;
        int cur = 0;
        vector<vector<int>> res;
        while(left<right){
            cur = (left+right)*(right-left+1)/2;
            if(cur<sum){
                right++;
            }
            if(cur==sum){
                vector<int> ans;
                for(int i = left;i<=right;i++){
                    ans.push_back(i);
                     
                }
                res.push_back(ans);
                left++;
            }
            if(cur>sum){
                left++;
            }
             
        }
        return res;
 
    }
};
