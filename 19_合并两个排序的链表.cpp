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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2){
        if(!pHead1){
            return pHead2;
        }
        else if(!pHead2){
            return pHead1;
        }
        ListNode *res = NULL;
        if(pHead1->val<pHead2->val){
            res = pHead1;
            res->next = Merge(pHead1->next,pHead2);
        }
        else{
            res = pHead2;
            res->next = Merge(pHead1,pHead2->next);
        }
        return res;

    }
};