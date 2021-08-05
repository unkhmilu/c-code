#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// 实现冒泡排序
// void maopao(int arr[], int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz-1; i++)
//     {
//         int n = 0;
//         for (n = 0; n < sz -i - 1; n++)
//         {
//             if (arr[n] > arr[n + 1])
//             {
//                 int tem = arr[n + 1];
//                 arr[n + 1] = arr[n];
//                 arr[n] = tem;
//             }
//         }
//     }
// }

//初始化数组
// void init( int arr[] , int sz )
// {
//     int i = 0;
//     for( i = 0; i < sz ; i ++)
//     {
//         arr[i] = 0;
//     }
// }

// void print(int arr[] , int sz)
// {
//     int i = 0;
//     for( i = 0; i < sz ; i ++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// 把一个数组的元素倒置
// void reverse( int arr[] , int sz)
// {
//     int i = 0;
//     for( i = 0; i < sz/2 +1 ;i++)
//     {
//         int tem = arr[ sz - i - 1 ];
//         arr[ sz- i-1 ] = arr[i];
//         arr[i] = tem ;
//     }
// }

// 交换两个数组内容
// void change ( int arr1[], int arr2[], int sz)
// {
//     int i = 0;
//     for( i =0;i <sz;i++)
//     {
//         int tem = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = tem;
//     }
// }


int main()
{
    // int arr[] = { 1, 2 , ( 3, 4 ), 5 };
    // printf("%d\n", arr[2]);

    // char arr[] = "hello bit";
    // printf("%d %d\a", sizeof(arr), strlen(arr));

    // int i = 0;
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // maopao(arr, sz);
    // for (i = 0; i < sz; i++)
    // {
    //     printf("%d  ", arr[i]);
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int i = 0;
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // init( arr, sz);
    // print(arr,sz);
    // printf("\n");
    // reverse(arr,sz);
    // print(arr,sz);

    // int arr1[] = {1,3,5,7,9};
    // int arr2[] = {2,4,6,8,10};
    // int sz= sizeof(arr1)/sizeof(arr1[0]);
    // change(arr1,arr2,sz);
    // int n = 0;
    // for( n = 0; n <sz; n ++)
    // {
    //     printf("%d ", arr1[n]);
    // }
    // printf("\n");
    //     for( n = 0; n <sz; n ++)
    // {
    //     printf("%d ", arr2[n]);
    // }

    // int arr[]={1,2,3,4,5};
    // short*p = (short*) arr;
    // int i = 0;
    // for ( i = 0; i<4;i++)
    // {
    //     *(p+i)= 0;
    // }
    // for(i = 0; i<5 ;i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // int a = 0x11223344;
    // char *pc = (char*)&a;
    // *pc  = 0;
    // printf("%x\n",a);

    // int i ;
    // i --;
    // if( i > sizeof(i))
    // {
    //     printf(">\n");
    // }
    // if( i < sizeof(i))
    // {
    //     printf("<\n");
    // }


    return 0;

}