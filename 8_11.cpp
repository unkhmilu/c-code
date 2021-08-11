#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// void test(int arr[])
// {}
// void test(int arr[10])
// {}
// void test(int* arr)
// {}
// void test2(int *arr[10])
// {}
// void test2(int ** arr)
// {}

// void test( int arr[3][5])
// {}
// void test(int arr[][5])
// {}
// void test( int (*arr)[5])
// {}
// void test(int* arr)
// {}
// void test (int ** arr)
// {}
// void test(int* arr[5])
// {}

// void test(int *p)
// {}

// void test(int **pp)
// {
// }

// void menu()
// {
//     printf("******************************\n");
//     printf("**** 1.sub        2.add   ****\n");
//     printf("**** 3.mul        4.div   ****\n");
//     printf("*****      0.exit      *******\n");
//     printf("******************************\n");
// }

// int Add(int x, int y)
// {

//     return x + y;
// }
// int Sub(int x, int y)
// {

//     return x - y;
// }

// int Mul(int x, int y)
// {

//     return x * y;
// }

// int Div(int x, int y)
// {

//     return x / y;
// }
// void calc(int (*pf)(int, int))
// {
//     int x =0;
//     int y=0;
//     printf("请输出两个操作数\n");
//     scanf("%d%d",&x,&y);
//     printf("%d\n",pf(x,y));
// }

void print(char* str)
{
    printf("hehe:%s",str);
}
void test (void (*p)(char*))
{
    printf("test\n");
    p("bit");
}

int main()
{
    // int arr1[10] = {0};
    // int * arr2[10] = {0};
    // test(arr1);
    // test2(arr2);

    // int arr[] = {0};
    // int * p = arr;
    // test(&arr);
    // test( p);

    // int n = 10;
    // int * p = &n;
    // int * pp = &p;
    // int * arr[5] = {0};
    // test ( pp);
    // test(&p);
    // test(arr);

    // int i =0;
    // for(i=0;i <4;i++)
    // {
    //     printf("%d\n",parr[i](2,3));
    // }

    // char* my_strcpy(char * dest, const char* src);
    // char (* pf) ( char* ,const char*);
    // char ( * pfarr[4])(char*,const char*)= {my_strcpy,my_strcpy,my_strcpy,my_strcpy};

    // int x = 0;
    // int y = 0;
    // int input = 0;
    // int (*pfarr[5])(int, int) = {0, Sub, Add, Mul, Div};
    // do
    // {
    //     menu();
    //     printf("请选择");
    //     scanf("%d", &input);
    //     if (input >= 1 && input <= 4)
    //     {
    //         printf("输入两个操作数");
    //         scanf("%d%d", &x, &y);
    //         int ret = pfarr[input](x, y);
    //         printf("%d\n",ret);
    //     }
    //     else if (input == 0)
    //     {
    //         printf("退出\n");
    //     }
    //     else
    //     {
    //         printf("输入错误\n");
    //     }
    // while(input);

    // int x = 0;
    // int y = 0;
    // int input =0;
    // do
    // {
    //     menu();
    //     printf("请选择");
    //     scanf("%d",&input);

    //     switch(input)
    //     {
    //         case 1:
    //             calc(Sub);
    //             break;
    //         case 2:
    //             calc(Add);
    //             break;
    //         case 3:
    //             calc(Mul);
    //             break;
    //         case 4:
    //             calc(Div);
    //             break;
    //         case 0:
    //             printf("退出\n");
    //             break;
    //         default:
    //         printf("选择错误\n");
    //     }
    // }while(input);

    // int (*pfarr[4])(int, int);
    // int (*(*ppfarr)[4])(int, int) = &pfarr;

    test(print);

    return 0;
}