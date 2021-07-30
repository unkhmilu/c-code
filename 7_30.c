#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

// void exchange1(int x, int y)
// {
//     int tep = x;
//     x = y;
//     y = tep;
// } //无用
// void exchange2(int *x, int *y)
// {
//     int tep = *x;
//     *x = *y;
//     *y = tep;
// }

// int get_max(int x, int y)
// {
//     int z = (x > y ? x : y);
// }

// int sushu(int x)
// {
//     int i = 0;
//     for (i = 2; i <= sqrt(x); i++)
//     {
//         if (x % i == 0)
//         {
//             return 0;
//             break;
//         }
//     }
//     return 1;
// }

// int year(int i)
// {
//     if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//     {
//         return 1;
//     }
//     else
//         return 0;
// }

// int search(int arr[], int x, int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] < x)
//         {
//             left = mid + 1;
//         }
//         else if (arr[mid] > x)
//         {
//             right = mid - 1;
//         }
//         else
//             return mid;
//     }
//     return -1;
// }

// void Add (  int* p )
// {
//     (*p )++;
// }



int main()
{
    // 交换两个整型的值
    // char arr[] = "hello world";
    // memset (arr , '*', 5);
    // printf("%s",arr);
    // int a = 10;
    // int b = 20;
    // exchange1 (a,b);
    // printf("%d %d\n", a,b);
    // exchange2 (&a,&b);
    // printf ("%d %d\n", a, b);

    //比较两个数的大小
    // int a = 10;
    // int b = 20;
    // int max = get_max (a,get_max(b,100));
    // printf("%d",max);

    //判断一个数是否是素数
    // int a = 0;
    // scanf("%d", &a);
    // sushu(a);
    // if(sushu(a) == 1)
    // {
    //     printf("是素数");
    // }
    // else
    // printf("不是素数");

    //打印1000~2000 之间的闰年
    // int a = 0;
    // int i = 0;
    // int count = 0;
    // for (i = 1000; i <= 2000; i++)
    // {
    //     if (1 == year(i))
    //     {
    //         printf("%d ", i);
    //         count++;
    //     }
    // }
    // printf("\n%d", count);

    //实现有序整型数组的二分查找
    // int left = 0;
    // int k = 7;
    // int mid = 0;
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // int right = sz - 1;
    // while (left <= right)
    // {
    //     mid = (left + right) / 2;
    //     if (arr[mid] < k)
    //     {
    //         left = mid + 1;
    //     }
    //     else if (arr[mid] > k)
    //     {
    //         right = mid - 1;
    //     }
    //     else
    //     {
    //         printf("找到了，下标是：%d", mid);
    //         break;
    //     }
    // }
    // if (left > right)
    // {
    //     printf("找不到");
    // }

    //实现有序整型数组的二分查找（通过函数查找）
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int a = 7;
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // int b = search(arr, a , sz);
    // if (b == -1)
    // {
    //     printf("找不到");
    // }
    // else
    // {
    //     printf("找到了，下标是：%d", b);
    // }

    //每次调用函数时，num +1
    // int num= 0;
    // Add(&num);
    // printf("num = %d\n " , num);

    //链式访问
    int len =0 ;
    len = strlen("abd");
    printf("%d\n", len);
    printf("%d\n", strlen("abc"));
    printf("%d", printf("%d",printf("%d", 43)));

}