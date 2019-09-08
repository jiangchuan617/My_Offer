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
    int InversePairs(vector<int> data) {
        return mergeSort(data, 0, data.size() - 1);
    }
private:
    long long mergeSort(vector<int> &data, int s, int e) {
        if (s >= e) return 0;
        int mid = (e - s) / 2 + s;
        long long num = mergeSort(data, s, mid) + mergeSort(data, mid + 1, e);
        int i = s, j = mid + 1;
        int cnt = 0;
        vector<int> tmp;
        while (i <= mid || j <= e) {
            if (i > mid) {
                tmp.push_back(data[j++]);
            }
            else if (j > e) {
                num += cnt;
                tmp.push_back(data[i++]);
            }
            else if (data[i] > data[j]) {
                cnt++;
                tmp.push_back(data[j++]);
            }
            else {
                num += cnt;
                tmp.push_back(data[i++]);
            }
        }
        for (int i = s; i <= e; ++i) {
            data[i] = tmp[i - s];
        }
        return num%1000000007;
    }
};