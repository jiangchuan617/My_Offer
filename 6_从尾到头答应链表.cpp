#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode *head) {
        vector<int> res;
        stack<int> my_stack;
        while(head->next){
            my_stack.push(head->val);
            head = head->next;

        }
        my_stack.push(head->val);
        while(!my_stack.empty()){
            res.push_back(my_stack.top());
            my_stack.pop();

        }
        return res;


    }
};

int main() {
    ListNode t1(0);
    ListNode t2(1);
    ListNode t3(2);
    ListNode t4(3);
    ListNode t5(4);
    ListNode t6(5);
    t1.next = &t2;
    t2.next = &t3;
    t3.next = &t4;
    t4.next = &t5;
    t5.next = &t6;

    Solution s;
    vector<int> res = s.printListFromTailToHead(&t1);
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

}
