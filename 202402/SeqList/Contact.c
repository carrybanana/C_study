//
// Created by CarryBanana on 24-2-29.
//

#include <string.h>

#include "contact.h"
#include  "SeqList.h"

//通讯录的初始化和销毁
void ContactInit(contact* pcon) {
    SLInit(pcon);
}
void ContactDestory(contact* pcon) {
    SLDestory(pcon);
}

//添加联系人
void ContacAdd(contact* pcon) {
    //获取的信息都是结构体CInfo里要求的数据
    CInfo info; //使用info获取信息
    printf("请输入联系人姓名：\n");
    scanf("%s",info.name);
    printf("请输入联系人性别：\n");
    scanf("%s",info.sex);
    printf("请输入联系人年龄：\n");
    scanf("%d",&info.age);
    printf("请输入联系人电话：\n");
    scanf("%s",info.tel);
    printf("请输入联系人地址：\n");
    scanf("%s",info.addr);

    //联系人数据获取到之后，并保存在结构体info中
    //接着往通讯录（顺序表）中插入数据
    //尾插
    SLPushBack(pcon,info);
}

//根据名字查找联系人
int FindByName(const contact* pcon, char name[]) {
    for(size_t i = 0; i<pcon->size; i++) {
        if(strcmp(pcon->a[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

//删除联系人
void ContactDel(contact* pcon) {
    //使用联系人名称来查找
    printf("请输入要删除的用户名称:\n");
    char name[NAME_MAX];
    scanf("%s",name);
    int findidex = FindByName(pcon, name);
    if(findidex<0) {
        printf("要删除的联系人不存在!\n");
        return;
    }
    //找到了,要删除findidex位置的数据
    SLErase(pcon, findidex);

}

//修改联系人
void ContactModify(contact* pcon) {
    char name[NAME_MAX];
    printf("请输入要修改的联系人姓名:\n");
    scanf("%s", name);
    int find = FindByName(pcon, name);
    if(find<0) {
        printf("要修改的联系人不存在!\n");
        return;
    }
    //找到了,要修改find位置的数据
    printf("请输入新的联系人姓名：\n");
    scanf("%s", pcon->a[find].name);
    printf("请输入新的联系人性别：\n");
    scanf("%s", pcon->a[find].sex);
    printf("请输入新的联系人年龄：\n");
    scanf("%d", &pcon->a[find].age);
    printf("请输入新的联系人电话：\n");
    scanf("%s", pcon->a[find].tel);
    printf("请输入新的联系人地址：\n");
    scanf("%s", pcon->a[find].addr);

    printf("修改成功！\n");
}

//查看通讯录
void ContactShow( contact* pcon) {
    //打印通讯录所有的数据
    //先打印表头文字
    printf("%s %s %s %s %s\n",
        "姓名",
        "性别",
        "年龄",
        "电环",
        "住址");
    for(size_t i = 0; i<pcon->size; i++) {
        printf("%-3s %-3s %-3d %-3s %-3s\n",
            pcon->a[i].name,
            pcon->a[i].sex,
            pcon->a[i].age,
            pcon->a[i].tel,
            pcon->a[i].addr);
    }
}

//查找指定联系人
void ContactFind(contact* pcon) {
    char name[NAME_MAX];
    printf("请输入要查找的用户名称:\n");
    scanf("%s",name);
    int find = FindByName(pcon, name);
    if(find<0) {
        printf("该联系人不存在！\n");
        return;
    }
    printf("已找到，信息如下\n");
    //先打印表头文字
    printf("%s %s %s %s %s\n",
        "姓名",
        "性别",
        "年龄",
        "电环",
        "住址");
    printf("%-3s %-3s %-3d %-3s %-3s\n",
    pcon->a[find].name,
    pcon->a[find].sex,
    pcon->a[find].age,
    pcon->a[find].tel,
    pcon->a[find].addr);

}
