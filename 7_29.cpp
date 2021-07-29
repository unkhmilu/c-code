#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// void menu()
// {
//     printf("####################################\n");
//     printf("#######  1.play      0 .exit    ####\n");
//     printf("####################################\n");
// }
// void game()
// {
//     int ret = rand()%100 +1;
//     int guess = 0;
//     while(1)
//     {
//         printf("请猜数字:>");
//         scanf("%d", &guess);
//         if ( guess > ret)
//         {
//             printf("猜大了\n");
//         }
//         else if ( guess < ret)
//         {
//             printf ("猜小了\n");
//         }
//         else
//         {
//             printf("猜对了\n");
//             break;
//         }
//     }
// } // 对应 猜数字

int main()
{
    // int a;
    // int b;
    // int c;
    // scanf("%d%d%d", &a, &b, &c);
    // a最大，b次之，c最小
    // 这里 要是输入 %d，%d，%d，那么后面输入的也要是1，2，3  要把 ， 带上

    // if (b > a)
    // {
    //    int tem = a;
    //    a = b;
    //    b = tem;
    // }
    // if (a < c)
    // {
    //    int tem = a;
    //    a = c;
    //    c = tem;
    // }
    // if (b < c)
    // {
    //    int tem = b;
    //    b = c;
    //    c = tem;
    // }
    // printf("%d%d%d\n", a, b, c);

    //    int i =0;
    //    for ( i = 1 ; i <= 100 ; i++)
    //    {
    //        if( i %3 == 0)
    //        {
    //            printf( "%d\n" , i );
    //        }
    //    } //打印1~100 之间所有3 的倍数的数字

    // int m = 0;
    // int n = 0;
    // int num;
    // scanf("%d%d", &m, &n);
    // if (m > n)
    // {
    //     while (num >0 )
    //     {
    //         num = m % n;
    //         m = n;
    //         n = num;
    //     }
    //     printf ("%d\n", n);
    // }
    // else
    // {
    //     while (num > 0 )
    //     {
    //         num = n % m;
    //         n= m;
    //         m = num;
    //     }
    //     printf ("%d\n", m);
    // }

    // int m = 0;
    // int n = 0;
    // int r = 0;
    // scanf("%d%d", &m, &n);
    // if (m > n && m != 0 && n != 0)
    // {
    //     while (m % n != 0)
    //     {
    //         r = m % n;
    //         m = n;
    //         n = r;
    //     }
    //     printf("%d\n", n);
    // }
    // else if (m < n && m != 0 && n != 0)
    // {
    //     int tem = m;
    //     m = n;
    //     n = tem;
    //     while (m % n != 0)
    //     {
    //         r = m % n;
    //         m = n;
    //         n = r;
    //     }
    //     printf("%d\n", n);
    // }
    // else if (m == 0 || n == 0)
    // {
    //     printf("0");
    // }
    // 求两个数 最大公因数
    // 辗转相除法

    // int year = 0;
    // int count = 0;
    // for (year = 1000; year <= 2000; year++)
    // {
    //     if (year % 4 == 0 && year % 100 != 0)
    //     {
    //         printf("%d ", year);
    //         count++;
    //     }
    //     else if (year % 400 == 0)
    //     {
    //         printf("%d ", year);
    //         count++;
    //     }
    // }
    // printf("\n总共有%d个闰年\n", count);       //计算1000~2000之间的闰年

    // int y = 0;
    // int c = 0;
    // for (y = 1000; y <= 2000; y++)
    // {
    //     if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    //     {
    //         printf("%d ", y);
    //         c++;
    //     }
    // }
    // printf("\n%d\n", c);      //计算1000~2000之间的闰年

    // int s = 0;
    // int i = 0;
    // int count=0;
    // for (s = 101; s <= 200; s+= 2)
    // {
    //     for (i = 2; i <= sqrt(s); i++) // 一个数如果能表示成 i = a *b ，那么a ,b 之中肯定有一个数 <= 开平方i
    //     {
    //         if (s % i == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if (i > sqrt(s*1.0))
    //         {
    //             printf("%d ", s);
    //             count++;
    //         }
    // }
    // printf("\n count=%d\n", count);
    // 试除法 求 100~200 之间的素数

    // int a = 0;
    // int b = 0;
    // for (a = 1; a <= 100; a++)
    // {
    //     if (a % 10 == 9)
    //     {
    //         b++;
    //     }
    //     if ( a / 10 == 9 )
    //     {
    //         b++;
    //     }
    // }
    // printf ("%d", b); // 计算1~100之间的数字9的个数

    // int a = 0;
    // double b = 0.0;
    // for (a = 1; a <= 100; a++)
    // {
    //     if (a % 2 == 0)
    //     {
    //         b = b - 1.0 / a;
    //     }
    //     else
    //     {
    //         b = b + 1.0 / a;
    //     }
    // }
    // printf("%lf", b);

    // int a = 0;
    // double b = 0.0;
    // int flag = 1;
    // for (a = 1; a <= 100; a++)
    // {
    //     b += flag* 1.0/ a;
    //     flag = -flag;
    // }
    // printf ( "%lf", b);

    // int a = 0;
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //  int max = arr[0];
    // int sz = sizeof(arr)/sizeof(arr[0]);
    // for (a = 1; a < sz; a++)
    // {
    //     if (max < arr[a])
    //     {
    //         max = arr[a];
    //     }
    // }
    // printf ("max = %d\n", max);

    // int a = 0;
    // int b = 0;
    // int c = 0;
    // for (a = 1; a < 10; a++)
    // {
    //     for (b = 1; b <=a; b++)
    //     {
    //         c = a * b;
    //         printf(" %d * %d = %2d ", a, b, c);
    //     }
    //     printf("\n");
    // } //九九乘法表

    // int a = 0;
    // int b = 0;
    // int arr[8] = {5, 6, 7, 8, 9, 10, 11, 12};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // int left = 0;
    // int right = sz - 1;
    // scanf("%d", &a);
    // while (left <=right)
    // {
    //     int mid = (left + right )/ 2;
    //     if (arr[mid] < a)
    //     {
    //         left = mid + 1;
    //     }
    //     else if (arr[mid] > a)
    //     {
    //         right = mid - 1;
    //     }
    //     else if (arr[mid] == a)
    //     {
    //         printf("找到了，下标是：%d", mid);
    //         break;
    //     }
    // }
    // if (left > right)
    // {
    //     printf("找不到");
    // }

    //猜数字
    // int input = 0;
    // srand((unsigned int)time(NULL)); //播种由函数 rand 使用的随机数发生器
    //拿时间戳来设置随机数的生成起始点
    //时间戳 --  当前计算机时间 - 计算机的起始时间（1970.1.1.0:0:0) = (xxx)秒
    // do
    // {
    //     menu();
    //     printf("请选择 >:");
    //     scanf("%d", &input);
    //     switch (input)
    //     {
    //     case 1:
    //         game();
    //         break;
    //     case 0:
    //         printf("退出游戏\n");
    //         break;
    //     default:
    //         printf("选择错误\n");
    //         break;
    //     }
    // } while (input);

    char input[20] = {0};
    system("shutdown -s -t 60");
    again:
    printf("请注意。你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
    scanf("%s", input);
    if (strcmp(input, "我是猪 == 0"))
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}

