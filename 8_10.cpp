#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void print(int (*p)[5], int x, int y)
{
    int i = 0;
    for (i = 0; i < x; i++)
    {
        int j = 0;
        for (j = 0; j < y; j++)
        {
            printf("%d", *(*(p + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    // int n = 0;
    // float *pfloat =(float*) &n;
    // printf("n 的值为 ：%d\n", n);
    // printf("*pfloat的值为：%f\n",*pfloat);

    // *pfloat = 9.0;
    // printf("num的值为：%d\n",n);
    // printf("*pfloat的值为：%lf\n",*pfloat);

    // char arr1[] = "abcdef";
    // char arr2[] = "abcdef";
    // char* p1 = "abcdef";
    // char * p2 = "abcdef";

    // if( p1 == p2)
    // {
    //     printf("haha\n");
    // }
    // else
    // printf("heeeee\n");
    // if(arr1 ==arr2)
    // {
    //     printf("dadada\n");
    // }
    // else
    // printf("dawsw\n");

    // int a =10;
    // int b =20;
    // int c = 30;
    // int d = 40;
    // int *arr[4] = {&a,&b,&c,&d};
    // int i =0;
    // for(i =0;i <4;i++)
    // {
    //     printf("%d\n",*(arr[i]));
    // }

    // int arr1[] = {1,2,3,4,5};
    // int arr2[] = {2,3,4,5,6};
    // int arr3[] = {3,4,5,6,7};
    // int * parr[] ={arr1,arr2,arr3};
    // int i = 0;
    // for(i = 0;i < 3;i++)
    // {
    //     int j =0;
    //     for ( j =0;j<5;j++)
    //     {
    //         printf("%d",*(parr[i]+ j ));
    //     }
    //     printf("\n");
    // }

    // int arr[10] = {1,2,4,5,6,7,8,9,10};
    // int (*p)[10] = &arr;
    // printf("%d\n", p);
    // printf("%d\n", p+1);

    int arr[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};
    print(arr, 3, 5);

    return 0;
}
