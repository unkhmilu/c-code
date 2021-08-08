#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// int check_sys()
// {
//     int a = 1;
//     char *p = (char *)&a;
//     return *p;
// }

int check_sys()
{
    int a =1;
    return *(char*)&a;
}

int main()
{
    // int a = 1;
    // char * p = (char*) &a;
    // if(*p ==1)
    // {
    //     printf("小端\n");
    // }
    // else
    // printf("大端\n");

    // int ret = check_sys();
    // if (ret == 1)
    // {
    //     printf("小端\n");
    // }
    // else
    // {
    //     printf("大端\n");
    // }

    // char a =-1;
    // signed char b = -1;
    // unsigned char c = -1;
    // printf("a = %d,b=%d,c=%d", a,b,c);

    // char a = -128;
    // printf("%u\n", a);
    // char a =128;

    // int i = - 20;
    // unsigned int j = 10;
    // printf("%d\n", i +j);

    // unsigned int  i ;
    // for( i =9 ; i >=0 ; i--)
    // {
    //     printf("%u\n", i);
    // }

    // char a [1000];
    // int i;
    // for(i=0;i < 1000;i++)
    // {
    //     a[i] = -1-i;
    // }
    // printf("%d", strlen(a));

    unsigned char i =0;
    for(i = 0; i <= 255 ;i++)
    {
        printf("hehe");
    }

    return 0;
}

