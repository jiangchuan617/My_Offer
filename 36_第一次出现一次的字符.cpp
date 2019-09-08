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
    int FirstNotRepeatingChar(string str) {
        map<char,int> mp;
        for (int i=0;i<str.length();i++){
            mp[str[i]]+=1;
        }
        for(int i = 0;i<str.length();i++){
            if(mp[str[i]]==1){
                return i;
            }
        }
        return -1;

    }
};
