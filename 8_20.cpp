#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stddef.h>
#include <errno.h>

// enum option
// {
//     EXIT,
//     add,
//     del,
//     search,
//     modify,
//     show,
//     sort,
// };

// enum num
// {
//     MAX = 1000,
//     MAX_NAME = 20,
//     MAX_TELE = 12,
//     MAX_SEX = 5,
//     MAX_ADDR = 30,
// };

// struct PeoInfo
// {
//     char name[MAX_NAME];
//     int age;
//     char sex[MAX_SEX];
//     char tele[MAX_TELE];
//     char addr[MAX_ADDR];
// };

// //通讯录类型
// struct Contact
// {
//     struct PeoInfo data[MAX]; // 存放一个信息
//     int size;                 //记录当前已经有的元素个数
// };

// void menu()
// {
//     printf("###########################################\n");
//     printf("#######1.add             2.del    #########\n");
//     printf("#######3.search          4.modify #########\n");
//     printf("#######5.show            6.sort   #########\n");
//     printf("#######0.exit                     #########\n");
//     printf("###########################################\n");
// }

// void initcontact(struct Contact *ps)
// {
//     memset(ps->data, 0, sizeof(ps->data));
//     ps->size = 0;
// }

// void addcontact(struct Contact *ps)
// {
//     if (ps->size == MAX)
//     {
//         printf("通讯录已满,无法增加\n");
//     }
//     else
//     {
//         printf("请输入名字\n");
//         scanf("%s", ps->data[ps->size].name);
//         printf("请输入年龄\n");
//         scanf("%d", &(ps->data[ps->size].age));
//         printf("请输入性别\n");
//         scanf("%s", ps->data[ps->size].sex);
//         printf("请输入电话\n");
//         scanf("%s", ps->data[ps->size].tele);
//         printf("请输入住址\n");
//         scanf("%s", ps->data[ps->size].addr);
//         (ps->size)++;
//         printf("添加成功\n");
//     }
// }

// void showcontact(const struct Contact *ps)
// {
//     if (ps->size == 0)
//     {
//         printf("通讯录为空\n");
//     }
//     else
//     {
//         int i = 0;
//         printf("%20s\t %4s\t %5s\t %12s\t %20s\t\n", "名字", "年龄", "性别", "电话", "住址");
//         for (i = 0; i < ps->size; i++)
//         {
//             printf("%20s\t %4d\t %5s\t %12s\t %20s\t\n",
//                    ps->data[i].name,
//                    ps->data[i].age,
//                    ps->data[i].sex,
//                    ps->data[i].tele,
//                    ps->data[i].addr);
//         }
//     }
// }

// static int findbyname(const struct Contact *ps, char name[MAX_NAME])
// {
//     int i = 0;
//     for (i = 0; i < ps->size; i++)
//     {
//         if (0 == strcmp(ps->data[i].name, name))
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// void delcontact(struct Contact *ps)
// {
//     char name[MAX_NAME];
//     printf("请输出要删除人的名字\n");
//     scanf("%s", name);
//     int pos = findbyname(ps, name);
//     if (pos == -1)
//     {
//         printf("要删除的人不存在\n");
//     }
//     else
//     {
//         int j = 0;
//         for (j = pos; j < ps->size - 1; j++)
//         {
//             ps->data[j] = ps->data[j + 1];
//             ps->size--;
//             printf("删除成功\n");
//         }
//     }
// }

// void searchcontact(const struct Contact *ps)
// {
//     char name[MAX_NAME];
//     printf("请输出要查找的人的性命\n");
//     scanf("%s", name);
//     int pos = findbyname(ps, name);
//     if (pos == -1)
//     {
//         printf("要查找的人不存在\n");
//     }
//     else
//     {
//         printf("%20s\t %4s\t %5s\t %12s\t %20s\t\n", "名字", "年龄", "性别", "电话", "住址");
//         printf("%20s\t %4d\t %5s\t %12s\t %20s\t\n",
//                ps->data[pos].name,
//                ps->data[pos].age,
//                ps->data[pos].sex,
//                ps->data[pos].tele,
//                ps->data[pos].addr);
//     }
// }

// void modifycontact(struct Contact *ps)
// {
//     char name[MAX_NAME];
//     printf("请输入要修改人的名字\n");
//     scanf("%s", name);
//     int pos = findbyname(ps, name);
//     if (-1 == pos)
//     {
//         printf("要修改人的信息不存在\n");
//     }
//     else
//     {
//         printf("请输入名字\n");
//         scanf("%s", ps->data[pos].name);
//         printf("请输入年龄\n");
//         scanf("%d", &(ps->data[pos].age));
//         printf("请输入性别\n");
//         scanf("%s", ps->data[pos].sex);
//         printf("请输入电话\n");
//         scanf("%s", ps->data[pos].tele);
//         printf("请输入住址\n");
//         scanf("%s", ps->data[pos].addr);
//         printf("修改完成\n");
//     }
// }

// int main()
// {
    // int input;
    // struct Contact con;
    // initcontact(&con);
    // do
    // {
    //     menu();
    //     printf("请选择\n");
    //     scanf("%d", &input);
    //     switch (input)
    //     {
    //     case add:
    //         addcontact(&con);
    //         break;
    //     case del:
    //         delcontact(&con);
    //         break;
    //     case search:
    //         searchcontact(&con);
    //         break;
    //     case modify:
    //         modifycontact(&con);
    //         break;
    //     case show:
    //         showcontact(&con);
    //         break;
    //     case sort:
    //         break;
    //     case EXIT:
    //         printf("退出\n");
    //         break;
    //     default:
    //         printf("输入错误\n");
    //         break;
    //     }

    // } while (input);


int main()
{
    int* p = (int *)malloc(10*sizeof(int)); 
    if( p == NULL)
    {   
        // 打印错误原因
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<10;i++)
        {
            *(p+i) = i;
        }

        for(i=0;i<10;i++)
        {
            printf("%d ",*(p+i));
        }
    }
    free(p);
    p = NULL;
    return 0;
}