#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <string>

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
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2) {
 
        /*
        假定 List1长度: a+n  List2 长度:b+n, 且 a<b
        那么 p1 会先到链表尾部, 这时p2 走到 a+n位置,将p1换成List2头部
        接着p2 再走b+n-(n+a) =b-a 步到链表尾部,这时p1也走到List2的b-a位置，还差a步就到可能的第一个公共节点。
        将p2 换成 List1头部，p2走a步也到可能的第一个公共节点。如果恰好p1==p2,那么p1就是第一个公共节点。  或者p1和p2一起走n步到达列表尾部，二者没有公共节点，退出循环。 同理a>=b.
        时间复杂度O(n+a+b)
 
       */
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;
        while(p1!=p2){
//            if(p1){
//                p1 = p1->next;
//            } else{
//                p1 = pHead2;
//            }
//
//            if(p2){
//                p2 = p2->next;
//            }
//            else{
//                p2 = pHead1;
//            }
            p1 = (p1==NULL ? pHead2 : p1->next);
            p2 = (p2==NULL ? pHead1 : p2->next);
        }
        return p1;
 
 
 
    }
};
