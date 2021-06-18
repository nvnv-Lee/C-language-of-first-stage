#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>


//
////int MAX(int x, int y)
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
////
////
////	void test()
////	{
////		static int a = 1;
////		a++;
////		printf("a=%d\n",a);
////	
////	
////	}
//
//
//
//
//
//int main()
//{
//	//\0是一个转义字符，它的ASCII码值为0，等价于数字0，字符‘0’的ASCII码值为48
//	//EOF---end of file是文件结束标志，本质上的值为-1
//
//
//	//int num1 = 10;
//	//int num2 = 20;
//	//int max = 0;
//	//max=MAX(num1,num2);
//	//printf("max=%d\n",max);
//
//
//
//
//	//int a = 10;
//	//int b = a++;//后置++，
//	//printf("a=%d b=%d",a,b);
//
//
//	//int a = (int)3.14; 
//
//
//	//register int a = 10;//建议把a定义成寄存器变量
//
//	//typedef unsigned int u_int;
//	//unsigned int num1 = 20;
//	//u_int num2 = 20;
//
//
//
//	//int i = 0;
//	//while (i < 5)
//	//{
//	//
//	//	test();
//	//	i++;
//	//	
//	//}
//
//
//	//extern---声明外部符号
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//  } 

//声明外部函数
//  extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("sum=%d\n",sum);
//	return 0;
//
//}



//#define MAX 100//#define定义标识符常量
//#define可以定义宏-带参数



//函数的实现
// int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
// //宏的方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//////函数方式
//int max = MAX(a, b);
//printf("max=%d\n",max);
//	//宏的方式
//max = MAX(a, b);
//	//max = MAX(a > b ? a : b);
//	//int max = MAX(a, b);
//	printf("max=%d\n",max);
//
//	return 0;
//}





//int main()
//{
//	//int a = 10;
//	//int* p = &a;//有一种变量是专门用来存放地址的
//	////printf("%p\n", &a);//&a是a的地址
//	//char ch = 'w';
//	//	char* pc = &ch;
//	//	printf("%d\n",sizeof(pc));
//	//	printf("%p\n", pc);
//	//	*pc = 'a';
//	//	printf("%c\n",ch);
//
//
//
//
//
//
//	
//
//
//
//
//	return 0;
//}




//
//
//struct Book
//{
//	short price;//55
//	char name[20];
//};
//
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { 55 ,"C语言程序设计" };
//	printf("书名:%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%hd\n", b1.price);
//
//	return 0;
//}




int main()
{
int i = 1;
while (i <= 100)
{
	if (i % 2 == 1)
		printf("%d ",i);
	i++;

}
return 0;
}