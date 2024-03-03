//
// Created by CarryBanana on 24-3-3.
//

#include "SList.h"

//打印
void SLPrint(SLNode* phead) {
    //循环打印
    SLNode* pcur = phead;
    while (pcur) {
        printf("%d ->",pcur->data);
        pcur = pcur->next;
    }
    printf("NULL\n");
}

//创建新的节点
SLNode* SLBuyNode(SLDataType x) {
    SLNode* node = (SLNode*)malloc(sizeof(SLNode));
    node->data = x;
    node->next = NULL;
    return node;
}

//尾插
void SLPushBack(SLNode** pphead, SLDataType x) {
    assert(pphead);
    SLNode* node = SLBuyNode(x);
    if(*pphead == NULL) {
        *pphead = node;
        return;
    }
    //链表不为空，找尾
    SLNode* pcur = *pphead;
    while (pcur->next) {
        pcur = pcur->next;
    }
    pcur->next = node;
}

//头插
void SLPushFront(SLNode** pphead, SLDataType x) {
    assert(pphead);
    SLNode* node = SLBuyNode(x);
    //新节点连接头节点
    node->next = *pphead;
    //新的节点成为头节点
    *pphead = node;
}

//尾删
void SLPopBack(SLNode** pphead) {
    assert(pphead);
    //第一个节点不能为空
    assert(*pphead);
    if((*pphead)->next == NULL) {       //只有一个节点的情况

        //直接把头节点删除
        free(*pphead);
        *pphead = NULL;
    }
    else{     //有多个节点的情况
        //找到尾节点和尾节点前一个节点
        SLNode* prev = NULL;    //尾节点前一个节点
        SLNode* ptail = *pphead;   //尾节点
        while(ptail->next) {
            prev = ptail;       //在找到尾节点的时候保留尾节点之前的指针
            ptail = ptail->next;    //寻找尾节点
        }
        // prev->next = ptail->next;
        prev->next = NULL;
        free(ptail);
        ptail = NULL;
    }

}

//头删
void SLPopFront(SLNode** pphead) {
    assert(pphead);
    assert(*pphead);
    SLNode* del = *pphead;
    *pphead = (*pphead)->next;
    free(del);
    del = NULL;
}

//查找第一个为x的节点
SLNode* SLFind(SLNode** pphead,SLDataType x) {
    assert(pphead);
    SLNode* pcur = *pphead;
    while (pcur) {
        if(pcur->data == x) {
            return pcur;
        }
        pcur = pcur->next;
    }
    return NULL;
}

//指定位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x) {
    assert(pphead);
    assert(pos);        //约定链表不能为空，pos也不能为空
    assert(*pphead);

    SLNode* node = SLBuyNode(x);

    //处理只有一个节点 + pos指向第一个节点
    if(pos == *pphead) {
        node->next = *pphead;
        *pphead = node;
        return;
    }
    //处理没有节点 + pos必须为空
    if(*pphead == NULL) {

    }
    //找pos的前一个节点
    SLNode* prev = *pphead;
    while(prev->next != pos) {
        prev = prev->next;
    }
    //prev node pos
    node->next = pos;
    prev->next = node;

}

//指定位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType x) {
    assert(pos);
    SLNode* node = SLBuyNode(x);
    // pos node pos->next
    node->next = pos->next;
    pos->next = node;
}

//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos) {
    assert(pphead);
    assert(*pphead);
    assert(pos);
    if(pos == *pphead) {
        *pphead = (*pphead)->next;
        free(pos);
        pos = NULL;
        return;
    }
    //找pos前一个节点
    SLNode* prev = *pphead;
    while (prev->next != pos) {
        prev = prev->next;
    }
    //prev pos pos->next
    prev->next = pos->next;
    free(pos);
    pos = NULL;
}

//删除pos之后的一个节点
void SLEraseAfter(SLNode* pos) {
    assert(pos  && pos->next);
    SLNode* del = pos->next;
    pos->next = del->next;
    free(del);
    del = NULL;
}

//链表的销毁
void SLDesTory(SLNode** pphead) {
    assert(pphead);
    SLNode* pcur = *pphead;
    //循环删除
    while(pcur) {
        SLNode* next = pcur->next;
        free(pcur);
        pcur = next;
    }
    *pphead = NULL;
}
