#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>

using namespace std;
// 相对位置变化
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int i = 0;
        int j = array.size() - 1;
        while (i < j) {
            while (!is_even(array[i])) {
                i++;
            }
            while (is_even(array[j])) {
                j--;
            }
            if (i < j) {
                swap(array[i], array[j]);
            }
        }

    }

private:
    bool is_even(int num) {
        return (num & 1) == 0;
    }
};