////
//// Created by CarryBanana on 24-2-21.
////
//
//#include <stdio.h>
//
//int main(void)
//{
//    FILE * pf = fopen("test.txt", "w");
//    if(pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件
////    fputc('x', pf);
////    fputc('y', pf);
////    fputc('z', pf);
////    fputc('q', pf);
//    char ch = 0;
//    for( ch = 'a'; ch <= 'z'; ch++)
//    {
//        fputc(ch, pf);
//    }
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}
//
//#include "stdio.h"
//
//int main(void)
//{
//    fputc('a',stdout);
//    fputc('b',stdout);
//    fputc('c',stdout);
//
//    return 0;
//}

//
//#include "stdio.h"
//
//int main(void)
//{
//    int ch = fgetc(stdin);
//    printf("%c\n",ch);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//    FILE * pf = fopen("test.txt", "r");
//    if(pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    int ch = fgetc(pf);
//    printf("%c\n", ch);

//    ch = fgetc(pf);
//    printf("%c\n", ch);

//    ch = fgetc(pf);
//    printf("%c\n", ch);

//    ch = fgetc(pf);
//    printf("%d\n", ch);
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}
//
//#include <stdio.h>
//
////文件拷贝
//int main(void){
//    FILE* pfread = fopen("date1.txt", "r");
//    if(pfread == NULL){
//        perror("fopen-1");
//        return 1;
//    }
//    FILE* pfwrite = fopen("date2.txt","w");
//    if(pfwrite == NULL){
//        fclose(pfread);
//        pfread = NULL;
//        perror("fopen-2");
//        return 1;
//    }
//
//    //读文件 - 写文件
//    int ch = 0;
//    while ((ch = fgetc(pfread)) != EOF){
//        fputc(ch, pfwrite);
//    }
//    //关闭文件
//    fclose(pfread);
//    fclose(pfwrite);
//    pfread = NULL;
//    pfwrite = NULL;
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//    FILE * pf = fopen("test.txt", "w");
//    if(pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写一行
//    fputs("hello world\n", pf);
//    fputs("hehe\n", pf);
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//    FILE * pf = fopen("date.txt", "r");
//    if(pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    char arr[20] = "xxxxxxxxxxxxxxxxxxxx";
//    fgets(arr, 20, pf);
//    printf("%s",arr);
//
//    fgets(arr, 20, pf);
//    printf("%s",arr);
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

//#include <stdio.h>
//struct S{
//    int n;
//    float f;
//    char arr[20];
//};
//
//int main(void){
//    struct S s = {
//            100,
//            3.14f ,
//            "zhangsan"
//    };
//    FILE* pf = fopen("date.txt", "w");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写文件
//    fprintf(pf, "%d %f %s",s.n, s.f, s.arr);
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

//
//#include <stdio.h>
//struct S{
//    int n;
//    float f;
//    char arr[20];
//};
//
//int main(void){
//    struct S s = {
//            100,
//            3.14f ,
//            "zhangsan"
//    };
////    FILE* pf = fopen("date.txt", "w");
////    if(pf == NULL){
////        perror("fopen");
////        return 1;
////    }
//    //写文件
//    fprintf(stdout, "%d %f %s",s.n, s.f, s.arr);
////
////    //关闭文件
////    fclose(pf);
////    pf = NULL;
//
//    return 0;
//}
//
//#include <stdio.h>
//struct S{
//    int n;
//    float f;
//    char arr[20];
//};
//
//int main(void){
//    struct S s = {0};
//    FILE* pf = fopen("date.txt", "r");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //读文件
//    fscanf(pf, "%d %f %s",&s.n, &s.f, s.arr);
//    printf("%d %f %s\n",s.n, s.f, s.arr);
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

//
//#include <stdio.h>
//struct S{
//    int n;
//    float f;
//    char arr[20];
//};
//
//int main(void){
//    struct S s = {100, 3.14f, "zhangsan"};
//    char arr[30] = {0};
//
//    sprintf(arr,"%d %f %s",s.n, s.f, s.arr);
//    printf("%s\n",arr);
//
//    //从arr这个字符串中提取出格式化的数据
//    struct S t = {0};
//    sscanf(arr, "%d %f %s",&(t.n), &(t.f), t.arr);
//    printf("%d %f %s\n",t.n, t.f, t.arr);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void){
//    int arr[] = {1,2,3,4,5,6,7,};
//    FILE* pf = fopen("date.txt", "wb");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //写
//    fwrite(arr, sizeof(int), 7, pf);
//    //关闭
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main(void){
//    int arr[10] = {0,};
//    FILE* pf = fopen("date.txt", "rb");
//    if(pf == NULL){
//        perror("fopen");
//        return 1;
//    }
//    //读
//    fread(arr, sizeof(int), 7, pf);
//    //关闭
//    fclose(pf);
//    pf = NULL;
//
//    for(int i = 0;i<10;i++){
//        printf("%d\n",arr[i]);
//    }
//
//    return 0;
//}


#include <stdio.h>

int main(void){
    int arr[10] = {0};
    FILE * pf = fopen("date.txt", "r");
    if(pf == NULL){
        perror("fopen");
        return 1;
    }
    //读
    //定位文件指针
//    fseek(pf, -3, SEEK_END );
//    fseek(pf, 6, SEEK_SET );
    int ch = fgetc(pf);
    printf("%c\n", ch);

    fseek(pf, 5, SEEK_CUR);
    ch = fgetc(pf);
    printf("%c\n", ch); //g

    int pos = ftell(pf);    //当前指针相对于起始位置的偏移量
    printf("%d\n", pos);    //7

    rewind(pf);
    ch = fgetc(pf);
    printf("%c\n", ch);     //回到起始位置

    //关闭
    fclose(pf);
    pf = NULL;

    return 0;
}

//
//#include "stdio.h"
//
//int main(void)
//{
//    int ch = fgetc(stdin);
//    printf("%c\n",ch);
//
//    return 0;
//}