#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>
#include <queue>

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        vector<int> tempStack;
        int i = 0;
        for(vector<int>::iterator it = pushV.begin();it != pushV.end(); ++it)
        {
            tempStack.push_back(*it);
            while(tempStack.size() > 0 && tempStack.back() == popV[i])
            {
                tempStack.pop_back();
                ++i;
            }
        }
        return tempStack.empty();
    }

};
