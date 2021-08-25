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
//     FILE *pf = fopen("test.txt", "r");
//     if (pf == NULL)
//     {
//         return 0;
//     }
//     fseek(pf, -2, SEEK_END);
//     int pos = ftell(pf);
//     printf("%d\n", pos);
//     fclose(pf);
//     rewind(pf);
//     pos = ftell(pf);
//     printf("%d\n",pos);
//     pf = NULL;

// int main()
// {
//     FILE* pf = fopen("test.txt","r");
//     if(pf == NULL)
//     {
//         return 0;
//     }
//     int ch = fgetc(pf);
//     printf("%d\n",ch);
//     fclose(pf);
//     pf =NULL;


// int main()
// {   
//     FILE* pf = fopen("test.txt","r");
//     if(pf == NULL)
//     {
//         perror("open file test.txt");
//         return 0;
//     }
//     int ch =0;
//     while((ch = fgetc(pf)) != EOF)
//     {
//         putchar(ch);
//     }
//     if ( ferror(pf))
//     {
//         printf("error\n");
//     }
//     else if ((feof(pf)))
//     {
//         printf("\nend of file\n");
//     }
//     fclose(pf);
//     pf = NULL;

int main()
{
    double a{5} = {1.0,2.0,3.0,4.0,5.0};
    double b =0.0;
    int ret_code =0;
    FILE* fp = fopen("test.txt","wb");
    fwrite(a,sizeof(*a),5,fp);
    fclose(fp);
    fp = fopen ( "test.txt","rb");
    while((ret_code = fread(&b,sizeof(double),1,fp)) >=1)
    {
        printf("%lf\n",b);
    }
    if(feof(fp))
    {
        printf("read test.txt successfully");
    }
    else if ( ferror(fp))
    {
        perror("Error reading test.txt");
    }
    fclose(fp);
    fp =NULL;

    return 0;
}