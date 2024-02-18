/*
//
// Created by CarryBanana on 24-2-18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //假设申请10个整型的空间
    int *p = (int *) malloc(10 * sizeof(int));
    if (p == NULL)
    {
        perror("malloc");
        return 1;
    }
    //使用
    int i = 0;
    //赋值 0 1 2 3 4 5 6 7 8 9
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i;
    }
    //打印
    for (i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    //释放内存
    free(p);
    p = NULL;

    return 0;
}*/
