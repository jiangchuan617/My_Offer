#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) :
            val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode *ReverseList(ListNode *pHead) {
        ListNode *res = NULL;
        ListNode *now = pHead;
        ListNode *pre = NULL;
        while(now){
            ListNode *p_next = now->next;
            if(p_next==NULL){
                res = now;
            }
            now->next = pre;
            pre = now;
            now = p_next;

        }
        return res;

    }
};