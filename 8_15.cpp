#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// void left_move(char* arr, int k)
// {
//     assert(arr != NULL);
//     int i =0;

//     for(i=0;i<k;i++)
//     {
//         char tem = *arr;
//         int j =0;
//         int len = strlen(arr);
//         for( j=0;j<len-1;j++)
//         {
//             *(arr+j) = *(arr+ j+1);
//         }
//         *(arr +len -1) = tem;
//     }
// }

void reverse(char *left, char *right)
{
    while (left < right)
    {
        char tem = *left;
        *left = *right;
        *right = tem;
        left++;
        right--;
    }
}

void left_move(char *arr, int k)
{
    assert(arr != NULL);
    int len = strlen(arr);
    assert(k <= len);
    reverse(arr, arr + k - 1);       // 逆序左边
    reverse(arr + k, arr + len - 1); // 逆序右边
    reverse(arr, arr + len - 1);     // 逆序整体
}

int main()
{
    // unsigned char a =200;
    // unsigned char b =100;
    // unsigned char c =0;
    // c = a + b;
    // printf("%d %d",a+b,c);

    // unsigned int a = 0x1234;
    // unsigned char b = *(unsigned char*) &a;
    // printf("%d\n",b);

    // int arr[10][10] ={0};
    // int i = 0;
    // int j = 0;
    // for (i = 0; i < 10; i++)
    // {
    //     for (j = 0l; j <= i; j++)
    //     {
    //         if (j == 0)
    //         {
    //             arr[i][j] = 1;
    //         }
    //         if (i == j)
    //         {
    //             arr[i][j] = 1;
    //         }
    //         if (i >= 2 && j >= 1)
    //         {
    //             arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    //         }
    //     }
    // }

    // for( i =0;i< 10;i++)
    // {
    //     for( j  =0; j <=i;j++)
    //     {
    //         printf("%2d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int killer =0;
    // for( killer = 'a'; killer <='d'; killer ++)
    // {
    //     if( (killer !='a') + ( killer == 'c') + ( killer == 'd') + (killer != 'd' ) == 3)
    //     {
    //         printf("killer = %c", killer);
    //     }
    // }

    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;
    // int e = 0;
    // for (a = 1; a <= 5; a++)
    // {
    //     for (b = 1; b <= 5; b++)
    //     {
    //         for (c = 1; c <= 5; c++)
    //         {
    //             for (d = 1; d <= 5; d++)
    //             {
    //                 for (e = 1; e <= 5; e++)
    //                 {
    //                     if (
    //                         ((b == 2) + (a == 3) == 1) &&
    //                         ((b == 2) + (e == 4) == 1) &&
    //                         ((c == 1) + (d == 2) == 1) &&
    //                         ((c == 5) + (d == 3) == 1) &&
    //                         ((e == 4) + (a == 1) == 1))
    //                     {
    //                         if (a * b * c * d * e == 120)
    //                         {
    //                             printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }

    char arr[] = {0};
    scanf("%s", arr);
    int i = 0;
    scanf("%d", &i);
    left_move(arr, i);
    printf("%s\n", arr);

    return 0;
}