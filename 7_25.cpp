#include <stdio.h>
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
#define MAX 10
enum SEX{
   MALE,
   FEMALE,
   SECRET
}; //把可能的值一一列举

int Add(int x , int y ){
   int z = x + y;
   return z ; 
}
 
int main()
{
 
   /*int area;  
   area = LENGTH * WIDTH;
   printf("value of area : %d\n", area);
   printf("%c", NEWLINE);
   char ch = 'A';
   printf("%c\n", ch);  %c 打印字符

   int age = 20;
   printf("%d", age);  %d 打印整型

 
   double d = 3.14;
   printf("%lf\n", d);  %lf 打印双精度小数

   float f = 5.15 ;
   printf("%f\n", f);  %f 打印单精度小数


   printf("%d\n", sizeof(char)); 申请1 个字节存放 = 8bit = 2^8(最大)
   printf("%d\n", sizeof(short));    2
   printf("%d\n", sizeof(int));      4
   printf("%d\n", sizeof(long));     4/8 看c语言标准规定 sizeof(long)>= sizeof (int)
   printf("%d\n", sizeof(long long));8
   printf("%d\n", sizeof(float));    4
   printf("%d\n", sizeof(double));   8

   int num1 = 10 ;
	int num2 = 20 ; 
   int sum = 0 ;
	scanf("%d%d", &num1, &num2 );
	sum = num1 + num2 ;
	printf("sum = %d\n", sum );

   /*const*/ /*int num = 4 ;
   printf("%d\n",num);
   num = 8 ;
   printf("%d\n", num); 

   const int n = 10;
   int arr[ n] = {0}; //数组里面只能放常量，虽然对n变量做了const，但其本质还是变量，只是有了常属性，所以叫常变量

   int arr[MAX] = {0};
   printf("%d\n",MAX); //这里的MAX在外面做了define定义，是标识符常量，所以可以放数组里面。
   
   enum SEX s = MALE;   赋值MALE给 s 这里 s 是新定义的变量
   printf("%d\n",MALE);//0
   printf("%d\n",FEMALE);//1
   printf("%d\n",SECRET);//2   在开头定义了枚举常量MALE,FEMALE,SECRET ，在这里不能再赋值给MALE,FEMAL,SECRET,比如 MALE = 2是不可以的，因为在这里MALE的值就是0，是一个常量


   char arr1[] = "abc";
   char arr2[] = {'a','b','c' }; // 单个字符用‘’， 字符串用“”
   //printf("%s\n", arr1);
   //printf("%s\n", arr2);
   printf("%d\n", strlen(arr1));
   printf("%d\n", strlen(arr2));
        
 
   printf("%d\n", strlen("c:\test\32\test.c"));



  int input = 0;
	printf("你要好好学习吗\n");
	scanf("%d", &input);
	if(input == 1)
		printf("好offer\n");
	else
	printf("卖红薯\n");


   int line = 0;
   printf("加入比特\n");
   while (line < 20000){
      printf("敲一行代码 这是第%d", line);
      printf("行\n");
      line ++ ;
   }
   if(line>= 20000)
      printf("好offer\n");

    
    int a = 100;
    int b = 200;
    int sum = 0;
    sum = Add( a , b );
    printf("sum = %d\n", sum);


   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int i = 0;
   while (i< 10)
   {
      printf("%d ", arr[i]);
      i++;
   }

   int a = 1 ;
   int b = a << 5;
   printf ("%d\n", b);
  */
   
   

   return 0;
   }


