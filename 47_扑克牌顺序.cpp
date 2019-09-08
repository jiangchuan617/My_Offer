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
    bool IsContinuous(vector<int> numbers) {
        if(numbers.size()<5 || numbers.size()>5){
            return false;
        }
        // 排序
        sort(numbers.begin(),numbers.end());
        int count_zeros=0;
        // 0的数量
        int k= 0;
        for(int i=0;i<5;i++){
            if(numbers[i]==0){
                count_zeros++;
            }
            if(numbers[i]!=0){
                k = i;
                break;
            }
        }
        // 判定间隔数量
        int interval = 0;
        for(int j =k;j<4;j++){
            if(numbers[j+1]-numbers[j]>1){
                interval += numbers[j+1]-numbers[j]-1;
            }
            if(numbers[j+1]-numbers[j]==0){
                return false;
            }
        }
        if (interval<=count_zeros){
            return true;
        }
        return false;


    }
};