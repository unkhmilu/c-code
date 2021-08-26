#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stddef.h>
#include <errno.h>
#include <windows.h>

// #define MAX 100
// #define STR "hehe"
// #define reg register
// #define do_forever for(;;)
// int main()
// {
//     do_forever;
//     printf("%d\n",MAX);
//     printf("%s\n",STR);
//     reg int a ;  == register int a;

// #define SQUARE(X) X*X
// int main()
// {
//     int ret = SQUARE(5);
//     printf("ret = %d\n",ret);

// #define DOUBLE(X) X+X
// int main()
// {
//     int a =5;
//     int ret = 10 * DOUBLE(a);
//     printf("%d\n",ret);

// #define PRINT(X) printf("the value of " #X " is %d\n",X)
// int main()
// {
//     int a =10;
//     int b =20;
//     PRINT(a);
//     PRINT(b);

// #define CAT(X,Y) X##Y
// int main()
// {
//     int a84 = 2019;
//     printf("%d\n",CAT(a,84));

// #define MAX(X,Y) ((X)>(Y)?(X):(Y))
// int main()
// {
//     int a =10;
//     int b = 11;
//     int max = MAX(a++,b++);
//     int max = ((a++)>(b++)?(a++):(b++));
//     printf("%d\n",max);
//     printf("%d\n",a);
//     printf("%d\n",b);
s
// #define SIZEOF(type) sizeof(type)
// int main()
// {
//     int ret = SIZEOF(int);
//     printf("%d\n",ret);

// #define MALLOC(num,type) (type*)malloc(num*sizeof(type))
// int main()
// {
//     int* p = MALLOC(10,int);

#define MAX 100
int main()
{
    printf("%d\n", MAX);
#undef;
    printf("%d\n", MAX);
    return 0;
}