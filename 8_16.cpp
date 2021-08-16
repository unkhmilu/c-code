#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// int is_left_move(char *str1, char *str2)
// {
//     int len = strlen(str1);
//     int len2 = strlen(str2);
//     if (len != len2)
//         return 0;
//     strncat(str1, str2, len);
//     char *ret = strstr(str1, str2);
//     if (ret == NULL)
//     {
//         return 0;
//     }
//     else
//         return 1;
// }

// int findnum(int arr[3][3], int k, int *px, int *py)
// {
//     int x = 0;
//     int y = *py - 1;
//     while (y >= 0 && x <= *px - 1)
//     {
//         if (arr[x][y] > k)
//         {
//             y--;
//         }
//         else if (arr[x][y] < k)

//         {
//             x++;
//         }
//         else
//         {
//             *py = y;
//             *px = x;
//             return 1;
//         }
//     }
//     return 0;
// }

// int my_strlen(const char *str)
// {
//     int count = 0;
//     assert(str != NULL);
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// char *my_strcpy(char *dest, const char *src)
// {
//     assert(dest != NULL);
//     assert(src != NULL);
//     char *ret = dest;
// 拷贝src 指向的字符串到dest 的空间，包含 '\0'
//     while (*dest++ = *src++)
//     {
//         ;
//     }
// 返回目的空间的起始地址
//     return ret;
// }

// char * my_strcat ( char * arr, const char* arr2)
// {
//     char * ret = arr;
//     assert(arr && arr2);
//     while(*arr)
//     {
//         arr++;
//     }
//     while(*arr++ = *arr2 ++)
//     {
//         ;
//     }
//     return ret;

// }

int my_strcmp(char *str1, const char *str2)
{
    assert(str1 && str2);
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main()
{
    // char arr1[] = "abcdef";
    // char arr2[] = "bcdefa";
    // int ret = is_left_move(arr1, arr2);
    // if (ret == 1)
    // {
    //     printf("YES\n");
    // }
    // else
    // {
    //     printf("NO\n");
    // }

    // int arr[3][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int k = 7;
    // int x = 3;
    // int y = 3;
    // int ret = findnum(arr, k, &x, &y);
    // if (ret == 1)
    // {
    //     printf("找到了\n");
    //     printf("下标是： %d  %d\n", x,y);
    // }
    // else
    //     printf("找不到\n");

    // if (strlen("ada") - strlen( "ssssss") > 0)
    // {
    //     printf("hehe\n");
    // }
    // else{
    //     printf("haha\n");
    // }

    // char arr1[] = "aaaasdasda";
    // char arr2[] = "dasd";
    // my_strcpy(arr1, arr2);
    // printf("%s\n", my_strcpy(arr1, arr2));
    // printf("%s\n", arr1);

    // char arr[30] = "hello";
    // char arr2[] = " world";
    // my_strcat( arr,arr2);
    // printf("%s\n",arr);

    char *p1 = "ada";
    char *p2 = "wda";
    int ret = my_strcmp(p1, p2);
    printf("%d\n", ret);

    return 0;
}