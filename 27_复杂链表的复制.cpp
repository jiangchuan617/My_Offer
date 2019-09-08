#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <math.h>
#include <queue>

using namespace std;

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        CloneNodes(pHead);
        ConnectRandomNodes(pHead);
        return Distract(pHead);
    }
     
    //把每一个节点的复制后的节点，连接在每一个后面
    void CloneNodes(RandomListNode* pHead)
    {
        RandomListNode* pNode=pHead;
        while(pNode!=nullptr)
        {
//构造函数，新开辟空间用于存复制的节点，由于后面没有赋节点给pCloneNode的步骤，所以不能赋值为nullptr
            RandomListNode* pCloneNode=new RandomListNode(0);//label初始化为0
            pCloneNode->label=pNode->label;//此步复制了节点
            pCloneNode->next=pNode->next;
            pCloneNode->random=nullptr;
             
            pNode->next=pCloneNode;
            pNode=pCloneNode->next;
        }
    }
     
    //设置复制出来的节点的random指针
    void ConnectRandomNodes(RandomListNode* pHead)
    {
        RandomListNode* pNode=pHead;
        while(pNode!=nullptr)
        {
            RandomListNode* pCloneNode=pNode->next;
            if(pNode->random!=nullptr)
                pCloneNode->random=pNode->random->next;
            pNode=pCloneNode->next;
        }
    }
     
    //将一个链表拆分为两个链表,并只返回复制的那个链表
    RandomListNode* Distract(RandomListNode* pHead)
    {
        RandomListNode* pNode=pHead;//把A赋给pNode
        RandomListNode* pCloneHead=nullptr;
        RandomListNode* pCloneNode=nullptr;
         
        if(pNode!=nullptr)
        {
            pCloneNode=pNode->next;
            pCloneHead=pNode->next;
            pNode->next=pCloneNode->next;//A->B连接
            pNode=pCloneNode->next;//把B赋给pNode
        }
        while(pNode!=nullptr)
        {
            pCloneNode->next=pNode->next;//A'->B'连接
            pCloneNode=pNode->next;//把B‘赋给pCloneNode
             
            pNode->next=pCloneNode->next;//B->C连接 等
            pNode=pCloneNode->next;//把C赋给pNode 等
        }
        return pCloneHead;
    }
};