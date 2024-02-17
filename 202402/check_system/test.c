//
// Created by carry on 24-2-14.
//
#include <stdio.h>

/*
//方法1
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
*/

//方法2
int check_sys()
{
    union {
        char c;
        int i;
    } u;
    u.i = 1;
    return u.c;
}


int main(void)
{
    if (check_sys() == 1) {
        printf("小端\n");
    } else {
        printf("大端\n");
    }

    return 0;
}

