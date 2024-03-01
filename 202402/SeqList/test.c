//
// Created by CarryBanana on 24-2-28.
//

#include "SeqList.h"
#include "contact.h"
//
// void SLtest() {
//     SL sl;
//     SLInit(&sl);
//     //顺序表的操作
//     SLPushBack(&sl, 1);
//     SLPushBack(&sl, 2);
//     SLPushBack(&sl, 3);
//     SLPushBack(&sl, 4);
//     //打印一下顺序表
//     SLPrint(&sl);
//
//     //头插
//     SLPushFront(&sl, 5);
//     SLPushFront(&sl, 6);
//     SLPushFront(&sl, 7);
//     //打印顺序表
//     SLPrint(&sl);
//
//     //尾删
//     SLPopBack(&sl);
//     //打印顺序表
//     SLPrint(&sl);
//     //尾删
//     SLPopBack(&sl);
//     //打印顺序表
//     SLPrint(&sl);
//
//     //销毁顺序表
//     SLDestory(&sl);
// }
//
// void SLtest02() {
//     SL sl;
//     SLInit(&sl);
//     SLPushBack(&sl, 1);
//     SLPushBack(&sl, 2);
//     SLPushBack(&sl, 3);
//     SLPushBack(&sl, 4);
//     SLPrint(&sl);
//     //
//     // //头删
//     // SLPopFront(&sl);
//     // SLPrint(&sl);
//     // SLPopFront(&sl);
//     // SLPrint(&sl);
//     // SLPopFront(&sl);
//     // SLPrint(&sl);
//     // SLPopFront(&sl);
//     // SLPrint(&sl);
//
//     //删除指定位置的数据
//     // SLErase(&sl, 0);
//     // SLPrint(&sl);
//     // SLErase(&sl, sl.size-1);
//     // SLPrint(&sl);
//     // SLErase(&sl, 0);
//     // SLErase(&sl, 0);
//     // SLErase(&sl, 0);
//
//     //查找
//     bool findRet = SLFind(&sl, 3);
//     if (findRet) {
//         printf("找到了！\n");
//     } else {
//         printf("没有找到！\n");
//     }
//
//     //销毁顺序表
//     SLDestory(&sl);
// }
//
// void contact01() {
//     //创建一个通讯录con
//     contact con;
//
//     //初始化
//     ContactInit(&con);
//
//     //往通讯录中插入数据
//     ContacAdd(&con);
//     ContacAdd(&con);
//
//     //打印一下通讯录
//     ContactShow(&con);
//     //
//     // //删除指定数据
//     // ContactDel(&con);
//     //
//     // //打印一下通讯录
//     // ContactShow(&con);
//
//     // //修改数据
//     // ContactModify(&con);
//     // //打印一下通讯录
//     // ContactShow(&con);
//
//     //查找数据
//     ContactFind(&con);
//
//     //销毁
//     ContactDestory(&con);
// }

void menu() {
    printf("***************通讯录***************\n");
    printf("******1、添加联系人   2、删除联系人*****\n");
    printf("******3、修改联系人   4、查找联系人*****\n");
    printf("******5、查看通讯录   0、退   出  *****\n");
    printf("***********************************\n");
}

int main(void) {
    int op = -1;
    //定义一个通讯录
    contact con;
    //初始化
    ContactInit(&con);
    do {
        menu();
        printf("请选择您的操作：\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                ContacAdd(&con);
                break;
            case 2:
                ContactDel(&con);
                break;
            case 3:
                ContactModify(&con);
                break;
            case 4:
                ContactFind(&con);
                break;
            case 5:
                ContactShow(&con);
                break;
            case 0:
                printf("goodbye~~~\n");
                break;
            default:
                printf("您的输入有误，请重新输入：\n");
                break;
        }
    }while (op != 0);
    //销毁
    ContactDestory(&con);


    return 0;
}
