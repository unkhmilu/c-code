#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{

   // int ret = 0;
   // int ch = 0;
   // char password[20] = {0};
   // printf("请输入密码：");
   // scanf("%s", password);
   // while ((ch = getchar()) != '\n')
   // {
   //    ;
   // }
   // printf("请确认密码 Y/N\n");
   // ret = getchar();
   // if (ret == 'Y')
   //    printf("确认成功\n");
   // else
   //    printf("放弃确认\n");

   // int ch = 0;
   // while ((ch = getchar()) != EOF)
   // {
   //    if (ch < '0' || ch > '9')
   //       continue;
   //       putchar(ch);
   // }

   // int i = 0;
   // for ( i=1 ; i<=10; i++)
   // {
   //    printf("%d ", i);
   // }

   // for(;;)
   // {
   //    printf("hehe\n");
   // }

   // int i= 0;
   // int j=0;
   // for(i=0;i<10;i++)
   // {
   //    for(j=0;j<10;j++){
   //       printf("hehe\n");
   //    }
   // }

   // int i= 0;
   // int j=0;
   //    for(;i<10;i++)
   // {
   //    for(;j<10;j++){
   //       printf("hehe\n");
   //    }
   // }

   // int x,y;
   // for(x=0,y=0; x<2 && y<5 ; ++x, y++)
   // {
   //    printf("hehe\n");
   // }

   // int i = 0;
   // int k = 0;
   // for (i = 0, k = 0; k = 0; i++, k++)
   //    k++;

   // int i = 1;
   // do
   // {
   //    printf("%d\n", i);
   //    i++;
   // } while (i <= 10);

   // int i =1;
   // do
   // {
   //    if( i ==5 )
   //    break;
   //    printf("%d\n",i);
   //    i++;
   // } while (i<=10);

   // int i = 1;
   // do
   // {
   //    if(i==5)
   //    continue;
   //    printf("%d\n",i);
   //    i++;
   // } while (i<=10);

   // int i ;
   // int n ;
   // int num=1;
   // scanf("%d", & n );
   // for(i =1; i <n;i++)
   // {
   //    num = num * i;
   // }
   // printf("阶乘值为：%d\n",num);//计算n的阶乘

   // int a;
   // int num = 1;
   // int add = 0;
   //    for (a = 1;a<= 10;a++)
   //    {
   //       num = num * a ;
   //       add = add + num;
   //    }
   // printf("%d", add); // 计算 1！+ 2！+3！+......+ 10! 的结果

   // int i = 0;
   // int n = 0;
   // int ret = 1;
   // int sum = 0;
   // for (ret =1 ,n = 1; n <= 5; n++)
   // {
   //    for (i = 1; i <= n; i++)
   //    {
   //       ret = ret * i;
   //    }
   //    sum = sum + ret;

   // }
   // printf("%d",sum); // 计算 1！+ 2！+3！+......+ 10! 的结果

   // int i;
   // int k = 7;
   // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   // int num = sizeof(arr) / sizeof(arr[0]);
   // for (i = 0; i < num; i++)
   // {
   //    if (k == arr[i])
   //    {
   //       printf("找到了，下标是：%d", i);
   //       break;
   //    }
   // }
   // if(i == num )
   // {
   //    printf("找不到");
   // }  // 在arr数组中找到 k

   // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   // int num = sizeof(arr) / sizeof(arr[0]);
   // int k = 7;
   // int left = 0;
   // int right = num - 1;
   // while (left <= right)
   // {
   //    int mid = (left + right) / 2;
   //    if (arr[mid] < k)
   //    {
   //       left = mid + 1;
   //    }
   //    else if (arr[mid] > k)
   //    {
   //       right = mid - 1;
   //    }
   //    else
   //    {
   //       printf("找到了，下标是：%d", mid);
   //       break;
   //    }
   // }
   // if (left > right)
   // {
   //    printf("找不到");
   // } // 在arr数组（有序的）中找到 k
   //二分查找算法

   // char arr1[] = "welcome to bit !!!!";
   // char arr2[] = "###################";
   // int left = 0;
   // int right = strlen(arr1) - 1;
   // // 也可以 = sizeof(arr1)/ sizeof(arr1[0]) -2 ;
   // while (left <= right)
   // {
   //    arr2[left] = arr1[left];
   //    arr2[right] = arr1[right];
   //    printf("%s\n", arr2);
   //    Sleep(1000);
   //    system("cls");
   //    left++;
   //    right--;
   // }
   // printf("%s\n", arr2); // 演示多个字符从两端移动，向中间汇聚

   int i =0; 
   char password [20] = {0 };
   for (i =0 ; i <3; i++)
   {
      printf("请输入密码:");
      scanf("%s",password);
      if (strcmp(password,"123456") == 0 )
      {
         printf("登录成功\n");
         break;
      }
      else
      {
         printf("密码错误\n");
      }
      
   }
   if(i==3)
   {
      printf("三次密码均错误，退出程序\n");
   }
	return 0;
}
