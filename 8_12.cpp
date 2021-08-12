#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// int cmp_int(const void *e1, const void *e2)
// {
//     return *(int *)e1 - *(int *)e2;
// }

// void test1()
// {
//     int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     qsort(arr, sz, sizeof(arr[0]), cmp_int);
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// int cmp_float(const void * e1, const void * e2)
// {
//     return ((int)(*(float *)e1 - *(float *)e2));
// }

// void test2()
// {
//     float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
//     int sz = sizeof(f)/sizeof(f[0]);
//     qsort (f,sz,sizeof(f[0]),cmp_float);
//     int i =0;
//     for(i =0; i<sz;i++)
//     {
//         printf("%f ",f[i]);
//     }
// }
// struct stu
// {
//     char name[20];
//     int age;
// };

// int cmp_stu_by_age(const void *e1, const void *e2)
// {
//     return ((struct stu *)e1)->age - ((struct stu *)e2)->age;
// }
// int cmp_int(const void *e1, const void *e2)
// {
//     return *(int *)e1 - *(int *)e2;
// }

// int cmp_stu_by_name(const void *e1, const void *e2)
// {
//     return strcmp(((struct stu *)e1)->name, ((struct stu *)e2)->name);
// }

// void test3()
// {
//     struct stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
//     int sz = sizeof(s) / sizeof(s[0]);
//     qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//     int i =0;
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",s[i].age);
//     }
// }
// void test4()
// {
//     struct stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
//     int sz = sizeof(s) / sizeof(s[0]);
//     qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//     int i =0;
//     for(i=0;i<sz ;i++)
//     {
//         printf("%s ", s[i].name);
//     }
// }

// void Swap(char *buf1, char *buf2, int width)
// {
//     int i = 0;
//     for (i = 0; i < width; i++)
//     {
//         char tmp = *buf1;
//         *buf1 = *buf2;
//         *buf2 = tmp;
//         buf1++;
//         buf2++;
//     }
// }

// void bubble_sort(void *base, int sz, int width, int (*cmp)(const void *e1, const void *e2))
// {
//     int i = 0;
//     for (i = 0; i < sz - 1; i++)
//     {
//         int j = 0;
//         for (j = 0; j < sz - 1 - i; j++)
//         {
//             if (cmp((char *)base + j * width, (char *)base + (j + 1) * width) > 0)
//             {
//                 Swap((char *)base + j * width, (char *)base + (j + 1) * width, width);
//             }
//         }
//     }
// }

// void test5()
// {
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// void test6()
// {
//     struct stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
//     int sz = sizeof(s) / sizeof(s[0]);
//     bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", s[i].age);
//     }
// }

int main()
{
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();

    // int a[] = {1, 2, 3, 4};
    // printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(a + 0));
    // printf("%d\n", sizeof(*a));
    // printf("%d\n", sizeof(a + 1));
    // printf("%d\n", sizeof(a[1]));
    // printf("%d\n", sizeof(&a));
    // printf("%d\n", sizeof(*&a));
    // printf("%d\n", sizeof(&a + 1));
    // printf("%d\n", sizeof(&a[0]));
    // printf("%d\n", sizeof(&a[0] + 1));

    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr + 0));
    printf("%d\n", sizeof(*arr));
    printf("%d\n", sizeof(arr[1]));
    printf("%d\n", sizeof(&arr));
    printf("%d\n", sizeof(&arr + 1));
    printf("%d\n", sizeof(&arr[0] + 1));

    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%d\n", strlen(arr));
    printf("%d\n", strlen(arr + 0));
    printf("%d\n", strlen(*arr));
    printf("%d\n", strlen(arr[1]));
    printf("%d\n", strlen(&arr));
    printf("%d\n", strlen(&arr + 1));
    printf("%d\n", strlen(&arr[0] + 1));
}
