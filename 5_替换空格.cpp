#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string replaceSpace(string str) {
        int len  = str.length();
        int nums = 0;
        string str_ = "";
        // 遍历一遍，统计空格，复制辅助字符串
        for(int i=0;i<len;i++){
            if (str[i] == ' '){
                str_ = str_ +"%20";
                continue;
            }
            str_ = str_+str[i];
        }
        return str_;
    }
};
int main(){
    Solution s;
    string input = "We Are Happy";

    cout<<s.replaceSpace(input)<<endl;
}
