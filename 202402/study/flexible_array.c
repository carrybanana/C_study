//
// Created by CarryBanana on 24-2-20.
//

#include <stdio.h>
#include <malloc.h>

struct st_type
{
    int i;
    int a[];   //柔性数组
};

int main(void)
{
    //printf("%zd\n",sizeof(struct st_type));
    struct st_type *p = (struct st_type *) malloc(sizeof(struct st_type) + 10 * sizeof(int));
    if (p == NULL)
    {
        perror("malloc");
        return 1;
    }
    //使用
    int i = 0;
    p->i = 100;
    for (i = 0; i < 10; i++)
    {
        p->a[i] = i;
    }
    //结构中a数组变长为60个字节
    struct st_type *ptr = (struct st_type *) realloc(p, sizeof(struct st_type) + 15 * sizeof(int));
    if (ptr != NULL)
    {
        p = ptr;
        ptr = NULL;
    }
    else
    {
        perror("realloc");
        return 1;
    }

    //使用新的数组
    for (int i = 0; i < 16; i++)
    {
        printf("%d\n", p->a[i]);
    }
    //释放
    free(p);
    p = NULL;

    return 0;
}