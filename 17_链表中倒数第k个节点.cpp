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
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k) {
        if (pListHead == NULL && k <= 0) {
            return NULL;
        }
        ListNode *p1 = pListHead;
        ListNode *p2 = pListHead;
        // 链表长度小于k
        while (p1 && k > 0){
            p1 = p1->next;
            k--;
        }
        while(p1){
            p1 = p1->next;
            p2 = p2->next;
        }
        if (k==0){
            return p2;
        }
        return NULL;

    }
};
