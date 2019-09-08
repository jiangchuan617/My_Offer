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
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int,vector<int>,less<int>> Q; // 最大堆
        for(int i= 0;i<input.size();i++){
            if (Q.size()<k){
                Q.push(input[i]);
            }
            else if(Q.top()>input[i]){
                    Q.pop();
                    Q.push(input[i]);

            }
        }
        vector<int> res;
        while(!Q.empty()){
            res.push_back(Q.top());
            Q.pop();
        }
        sort(res.begin(),res.end());
        return res;


    }
};

int main(){
    vector<int> input;
    input.push_back(4);
    input.push_back(5);
    input.push_back(1);
    input.push_back(6);
    input.push_back(2);
    input.push_back(7);
    input.push_back(3);
    input.push_back(8);
    Solution s;
    vector<int> res = s.GetLeastNumbers_Solution(input,4);
    for(int i= 0;i<res.size();i++){
        cout<<res[i]<<" "<<endl;
    }
    return 0;
}