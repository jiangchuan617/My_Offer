#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size()==1){
            return rotateArray[0];
        }
        else if(rotateArray.size()==2){
            return rotateArray[0]<rotateArray[1] ? rotateArray[0]:rotateArray[1];
        }
        int i =0;
        int j = rotateArray.size()-1;
        int mid = 0;
        while(rotateArray[i]>=rotateArray[j]){
            if(j-i==1){
                mid = j;
                break;
            }
            mid = i+(j-i)/2;
            if(rotateArray[i]<=rotateArray[mid]){
                i = mid;
            }
            if(rotateArray[mid]<=rotateArray[j]){
                j = mid;
            }
        }
        return rotateArray[mid];


    }
};