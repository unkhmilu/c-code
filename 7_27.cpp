#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Book
{
   char name[20];
   short price;
};

int main()
{
	//double d = 3.14;
	//double* pd = &d;
	//printf("%p\n", pd);
	//*pd = 1.13;
	//printf("%lf\n", d);
	//printf("%d\n", sizeof(pd)); //输出结果看系统是32位还是64位

      struct Book b1 = {"C语言程序设计", 55};
   struct Book* pb = &b1;
   printf("%p\n", pb);
   printf("书名为：%s\n",(*pb).name);
   printf("书名为: %s\n", b1.name );
   printf("书名为：%s\n",pb-> name);
   printf("价格为：%d\n", (*pb).price);
   printf("价格为：%d\n," , b1 .price);
   printf("价格为：%d\n",pb->price);
   b1.price = 15;
   printf("修改过后的价格为：%d\n", b1.price);
   strcpy(b1.name,"C++");
   printf("修改过后的名字为：%s\n", b1.name);
   return 0;
	return 0;
}
