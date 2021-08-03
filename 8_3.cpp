#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// int fun()
// {
//     static int count = 1;
//     return ++count;
// }

int* test()
{
    int a =10;
    return &a ;
}


int main()
{
        // int i = 0, a = 0, b = 2, c = 3, d = 4;
    // i = a++ && ++b && d++;
    //i = a++ || ++b || d++;
    // printf("a = %d\n  b = %d\n  c = %d  d= %d", a, b, c, d);

    // int a = 1;
    // int b = 2;
    // int c = ( a > b , a = b+ 10, a,  b = a +1 );
    // printf("%d", c );

    // 整型提升
    // char a = 3;
    // char b = 127;
    // char c = a + b ;
    // printf("%d\n", c);

    // 整型提升
    // char a = 0xb6;
    // short b = 0xb600;
    // int c = 0xb6000000;
    // if ( a == 0xb6)
    //     printf("a");
    // if( b == 0xb600)
    //     printf("b");
    // if(c == 0xb6000000)
    //     printf("c");

    // 整型提升
    // char c =1;
    // printf("%u\n", sizeof(c));
    // printf("%u\n", sizeof(+c));
    // printf("%u\n", sizeof(!c));

    // 错误代码
    // int answer;
    // answer = fun() - fun() * fun ();
    // printf("%d\n", answer);
    
    // 错误代码
    // int i = 1;
    // int a = (++i ) + ( ++i ) + ( ++ i);
    // printf("%d\n",a );

    // 指针 +- 整数
    // int a = 0x11223344;
    // int* pa = & a ;
    // char * pc = &a;
    // printf("%p\n", pa);
    // printf("%p\n", pa +1 );
    // printf("%p\n", pc);
    // printf("%p\n", pc+1);

    // 把arr 里面存储的数字 改成1
    // int arr[10] = {0};
    // int* p = &arr;
    // int i = 0;
    // for( i = 0 ; i < 10 ; i++)
    // {
    //     *(p+i ) = 1;
    // }
    // printf("%d\n", arr[1]);

    // 指针未初始化
    // int *p ;
    // *p = 20;
    
    // 指针越界访问
    // int arr[10]={0};
    // int *p = arr;
    // int i = 0;
    // for(i =0 ; i < 12 ; i ++)
    // {
    //     p++;
    // }
   
   // 指针指向的空间被释放
    int *p = test();
     *p = 20;

    return 0;
}

