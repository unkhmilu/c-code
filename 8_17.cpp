#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// char *my_strstr(const char *p1, const char *p2)
// {
//     assert(p1 != NULL);
//     assert(p2 != NULL);
//     char *s1 = p1;
//     char *s2 = p2;
//     char *cur = (char*)p1;

//     if (*p2 == '\0')
//     {
//         return p1;
//     }
//     while (*cur)
//     {
//         s1 = cur;
//         s2 = (char*)p2;
//         while ( *s1  && *s2 && (*s1 == *s2))
//         {
//             s1++;
//             s2++;
//         }
//         if (*s2 == '\0')
//         {
//             return cur;
//         }

//         cur++;
//     }
//     return NULL;
// }

void *my_memcpy(void* dest, const void* arr2, size_t num)
{
    void *ret = dest;
    assert(dest != NULL);
    assert(arr2 != NULL);
    while (num--)
    {
        *(char *)dest = *(char *)arr2;
        ++(char*)dest;
        ++(char*)arr2;
    }
    return ret;
}


int main()
{
    // char *p1 = "abcdefddd";
    // char *p2 = "def";
    // char *ret = my_strstr(p1, p2);
    // if (ret == NULL)
    // {
    //     printf("×Ó´®²»´æÔÚ\n");
    // }
    // else
    // {
    //     printf("%s\n", ret);
    // }

    // char arr[]  = "adasda@asdasd.ccc";
    // char* p = "@.";
    // char buf[22222] = {0};
    // strcpy( buf ,arr);
    // char * ret = NULL;
    // for( ret = strtok(buf,p) ;  ret != NULL  ; ret = strtok(NULL,p))
    // {
    //     printf("%s\n",ret);
    // }

    // FILE * pf = fopen("text.txt","r");
    // if(pf == NULL)
    // {
    //     printf("%s\n",strerror(errno));
    // }
    // else
    // {
    //     printf("open file success\n");
    // }

    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[5] = {0};
    // memcpy(arr2, arr1, sizeof(arr1));

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5] = {0};
    my_memcpy(arr2, arr1, sizeof(arr1));
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}