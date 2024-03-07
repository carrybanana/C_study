//
// Created by CarryBanana on 24-3-3.
//

#ifndef SLIST_H
#define SLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//定义链表节点的结构
typedef int SLDataType;
typedef struct SListNode {
    SLDataType data;
    struct SListNode* next;
}SLNode;

//创建几个节点组成一个链表，并打印链表
void SLPrint(SLNode* phead);

//尾插
void SLPushBack(SLNode** pphead, SLDataType x);
//头插
void SLPushFront(SLNode** pphead, SLDataType x);
//尾删
void SLPopBack(SLNode** pphead);
//头删
void SLPopFront(SLNode** pphead);
//查找,传一级指针就可以了，因为不改变头节点。但是这里要写二级指针，因为要保持接口一致性
SLNode* SLFind(SLNode** pphead,SLDataType x);
//指定位置之前插入数据
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x);
//指定位置之后插入数据
void SLInsertAfter(SLNode* pos, SLDataType x);
//删除pos节点
void SLErase(SLNode** pphead, SLNode* pos);
//删除pos之后节点
void SLEraseAfter(SLNode* pos);
//链表的销毁
void SLDesTory(SLNode** pphead);


#endif //SLIST_H
