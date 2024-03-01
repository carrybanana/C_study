//
// Created by CarryBanana on 24-2-28.
//

#ifndef SEQLIST_H
#define SEQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "Contact.h"

//动态顺序表
// typedef int SLDataType;
//更改数据类型为通讯录数据类型

 typedef struct ContactInfo SLDataType; //最好选择这个形式，容易维护
//typedef CInfo SLDataType;

typedef struct SeqList {
    SLDataType *a;
    size_t size; //顺序表中有效的数据个数
    size_t capacity; //顺序表当前的空间大小
} SL;

//typedef struct SeqList SL;

//对顺序表初始化
void SLInit(SL *ps);

void SLDestory(SL *ps);

//头部/尾部 插入/删除
void SLPushBack(SL *ps, SLDataType x);

void SLPushFront(SL *ps, SLDataType x);

void SLPopBack(SL *ps);

void SLPopFront(SL *ps);

//打印顺序表
void SLPrint(SL *ps);

//判断顺序表是否为空
bool SLIsEmpty(SL *ps);

//在任意位置插入删除
//在指定的位置之前插入数据
void SLInsert(SL *ps, int pos, SLDataType x);

//删除指定位置的数据
void SLErase(SL *ps, int pos);

//查找数据是否存在
bool SLFind(SL *ps, SLDataType x);


#endif //SEQLIST_H
