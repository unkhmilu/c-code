#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// struct s
// {
//     int a ;
//     char c ;
//     char arr[20];
//     double d;
// };

// struct t
// {
//     char ch [10];
//     struct s m;
//     char *pc;
// };

// typedef struct stu
// {
//     char name[20];
//     short age;
//     char tele[12];
//     char sex[5];
// }stu;

// void print1(stu tem )
// {
//     printf("name : %s\n " , tem.name);
// }

// void print2(stu *tem)
// {
//     printf(" name:  %s\n", tem ->name);
// }

// void mystrcpy(char *arr1, char *arr2)
// {
//     while (*arr2 != '\0')
//     {
//         *arr1 = *arr2;
//         arr2++;
//         arr1++;
//     }
//     *arr1 = *arr2;
// }

// void mystrcpy(char *arr1, char *arr2)
// {
//     while (*arr1++ = *arr2++)
//     {
//         ;
//     }
// }

// void mystrcpy(char *arr1, char *arr2)
// {
//     if (arr1 != NULL && arr2 != NULL)
//     {
//         while (*arr1++ = *arr2++)
//         {
//             ;
//         }
//     }
// }

// void mystrcpy(char *arr1, char *arr2)
// {
//     assert(arr1 != NULL);
//     assert(arr2 != NULL);
//     while (*arr1++ = *arr2++)
//     {
//         ;
//     }
// }


// void mystrcpy(char *arr1,const  char *arr2)
// {
//     assert(arr1 != NULL);
//     assert(arr2 != NULL);
//     while (*arr1++ = *arr2++)
//     {
//         ;
//     }
// }


char*  mystrcpy(char *arr1,const  char *arr2)
{   
    char * ret = arr1;
    assert(arr1 != NULL);
    assert(arr2 != NULL);
    while (*arr1++ = *arr2++)
    {
        ;
    }
    return ret;
}

int main()
{
    // struct t n = {"hehe", {100,'w',"hello world",3.14}, NULL};

    // stu s = {"李四" , 40  ,"12312312","男"};
    // print1(s);
    // print2(&s);

    char arr1[] = "########";
    char arr2[] = "bit ";
    // mystrcpy(arr1, arr2);
     printf("%s\n", mystrcpy(arr1,arr2));

    return 0;
}