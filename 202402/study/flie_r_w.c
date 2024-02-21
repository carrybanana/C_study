//
// Created by CarryBanana on 24-2-21.
//

#include <stdio.h>

int main(void)
{
    FILE * pf = fopen("test.txt", "w");
    if(pf == NULL)
    {
        perror("fopen");
        return 1;
    }
    //写文件
//    fputc('x', pf);
//    fputc('y', pf);
//    fputc('z', pf);
//    fputc('q', pf);
    char ch = 0;
    for( ch = 'a'; ch <= 'z'; ch++)
    {
        fputc(ch, pf);
    }
    //关闭文件
    fclose(pf);
    pf = NULL;

    return 0;
}