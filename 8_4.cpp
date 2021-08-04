#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int mystrlen(char *arr)
{
    char *start = arr;
    char *end = arr;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}

int main()
{
    // int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
    // &arr[9] - &arr[0];
    // printf("%d\n",&arr[9] - &arr[0]);

    // char arr[] = "bit";
    // int len = mystrlen(arr);
    // printf("%d\n", len);

    // int a =5;
    // float values[a];
    // float* vp;
    // for( vp = &values[a- 1] ; vp >= &values[0]; vp -- )
    // {
    //     *vp = 0;
    // }

    // int arr[10];
    // printf("%d\n", arr);
    // printf("%d\n", &arr[0]);

    //二级指针
    // int a = 10;
    // int* pa = &a;
    // int** ppa = &pa;
    // **ppa = 20;
    // printf("%d", a);

    int a = 10;
    int b = 20;
    int c = 30;
    // int *pa = &a;
    // int *pb = &b;
    // int *pc = &c;
    int *arr[3] = {&a, &b, &c};
    int i = 0;
    for(i = 0; i < 3 ; i++)
    {
        printf("%d\n", *(arr[i]));
    }
    return 0;
}