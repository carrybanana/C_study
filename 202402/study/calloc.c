//
// Created by CarryBanana on 24-2-18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //calloc申请的空间默认会被初始化0
    //malloc申请的空间不会被初始化
    int *p = (int *)calloc(10,sizeof(int));
    if(p == NULL)
    {
        perror("calloc");
        return 1;
    }
    //使用内存
    int i = 0;
    //赋值 0 1 2 3 4 5 6 7 8 9
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    //打印
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }
    //释放内存
    free(p);
    p = NULL;

    return 0;
}