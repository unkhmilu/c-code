#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// void reverse(char *arr)
// {
//     int sz = strlen(arr);
//     char *left = arr;
//     char *right = arr + sz - 1;
//     while (left < right)
//     {
//         char tem = *left;
//         *left = *right;
//         *right = tem;
//         left++;
//         right--;
//     }
// }

void move(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right ) 
    {
        //从左边找一个奇数
        while ((left < right ) &&(arr[left] % 2 == 1))
        {
            left++;
        }
        //从右边找一个偶数
        while ((left < right ) &&(arr[right] % 2 == 0))
        {
            right--;
        }
        if (left < right)
        {
            int tem = arr[left];
            arr[left] = arr[right];
            arr[right] = tem;
        }
    }
}

int main()
{
    // int aa [2][5] = {1,2,3,4,5,6,7,8,9,10};
    // int* ptr1 = (int*)(&aa+1);
    // int* ptr2 = (int*)(*(aa+1));
    // printf("%d,%d",*(ptr1-1),*(ptr2-1));

    // char* a[]= {"work","at","alibaba"};
    // char**pa =a;
    // pa++;
    // printf("%s\n",*pa);

    // char *c[] = {"enter", "new", "point", "first"};
    // char **cp[] = {c + 3, c + 2, c + 1, c};
    // char ***cpp = cp;
    // printf("%s\n", **++cpp);
    // printf("%s\n", *--*++cpp + 3);
    // printf("%s\n", *cpp[-2] + 3);
    // printf("%s\n", cpp[-1][-1] + 1);

    // unsigned long pularr[] = {6,7,8,9,10};
    // unsigned long* pulptr;
    // pulptr = pularr;
    // *(pulptr +3 ) += 3;
    // printf("%d,%d",*pulptr,*(pulptr +3));

    // char arr[256] = {0};
    //scanf("%s",arr);
    // gets(arr);
    // reverse(arr);
    // printf("%s\n", arr);

    // int a =0;
    // int b =0;
    // int i =0;
    // int sum = 0;
    // scanf("%d%d",&a,&b);
    // for(a=0;a<=b;a++)
    // {
    //     i = i *10 +a ;
    //     sum += i ;
    // }
    // printf("%d",sum);

    // int i = 0;
    // for( i= 0; i < 100000;i++)
    // {
    //     int n = 1;
    //     int a = i;
    //     int sum=0;
    //     while(a /= 10)
    //     {
    //         n++;
    //     }
    //     a =i;
    //     while(a)
    //     {
    //         sum += pow( a % 10 , n);
    //         a /= 10;
    //     }
    //     if( i == sum )
    //     {
    //         printf("%d ",i);
    //     }
    // }

    // int line = 0;
    // scanf("%d",&line);
    // int i =0;
    // for( i =0; i<line;i++)
    // {
    //     int j =0;
    //     for ( j =0;j< line -1 -i ; j ++)
    //     {
    //         printf(" ");
    //     }
    //     for ( j =0; j< 2*i +1;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(i =0; i< line -1 ;i++)
    // {
    //     int j = 0;
    //     for ( j =0; j < i+1;j++)
    //     {
    //         printf(" ");
    //     }
    //     for ( j=0; j< 2*(line -1-i) -1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int money =0;
    // int total =0;
    // int empty =0;
    // scanf ("%d",&money);
    //方法1
    // if( money !=0)
    // {
    //     total = 2*money -1;
    // }
    // else
    //     total =0;
    // printf("%d",total);
    //方法2
    // total = money;
    // empty = money;
    // while(empty >=2)
    // {
    //     total += empty /2;
    //     empty = empty /2 + empty %2 ;
    // }
    // printf("%d",total);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    move(arr, sz);

    return 0;
}
