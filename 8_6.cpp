#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// 计算 二进制中有几个1
// int count(unsigned int a)
// {
//     int count;
//     int i = 0;
//     while (a)
//     {
//         if (a % 2 == 1)
//         {
//             count++;
//         }
//         a = a / 2;
//     }
//     return count;
// }
// int count(int n)
// {
//     int count;
//     int i = 0;
//     for (i = 0; i < 32; i++)
//     {
//         if (((n>>i) & 1) == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int count(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         n = (n & (n - 1));
//         count++;
//     }
//     return count;
// }

// 计算两个整型 二进制 不同位的个数
// int  differ(int a , int b )
// {
//     int count = 0;
//     int c =  a^b;
//     while(c)
//     {
//         c= c & (c-1);
//         count++;
//     }
//     return count;
// }

// 打印 整型 二进制奇数位 和 偶数位 的数
// void print(int m )
// {
//     int i = 0 ;
//     printf("奇数位");
//     for ( i = 30 ; i >= 0 ; i -= 2)
//     {
//         printf ( "%d ", (m>> i)&1 );
//     }
//     printf("\n");
//     printf("偶数位");
//     for ( i =31 ; i >=1 ; i -= 2)
//     {
//         printf("%d ", (m>> i ) & 1);
//     }
// }

// void print( int *p, int sz)
// {
//     int i = 0 ;
//     for( i =0; i < sz ; i ++)
//     {
//         printf("%d ", *(p+i));
//     }
// }\

// int mystrlen ( char arr[])
// {
//     if(*arr != '\0')
//     {
//         return 1+mystrlen(arr+1);
//     }
// }

// void reverse (char arr[])
// {
//     int left = 0;
//     int right = mystrlen(arr);
//     char tem = arr[left];
//     arr[left] = arr[right-1];
//     arr[right-1] = '\0';
//     if (mystrlen(arr+1)>=2)
//     {
//         reverse(arr+1);
//     }
//     arr[right-1] = tem;
// }

// void reverse(char arr[])
// {
//     int left = 0;
//     int right = strlen(arr) - 1;
//     if
// }

// int digsum(unsigned int a )
// {
//     int n = a % 10;
//     if(a > 9)
//     {
//         return n+ digsum(a/10);
//     }
//     else{
//         return a;
//     }
// }

double Pow(int a, int k)
{

    if (k > 0)
    {
        return a * Pow(a, k - 1);
    }
    else if (k == 0)
    {
        return 1;
    }
    else
    {
        return (1.0 / Pow(a, -k));
    }
}

int main()
{
    // int m = 0;
    // scanf("%d", &m);
    // print(m);

    // int a = 5;
    // int b = 4;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("%d %d", a,b);

    // int arr[10] = {1,2,3,4,5,6,7,8,9};
    // int sz = sizeof(arr)/ sizeof(arr[0]);
    // print(arr,sz);

    // char arr[] = "abcdef";
    // reverse(arr);

    // printf("%s\n", arr);

    // unsigned int a = 0;
    // scanf("%d", &a);
    // int b = digsum(a);
    // printf("%d", b);

    int a = 0;
    int k = 0;
    scanf("%d %d", &a, &k);
    double b = Pow(a, k);
    printf("%lf", b);

    return 0;
}
