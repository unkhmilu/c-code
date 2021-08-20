#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stddef.h>

// struct S
// {
//     int a;
//     char c;
//     double d;
// };

// void init(struct S *ps)
// {
//     ps->a = 100;
//     ps->c = 'w';
//     ps->d = 3.14;
// }

// void print1(struct S *ps)
// {
//     printf("%d %c %lf\n", ps->a, ps->c, ps->d);
// }

// void print2(struct S temp)
// {
//     printf("%d %c %lf\n", ps->a, ps->c, ps->d);
// }

// struct S
// {
//     int a:2;
//     int b:5;
//     int c:10;
//     int d:30;
// };

// enum Day
// {
//     Mon,
//     Tues,
//     Wed,
//     Thur,
//     Fri,
//     Sat,
//     Sun,
// };

// union Un
// {
//     char c;
//     int i;
// };

// int check_sys()
// {
//     int a =1;
//     return *(char*)&a;
// }

// int check_sys()
// {
//     union Un
//     {
//         char c ;
//         int i ;
//     }u;
//     u.i =1;
//     return u.c;
// }

union Un
{
    int a ;
    char arr[5];

};

int main()
{
    // struct S s = {0};
    // init(&s);
    // print1(&s);
    // print2(s);
    // struct S s;
    // printf("%d\n",sizeof(s));

    // enum Day d = Mon;

    // union Un u;
    // printf("%d\n", sizeof(u));
    // printf("%p\n", &u);
    // printf("%p\n", &(u.c));
    // printf("%p\n", &(u.i));

    // int ret = check_sys();
    // if(1== ret)
    // {
    //     printf("Ð¡¶Ë\n");
    // }
    // else
    // printf("´ó¶Ë\n");
    
    union Un u;
    printf("%d\n",sizeof(u));
    
    return 0;
}