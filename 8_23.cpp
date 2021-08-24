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
// FILE *fopen(const char *filename, const char *mode);
// int fclose(FILE * stream);

// FILE* pf = fopen("text.txt","r");
// if(pf == NULL)
// {
//     printf("%s\n",sterror(errno));
//     return 0;
// }
// fclose(pf);
// pf ==NULL;

// FILE *pfWrite = fopen("test.txt", "w");
// if (pfWrite == NULL)
// {
//     printf("%s\n", strerror(errno));
//     return 0;
// }
// fputc('b', pfWrite);
// fputc('i', pfWrite);
// fputc('t', pfWrite);
// fclose(pfWrite);
// pfWrite = NULL;

// FILE *pfRead = fopen("test.txt", "r");
// if (pfRead == NULL)
// {
//     printf("%s\n", strerror(errno));
//     return 0;
// }
// printf("%c\n", fgetc(pfRead));
// printf("%c\n", fgetc(pfRead));
// printf("%c\n", fgetc(pfRead));
// fclose(pfRead);
// pfRead = NULL;
// int main()
// {
//     int ch = fgetc(stdin);
//     fputc(ch, stdout);

// int main()
// {

//     char buf[1024] = {0};
//     FILE *pf = fopen("text.txt", "r");
//     if (pf == NULL)
//     {
//         return 0;
//     }
//     fgets(buf, 1024, pf);
//     printf("%s", buf);
//     fclose(pf);
//     pf = NULL;

// int main()
// {
// char buf[1024] = {0};
// fgets(buf,1024,stdin);
// fputs(buf,stdout);

// int main()
// {
//     char buf [1024] ={0};
//     gets(buf);
//     puts(buf);

// struct S
// {
//     int n;
//     float score;
//     char arr[10];
// };

// int main()
// {
//     struct S s = {100, 3.14f, "bit"};
//     FILE *pf = fopen("test.txt", "w");
//     if (pf == NULL)
//     {
//         return 0;
//     }
//     fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }

struct S
{
    int n;
    float score;
    char arr[10];
};

int main()
{
    struct S s = {0};
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        return 0;
    }
    fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
    printf("%d %f %s", s.n, s.score, s.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}