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

// int main()
// {
//     int * p = (int*) calloc(10,sizeof(int ));
//     if(  p == NULL)
//     {
//         printf("%s\n",strerror(errno));
//     }
//     else
//     {
//         int i =0;
//         for(i=0;i<10;i++)
//         {
//             printf("%d ",*(p+1));
//         }
//     }
//     free(p);
//     p = NULL;

// int main()
// {
// int *p = (int *)malloc(20);
// if (p == NULL)
// {
//     printf("%s\n", strerror(errno));
// }

// else
// {
//     int i = 0;
//     for (i = 0; i < 5; i++)
//     {
//         *(p + i) = i;
//     }
// }

// int *p2 = realloc(p, 40);
// if (p2 == NULL)
// {
//     printf("追加失败\n");
// }
// else
// {
//     p = p2;
//     int i = 0;
//     for (i = 5; i < 10; i++)
//     {
//         *(p + i) = i;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", *(p + i));
//     }
// }
// free(p);
// p = NULL;
// int main()
// {
//     int * p = (int *) malloc ( 5* sizeof(int));
//     if(p == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         int i=0;
//         for(i=0;i<10;i++)
//         {
//             *(p+i)= i;
//         }
//     }
//     free(p);
//     p = NULL;

// int main()
// {
//     int a =10;
//     int * p =&a;
//     *p =20;
//     free(p);
//     p = NULL;

// int main()
// {
//     int * p = (int*)malloc(40);
//     ir(p == NULL)
//     {
//         return 0;
//     }
//     int i =0;
//     for(i =0 ; i< 10;i++)
//     {
//         *p++ =i;
//     }
//     free(p);
//     p = NULL;

// int main()
// {
//     int * p = (int *) malloc(40);
//     if(p == NULL)
//     {
//         return 0;
//     }
//     free(p);
//     // .........
//     free(p);

// int main()
// {
//     while(1)
//     {
//         malloc(1);
//     }

// char* getmemory(char* p)
// {
//     p = (char*) malloc (100);
//     return p;
// }

// void test(void)
// {
//     char* str = NULL;
//     str = getmemory(str);
//     strcpy(str,"hello world!");
//     printf(str);
//     free(str);
//     str = NULL;
// }

// int main()
// {
//     test();

// char* getmemory(void)
// {
//     char p [] = "hello world!";
//     return p;
// }

// void test(void)
// {
//     char * str = NULL;
//     str = getmemory();
//     printf(str);
// }

// int main()
// {  
//     test();

// void getmemory(char ** p,int num )
// {
//     *p = ( char*) malloc(num);
// }

// void test(void)
// {
//     char * str = NULL;
//     getmemory(&str,100);
//     strcpy(str,"hello");
//     printf(str);
// }
// int main()

void test(void)
{
    char* str  =(char*) malloc(100);
    strcpy(str,"hello");
    free(str);
    if(str != NULL)
    {
        strcpy(str,"world");
        printf(str);
    }
}
int main()
{
    test();
    return 0;
}