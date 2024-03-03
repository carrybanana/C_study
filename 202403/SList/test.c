//
// Created by CarryBanana on 24-3-3.
//

#include "SList.h"

void sltest() {
    SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
    node1->data = 1;
    SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
    node2->data = 2;
    SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
    node3->data = 3;
    SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
    node4->data = 4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    //打印链表
    SLNode* plist = node1;
    SLPrint(plist);
}       //打印

void sltest01() {   //尾插
    SLNode* plist = NULL;
    //尾插
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 2);
    SLPushBack(&plist, 3);
    SLPushBack(&plist, 4);
    // SLPushBack(NULL, 5);
    //打印
    SLPrint(plist);
}       //尾插

void sltest02() {       //头插
    SLNode* plist = NULL;
    SLPushFront(&plist, 1);
    SLPushFront(&plist, 2);
    SLPushFront(&plist, 3);
    SLPushFront(&plist, 4);
    SLPrint(plist);
}       //头插

void sltest03() {
    SLNode* plist = NULL;
    SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
    node1->data = 1;
    SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
    node2->data = 2;
    SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
    node3->data = 3;
    SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
    node4->data = 4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    plist = node1;

    SLPrint(plist);

    SLPopBack(&plist);
    SLPopBack(&plist);
    SLPopBack(&plist);
    SLPopBack(&plist);

    SLPrint(plist);
}       //尾删

void sltest04() {
    SLNode* plist = NULL;
    SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
    node1->data = 1;
    SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
    node2->data = 2;
    SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
    node3->data = 3;
    SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
    node4->data = 4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    plist = node1;

    SLPrint(plist);

    SLPopFront(&plist);
    SLPopFront(&plist);
    SLPopFront(&plist);
    SLPopFront(&plist);

    SLPrint(plist);
}       //头删

void sltest05() {
    SLNode* plist = NULL;
    SLNode* node1 = (SLNode*)malloc(sizeof(SLNode));
    node1->data = 1;
    SLNode* node2 = (SLNode*)malloc(sizeof(SLNode));
    node2->data = 2;
    SLNode* node3 = (SLNode*)malloc(sizeof(SLNode));
    node3->data = 3;
    SLNode* node4 = (SLNode*)malloc(sizeof(SLNode));
    node4->data = 4;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    plist = node1;

    SLPrint(plist);

    SLNode* find = SLFind(&plist, 1);
    SLInsert(&plist, find, 11);
    SLPrint(plist);
}       //pos位置之前插入数据

int main(void) {
    // sltest();           //打印
    // sltest01();         //尾插
    // sltest02();         //头插
    // sltest03();         //尾删
    // sltest04();         //头删
    sltest05();         //pos位置之前插入数据


    return 0;
}