//
// Created by CarryBanana on 24-3-6.
//

#include "List.h"

void ListTest() {
    // LTNode* plist = NULL;
    // LTInit(&plist);
    LTNode* plist = LTInit();
    //尾插
    LTPushBack(plist,1);
    LTPushBack(plist,2);
    LTPushBack(plist,3);
    LTPushBack(plist,4);
    LTPrint(plist);     //1 2 3 4 (4后面指向的是哨兵位)
    // //头插
    // LTPushFront(plist, 5);
    // LTPushFront(plist, 6);
    // LTPushFront(plist, 7);
    // LTPushFront(plist, 8);      //8 7 6 5 1 2 3 4
    // LTPrint(plist);

    // //尾删
    // LTPopBack(plist);
    // LTPopBack(plist);
    // LTPopBack(plist);
    // LTPopBack(plist);
    // LTPopBack(plist);
    // LTPrint(plist);

    // //头删
    // LTPopFront(plist);
    // LTPopFront(plist);
    // LTPopFront(plist);
    // LTPopFront(plist);
    // LTPopFront(plist);
    // LTPrint(plist);

    //指定位置之后插入
    // LTNode* find = LTFind(plist, 1);
    // // LTInsert(find, 11);
    // LTErase(find);
    // LTPrint(plist);

    LTDestory(plist);
    plist = NULL; //传一级指针的时候需要手动将plist置为空

    // LTDestory(&plist);  //传二级指针
}

int main(void) {
    ListTest();
    return 0;
}