//
// Created by CarryBanana on 24-3-6.
//

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//定义双向链表节点的结构
typedef int LTDataType;
typedef struct ListNode {
    LTDataType data;       //val == data
    struct ListNode* next;
    struct ListNode* prev;
}LTNode;

//打印链表
void LTPrint(LTNode* phead);

//链表的初始化
//void LTInit(LTNode** pphead);   //前提：传入一个头节点
LTNode* LTInit();       //不需要传入参数，调用该方法之后给我们返回一个头节点
//链表的销毁
//传一级指针，销毁链表后，plist还是指向链表的哨兵位，需要手动将plist置为空
 void LTDestory(LTNode* phead);
//传二级指针
// void LTDestory(LTNode** pphead);

//尾部插入操作,在双向链表中不会改变哨兵位，所以这里传一级指针就可以了
void LTPushBack(LTNode* phead, LTDataType x);
//头插
void LTPushFront(LTNode* phead, LTDataType x);
//尾删
void LTPopBack(LTNode* phead);
//头删
void LTPopFront(LTNode* phead);

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);
//删除pos
void LTErase(LTNode* pos);
//查找pos
LTNode* LTFind(LTNode* phead, LTDataType x);


#endif //LIST_H
