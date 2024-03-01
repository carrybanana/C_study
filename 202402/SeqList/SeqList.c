//
// Created by CarryBanana on 24-2-28.
//

#include "SeqList.h"

//初始化顺序表
void SLInit(SL *ps) {
    ps->a = NULL;
    ps->size = ps->capacity = 0;
}


//销毁顺序表
void SLDestory(SL *ps) {
    if (ps->a) {
        free(ps->a);
        ps->a = NULL;
    }
    ps->size = ps->capacity = 0;
}

//检查空间是否足够,不够则扩容
void SLCheckCapacity(SL *ps) {
    if (ps->size == ps->capacity) {
        size_t newCapcity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        SLDataType *tmp = (SLDataType *) realloc(ps->a, newCapcity * sizeof(SLDataType));
        if (tmp == NULL) {
            perror("realloc fail!\n");
            return ;
        }
        ps->a = tmp;
        ps->capacity = newCapcity;
    }
}

//尾插
void SLPushBack(SL *ps, SLDataType x) {
    assert(ps); //断言是一种暴力的方式
    // if(ps == NULL) {
    //     return;
    // }

    //1 空间足够，直接尾插

    //2 空间不够，扩容
    SLCheckCapacity(ps);
    //扩容后直接charity数据
    ps->a[ps->size++] = x;
}

//头插
void SLPushFront(SL *ps, SLDataType x) {
    assert(ps);
    //判断空间是否足够,不够则扩容
    SLCheckCapacity(ps);
    //空间足够，历史数据后移
    for (size_t i = ps->size; i > 0; i--) {
        ps->a[i] = ps->a[i - 1];
    }
    ps->a[0] = x;
    ps->size++;
}

//尾删
void SLPopBack(SL *ps) {
    //断言
    assert(ps);
    //判断顺序表是否为空
    assert(!SLIsEmpty(ps));
    ps->size--;
}

//头删
void SLPopFront(SL *ps) {
    //断言
    assert(ps);
    //判断顺序表是否为空
    assert(!SLIsEmpty(ps));
    //数据前移
    for (size_t i = 0; i < ps->size - 1; i++) {
        ps->a[i] = ps->a[i + 1];
    }
    ps->size--;
}

// //打印顺序表
// void SLPrint(SL *ps) {
//     for (size_t i = 0; i < ps->size; i++) {
//         printf("%zd ", ps->a[i]);
//     }
//     printf("\n");
// }

bool SLIsEmpty(SL *ps) {
    assert(ps);
    //判断空间是否足够
    return ps->size == 0;
}

//在任意位置插入删除
//在指定的位置之前插入数据
void SLInsert(SL *ps, int pos, SLDataType x) {
    assert(ps);
    //对pos进行限制
    assert(pos>=0 && pos <= ps->size);
    //扩容
    SLCheckCapacity(ps);
    //把pos位置及以后的数据往后挪一位
    for (size_t i = ps->size; i > pos; i--) {
        ps->a[i] = ps->a[i - 1];
    }
    ps->a[pos] = x;
    ps->size++;
}

//删除指定位置的数据
void SLErase(SL *ps, int pos) {
    assert(ps);
    //对pos进行限制
    assert(pos>=0 && pos < ps->size);
    assert(!SLIsEmpty(ps));
    for (size_t i = pos; i < ps->size - 1; i++) {
        ps->a[i] = ps->a[i + 1];
    }
    ps->size--;
}
//
// //查找数据是否存在
// bool SLFind(SL *ps, SLDataType x) {
//     assert(ps);
//     for (size_t i = 0; i < ps->size; i++) {
//         if (ps->a.[i] == x) {
//             //找到了
//             // printf("find:%zd",i);
//             return true;
//         }
//     }
//     return false;
// }
