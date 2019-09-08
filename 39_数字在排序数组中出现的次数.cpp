#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>

using namespace std;
 
class Solution {
public:
    int GetNumberOfK(vector<int> data, int k) {
        int len = data.size();
        int index1 = Binary_search(data,k-0.5);
        int index2= Binary_search(data,k+0.5);
        return index2-index1;
 
    }
    int Binary_search(vector<int> data,double k){
        int s = 0;
        int e = data.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(data[mid]<k){
                s = mid+1;
            }
            else if(data[mid]>k){
                e = mid -1;
            }
        }
        return s;
    }
 
 
 
};
