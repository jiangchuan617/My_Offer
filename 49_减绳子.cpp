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
    int cutRope(int number) {
        if (number==2){
            return 2;
        }
        if(number==3){
            return 3;
        }
        int x = number%3;
        int y = number/3;
        if(x ==0){
            return pow(3,y);
        }
        else if(x==1){
            return 2*2*pow(3,y-1);
        }
        else if(x==2){
            return 2*pow(3,y);
        }

    }
};