#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>

using namespace std;
class Solution {
public:
    double Power(double base, int exponent) {
        if (equal_zero(base) && exponent<0){
            return 0.0;
        }
        double ret = power_val(base,abs(exponent));
        if (exponent<0){
            ret = 1.0/ret;
        }
        return ret;

    }

private:
    bool equal_zero(double num){
        if(abs(num-0.0)<0.0000001){
            return true;
        }
        return false;
    }
    double power_val(double base,int exponent){
        if (exponent==0){
            return 1;
        }
        else if(exponent==1){
            return base;
        }
        double ret = power_val(base,exponent>>1);
        ret *= ret;
        if (exponent&1 ==1){
            ret *=base;
        }
        return ret;
    }
};