#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

// void print ( int n )
// {
//     if(n > 9 )
//     {
//         print(n/10);
//     }
//     printf("%d     ",  n %10);
// }

// int my_strlen (char* str)
// {
//     int count;
//     while ( *str != '\0')
//    {
//        count ++;
//        str ++;
//    }
//    return count;
// }

// int my_strlen(char* str)
// {
//     if ( *str != '\0')
//     {
//         return 1+ my_strlen(str+1);
//     }
// }

// int fac( int n )
// {
//     if ( n <=1 )
//     {
//         return 1;
//     }
//     else
//         return n*fac(n-1);
// }

// int fib ( int n )
// {
//     if ( n <=2 )
//     {
//         return 1;
//     }
//     else
//     {
//         int a =fib( n -1) + fib ( n -2 );
//         return a ;
//     }
// }

// int fib(int  n )
// {
//     int a = 1;
//     int b = 1;
//     int c =1 ;
//     while( n > 2)
//     {
//         c = a+b;
//         a = b;
//         b = c;
//         n-- ;
//     }
//     return c ;
// }

// void bubble_sort(int arr[], int sz)
// {
//     int i = 0;
//     int n = 0;
//     for (n = 0; n < sz - 1; n++)
//     {
//         int flag = 1; 
//         for (i = 0; i < sz - n - 1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int tmp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = tmp;
//                 flag = 0;
//             }
//         }
//         if ( flag == 1)
//         {
//             break;
//         }
//     }
// }



int main()
{
    // unsigned int num =0;
    // scanf ("%d", &num);
    // print(num);

    // char arr[] = "bit";
    // int len = my_strlen(arr);
    // printf("len = %d" , len );

    // int n =0;
    // int ret =0;
    // scanf("%d", &n);
    // ret = fac (n);
    // printf("%d\n", ret);

    // int n = 0;
    // scanf("%d", &n );
    // int ret = fib(n);
    // printf("ret =%d\n", ret);

    // int arr[10] = { 1,2,3,4};
    // char arr2[5] = {'a','b'}; // 第三个 0 是默认的 0
    // char arr3[5] = "ab"; // 第三个 0 是'\0'
    //不完全初始化剩下的元素默认为0
    // char arr[] = "abcdef"; // 没有确定大小通过输入的内容来判断，这里最大下标为6，因为有一个'\0'

    // int arr[]= {1,2,3,4,5,6,7,8};
    // int  i = 0;
    // for ( i =0 ; i <= 7; i ++ )
    // {
    //     printf("&arr[%d] = %p\n ", i , &arr[i]);
    // }
    
    // int arr[3][4] = {{1,2,3},{4,5}};
    // int i = 0;
    // for( i =0;i <3 ;i++)
    // {
    //     int j =0;
    //     for ( j =0; j < 4; j++)
    //     {
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // int a = 0;
    // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // bubble_sort(arr, sz);
    // for (a = 0; a < sz; a++)
    // {
    //     printf("%d", arr[a]);
    // }


    return 0;
}