#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stddef.h>
#include <errno.h>
#include <windows.h>

// #define DEBUG
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         arr[i] = 0;
// #ifdef DEBUG
//         printf("%d\n", arr[i]);
// #endif
//     }

// #define DEBUG 0
// int main()
// {
// #if defined(DEBUG)
//     printf("hehe\n");
// #endif
//     return 0;
// }

// int main()
// {
// #if !defined(DEBUG)
//     printf("haha\n");
// #endif

// int main()
// {
//     #ifdef DEBUG
//     printf("haha\n");
//     #endif
//     return 0;
// }

// int main()
// {
//     #ifndef DEBUG
//     printf("haha\n");
//     #endif
//     return 0;
// }

// #ifndef __TEST_H__
// #define __TEST_H__
// int Add(int x, int y);
// #endif

// #pragma once
// int Add(int x, int y );

// struct S
// {
//     char c1;
//     int a ;
//     char c2;
// };
// #define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

// int main()
// {
//     printf("%d\n",OFFSETOF(struct S,c1));
//     printf("%d\n",OFFSETOF(struct S,a));
//     printf("%d\n",OFFSETOF(struct S,c2));
//     return 0;
// }

// int main()
// {
//     unsigned char puc[4];
//     struct tsgPim
//     {
//         unsigned char ucPim1;
//         unsigned char ucData0:1;
//         unsigned char ucData1:2;
//         unsigned char ucData2:3;
//     }*pstPimData;
//     pstPimData = ( struct tagPim*)puc;
//     memset(puc,0,4);
//     pstPimData->ucPim1 =2;
//     pstPimData->ucData0=3;
//     pstPimData->ucData1=4;
//     pstPimData->ucData2=5;
//     printf("%02x %02x %02x %02x\n",puc[0],puc[1],puc[2],puc[3]);
// }

int main()
{
    union
    {
        short k ;
        char i[2];
    }*s,a;
    s=&a;
    s->i[0]=0x39;
    s->i[1]=0x38;
    printf("%x\n",a.k);
    return 0;

}