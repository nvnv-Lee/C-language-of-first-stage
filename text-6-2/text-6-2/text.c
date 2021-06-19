#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////写一个函数可以判断一个数是不是素数(只能被1和它本身所整除的数字)
//#include <math.h>
//int is_prime(int n)//若为素数，返回1；若不为素数，返回0.
//{
//	int j = 0;
//	for (j =2; j < sqrt(n); j++)//将j<n优化为j<sqrt(n)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//		else
//			continue;
//	}
//	return 0;
//}    





////写一个函数判断一年是不是闰年
//int is_leap_year(int n)//是闰年返回1，不是闰年返回0。
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) | (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&year);
//	int i = is_leap_year(year);
//	if (i == 1)
//	{
//		printf("是闰年\n ");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//
//}









////写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[],int a,int sz)//int arr[]，这里传递过去的是arr首元素的地址；这里本质上arr是一个指针。
//{                                        //并且自定义的函数要用外部的变量时，需要将其在（）中写出来。
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//			int mid = (left + right) / 2;
//			if (a<arr[mid])
//			{
//				right = mid-1;
//			}
//			else if (a>arr[mid])
//			{
//				left = mid+1;
//			}
//			else
//			{
//				return mid;
//				break;
//			}
//		}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	printf("请输入操作数:>");
//	scanf("%d", &a);
//	int ret = binary_search(arr, sz, a);
//	if (-1!=ret)
//	{
//		printf("找到了，下标为:%d",ret);
//	
//	}
//	else 
//	{
//		printf("找不到");
//	}
//	return 0;
//}






////写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//	*p++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	return 0;
//}





////按顺序输出1 2 3 4
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}





////求字符串的长度
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while (*pa != '\0')
//	{
//		count++;
//		pa++;//这里用pa++
//	}
//	return count;
//}
//int main()
//
//
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);// 数组传参，传过去的不是数组而是首元素的地址
//	printf("该字符串长度为：%d",len);
//	return 0;
//}






////递归法求n的阶乘
//int Fac1(int i)
//{
//	if (i > 1)
//	{
//		return i*Fac1(i - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数n=:>");
//	scanf("%d",&n);
//	int ret = Fac1(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}





////斐波那契数列：1 1 2 3 5 8 13 21 34 55......
////求第n个斐波那契数
//int Fib(int i)
//{
//	if (i >2)
//	{
//		return Fib(i - 1)+Fib(i - 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数n=:>");
//	scanf("%d",&n);
//	int num = Fib(n);
//	printf("num=%d\n",num);
//	return 0;
//}






////求第n个斐波那契数(循环法)
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//		return c;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数n=:>");
//	scanf("%d",&n);
//	int num = Fib(n);
//	printf("num=%d\n",num);
//	return 0;
//}






