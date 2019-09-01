#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool res = false;
        int rows = array.size();
        int columns = array[0].size();
        int i = 0;
        int j = columns-1;
        while(i<rows && j>=0){
            if (array[i][j]==target){
                res= true;
                break;
            }
            else if (array[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return res;


    }
};