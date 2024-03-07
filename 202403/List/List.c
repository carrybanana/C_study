//
// Created by CarryBanana on 24-3-6.
//

#include "List.h"

//打印链表
void LTPrint(LTNode* phead) {
    LTNode* cur = phead->next;
    while (cur != phead) {
        printf("%d->", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

//链表的初始化
// //前提：传入一个头节点
// void LTInit(LTNode** pphead){
//     *pphead = (LTNode*)malloc(sizeof(LTNode));
//     if(*pphead == NULL) {
//         perror("malloc error");
//         return;
//     }
//     //节点有三部分：数据 前驱指针 后继指针
//     (*pphead)->data = -1;   //哨兵位
//     (*pphead)->next = (*pphead)->prev = *pphead;
// }

//不需要传入参数，调用该方法之后给我们返回一个头节点
LTNode* LTInit() {
    LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
    if(phead == NULL) {
        perror("malloc error");
        return;
    }
    phead->data = -1;
    phead->next = phead->prev = phead;
    return  phead;
}
// 链表的销毁
// 传一级指针，plist还是指向链表的哨兵位,更倾向于传一级指针，因为要保持接口一致性
 void LTDestory(LTNode* phead) {
     assert(phead);
     LTNode* cur = phead->next;
     while (cur != phead) {
         LTNode* next = cur->next;
         free(cur);
         cur = next;
     }
     //出了循环之后，哨兵位还没释放
     free(phead);
       //传一级指针的时候需要手动将plist置为空
     phead = NULL;    //此操作没有将plist置为空
 }
// //传二级指针
// void LTDestory(LTNode** pphead) {
//     assert(pphead && *pphead);
//     LTNode* cur = (*pphead)->next;
//     while (cur != *pphead) {
//         LTNode* next = cur->next;
//         free(cur);
//         cur = next;
//     }
//     free(*pphead);
//     *pphead = NULL;
// }

//申请新节点
LTNode* ListBuyNode(LTDataType x) {
    LTNode* node = (LTNode*)malloc(sizeof(LTNode));
    node->data = x;
    node->next = node->prev = NULL;
    return node;
}

//尾部插入操作,在双向链表中不会改变哨兵位，所以这里传一级指针就可以了
void LTPushBack(LTNode* phead, LTDataType x) {
    assert(phead);
    LTNode* node = ListBuyNode(x);
    //先处理新节点node的前驱和后继指针
    node->prev = phead->prev;
    node->next = phead;
    //再处理phead->prev(之前的尾节点) 和 phead
    phead->prev->next = node;
    phead->prev = node;
}
//头插
void LTPushFront(LTNode* phead, LTDataType x) {
    assert(phead);
    LTNode* node = ListBuyNode(x);
    //先处理新节点node的前驱和后继指针
    node->prev = phead;
    node->next = phead->next;
    //再处理phead->next(之前的头节点) 和 phead
    phead->next->prev = node;
    phead->next = node;
}
//尾删
void LTPopBack(LTNode* phead) {
    assert(phead);
    //链表不能为空链表
    assert(phead->next != phead);

    //保存要删除的节点
    LTNode* del = phead->prev;
    //先处理del的prev节点
    del->prev->next = phead;
    //再处理phead
    phead->prev = del->prev;

    //释放del
    free(del);
    del = NULL;
}
//头删
void LTPopFront(LTNode* phead) {
    assert(phead);
    //链表不能为空链表
    assert(phead->prev != phead);

    //保存要删除的节点
    LTNode* del = phead->next;
    //先处理del的next位
    del->next->prev = phead;
    //再处理phead->next
    phead->next = del->next;

    //释放del
    free(del);
    del = NULL;
}

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x) {
    assert(pos);
    LTNode* node = ListBuyNode(x);
    //node 的 prev 和 next
    node->next = pos->next;
    node->prev = pos;
    //pos的next 和 pos->next的prev
    pos->next = node;
    node->next->prev = node;
}
//删除pos
void LTErase(LTNode* pos) {
    assert(pos);
    //pos->prev  pos  pos->next
    pos->next->prev = pos->prev;
    pos->prev->next = pos->next;

    //释放pos
    free(pos);
    pos = NULL;
}
//查找pos
LTNode* LTFind(LTNode* phead, LTDataType x) {
    assert(phead);
    LTNode* cur = phead->next;
    while (cur != phead) {
        if(cur->data == x) {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}