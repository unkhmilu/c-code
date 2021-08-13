#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// struct test
// {
//     int num;
//     char *pcname;
//     short sdate;
//     char cha[2];
//     short sba[4];
// } * p;
//假设p 的值为0x100000。 如下表达式的值分别为多少
//已知，结构体test类型的变量大小是20字节

int main()
{
    // char arr[] = "abcdef";
    // printf("%d\n", sizeof(arr));
    // printf("%d\n", sizeof(arr + 0));
    // printf("%d\n", sizeof(*arr));
    // printf("%d\n", sizeof(arr[1]));
    // printf("%d\n", sizeof(&arr));
    // printf("%d\n", sizeof(&arr + 1));
    // printf("%d\n", sizeof(&arr[0] + 1));

    // char arr[] = "abcdef";
    // printf("%d\n", strlen(arr));
    // printf("%d\n", strlen(arr + 0));
    // printf("%d\n", strlen(*arr));
    // printf("%d\n", strlen(arr[1]));
    // printf("%d\n", strlen(&arr));
    // printf("%d\n", strlen(&arr + 1));
    // printf("%d\n", strlen(&arr[0] + 1));

    // char *p = "abcdef";
    // printf("%d\n", sizeof(p));
    // printf("%d\n", sizeof(p + 1));
    // printf("%d\n", sizeof(*p));
    // printf("%d\n", sizeof(p[0]));
    // printf("%d\n", sizeof(&p));
    // printf("%d\n", sizeof(&p + 1));
    // printf("%d\n", sizeof(&p[0] + 1));

    // char *p = "abcdef";
    // printf("%d\n", strlen(p));
    // printf("%d\n", strlen(p + 1));
    // printf("%d\n", strlen(*p));
    // printf("%d\n", strlen(p[0]));
    // printf("%d\n", strlen(&p));
    // printf("%d\n", strlen(&p + 1));
    // printf("%d\n", strlen(&p[0] + 1));

    // int a[3][4] = {0};
    // printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(a[0][0]));
    // printf("%d\n", sizeof(a[0]));
    // printf("%d\n", sizeof(a[0] + 1));
    // printf("%d\n", sizeof(*(a[0] + 1)));
    // printf("%d\n", sizeof(a + 1));
    // printf("%d\n", sizeof(*(a + 1)));
    // printf("%d\n", sizeof(&a[0] + 1));
    // printf("%d\n", sizeof(*(&a[0] + 1)));
    // printf("%d\n", sizeof(*a));
    // printf("%d\n", sizeof(a[3]));

    // int a[5] = {1,2,3,4,5};
    // int *ptr = (int*)(&a+1);
    // printf("%d,%d",*(a+1),*(ptr-1));

    // p = (struct test *)0x100000;
    // printf("%p\n", p + 0x1);
    // printf("%p\n", (unsigned long)p + 0x1);
    // printf("%p\n", (unsigned int *)p + 0x1);

    // int a[4]={1,2,3,4};
    // int * ptr1 = (int*)(&a+1);
    // int * ptr2 = (int*)((int)a+1);
    // printf("%x,%x",ptr1[-1],*ptr2);

    // int a[3][2] = { (0,1),(2,3),(4,5)};
    // int *p;
    // p = a[0];
    // printf("%d\n",p[0]);

    int a [5][5];
    int(*p)[4];
    p=a;
    printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);

    return 0;
}