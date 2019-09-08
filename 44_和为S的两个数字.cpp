#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>

using namespace std;


class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum) {
        vector<int> res;
        int i = 0;
         
        int j = array.size() - 1;
        while (i < j) {
            int sum_ = array[i] + array[j];
            if(sum_<sum){
                i++;
            }
            if (sum_ == sum) {
                res.push_back(array[i]);
                res.push_back(array[j]);
                break;
            }
            if(sum_>sum){
                j--;
            }
        }
        return res;
 
    }
};
