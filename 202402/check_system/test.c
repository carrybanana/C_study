//
// Created by carry on 24-2-14.
//
#include <stdio.h>

int check_sys()
{
    int a = 1;
    return (*(char*)&a);    //小端返回1,大端返回0
}

int main(void)
{
    if(check_sys() == 1)
        printf("小端\n");
    else
        printf("大端\n");

    return 0;
}