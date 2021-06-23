#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////判断一个数是否为奇数
//void su_shu(const a)
//{
//	if (1 == a % 2)
//		printf("a为奇数");
//	else
//		printf("a不为奇数");
//}
//int main()
//{
//	int a = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&a);
//    su_shu(a);
//	return 0;
//	
//}





////输出1-100之间的奇数
//void su_shu(const a)
//{
//	if (1 == a % 2)
//		printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		su_shu(i);
//	}
//	return 0;
//}





////计算n的阶乘
//void Jie_cheng(const int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("n!=%d", ret);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&n);
//	Jie_cheng(n);
//	return 0;
//}





////计算1！+2！+3!+4!+5!+6!+7!+8!+9!+10!
//void Jie_cheng(const int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum=%d",sum);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&n);
//	Jie_cheng(n);
//	return 0;
//}





////在有序数组中查找具体的某个数字n
//#include <stdlib.h>
//int search_digital(int *arr,const int a,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (a > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return 10;
//	}
//}
//int main()
//{
//	int a = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数字:>");
//	scanf("%d",&a);
//	int i=search_digital(arr,a,sz);
//	if (i == 10)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d", i);
//	}
//	return 0;
//}






////编写代码，演示多个字符从两端移动，向中间汇聚
//#include <string.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!"};
//	char arr2[] = { "####################"};
//	int left = 0;
//	int sz = strlen(arr1);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}





////编写代码实现，模拟用户登录情景，并且只能登录三次
//void menu()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		printf("请输入登录密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") != 0)
//		{
//			printf("密码错误，请重新登录\n");
//			continue;
//		}
//		else
//		{
//			printf("登录成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("登录失败\n");
//	}
//}
//int main()
//{
//	menu();
//	return 0;
//}