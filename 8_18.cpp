#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stddef.h>

// void *my_memove(void *dest, const void *src, size_t count)
// {
//     void* ret = dest;
//     assert(dest != NULL);
//     assert(src != NULL);
//     if (dest < src )
//     {
//前-> 后
//         while (count--)
//         {
//             *(char *)dest = *(char *)src;
//             dest = (char *)dest + 1;
//             src = (char *)src + 1;
//         }
//     }
//     else
//     {
// 后 -> 前
//         while (count--)
//         {
//             *((char *)dest + count) = *((char *)src + count);
//         }
//     }
//     return ret;
// }

// struct node
// {
//     int data;
//     struct node * next;
// };

// struct s1
// {
//     char c1;
//     int a;
//     char c2;
// };

// struct s2
// {
//     char c1;
//     char c2;
//     int a;
// };

// struct S3
// {
//     double d;
//     char c;
//     int i;
// };

// struct S4
// {
//     char c1;
//     struct S3 s3;
//     double d;
// };

// #pragma pack(4)
struct S
{
    char c;
    int i;
    double d;
};

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // my_memove(arr , arr+2, 20);
    // int i =0;
    // for(i =0;i<10;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }

    // char arr[] = "0";
    // memset(arr,"#",10);

    // struct s1 a1 = {0};
    // printf("%d\n", sizeof(a1));
    // struct s2 a2 = {0};
    // printf("%d\n", sizeof(a1));
    // struct S3 s3 = {0};
    // printf("%d\n", sizeof(s3));
    // struct S4 s4 = {0};
    // printf("%d\n", sizeof(s4));

    // struct S s;
    // printf("%d\n",sizeof(s));

    printf("%d\n",offsetof(struct S ,c));
    printf("%d\n",offsetof(struct S ,i));
    printf("%d\n",offsetof(struct S ,d));

    
    return 0;
}