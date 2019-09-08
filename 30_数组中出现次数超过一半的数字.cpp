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
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int, int> my_count;
        for (int i =0;i<numbers.size();i++){
            if(my_count.find(numbers[i])==my_count.end()){
                my_count[numbers[i]] = 1;
            }
            else{
                my_count[numbers[i]] += 1;
            }
        }
        int res =0;
        for(map<int,int>::iterator it=my_count.begin();it!=my_count.end();it++){
            if (it->second>numbers.size()/2){
                res = it->first;
            }
        }
        return res;

    }
};