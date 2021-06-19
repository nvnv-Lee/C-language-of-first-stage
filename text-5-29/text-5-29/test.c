#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////加减函数
////
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入操作数：>");
//	scanf_s("%d %d",&a, &b);
//	sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}







////比较两个数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个操作数：>");
//	scanf_s("%d %d",&a, &b);
//	max = Max(a,b);
//	printf("max=%d\n", max);
//
//
//	return 0;
//}






////判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入a=:>");
//	scanf_s("%d", &a);
//	if (1 == a % 2)
//		printf("a为奇数");
//	else
//		printf("a为偶数");
//
//
//	return 0;
//}







//
////输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//
//	return 0;
//}


//
////switch语句输入星期一---星期天
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		switch (i)
//       {
//		case 1:
//			printf("星期一\n");
//				break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//		default:
//			break;
//
//		}
//	}
//	return 0;
//}







////计算n的阶乘
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int ret = 1;
//	printf("请输入操作数:>");
//	scanf_s("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		ret = ret*i;
//
//	}
//	printf("n!=%d", ret);
//	return 0;
//}






//
////在一个有序数组中查找具体的某个数字，用二分法查找
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz- 1;
//
//	int x = 0;
//	printf("请输入操作数:>");
//	scanf_s("%d", &x);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] >x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}









////编写代码，演示多个字符从两端移动向中间汇聚
//
//int main()
//{
//	char arr1[] = {"welcome to bit!!!!!!"};
//	char arr2[] = {"********************"};
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz-2;//字符串后面还有个‘\0’,所以是减去2
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	while(left<right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}





////编写代码实现，模拟用户登录情景，并且只能登录3次（只允许输入三次密码，如果三次均输入错误，则退出程序）
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = { "123456" };
//	char password[10] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入登录密码:>");
//		scanf("%s",password);
//		if (strcmp(password,arr1) == 0)//比较两个字符串相等，用库函数strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登录失败\n");
//	}
//	return 0;
//}





////三个数，从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("请输入三个操作数:>");
//	scanf("%d %d %d",&a, &b, &c);
//	if (a < b)
//	{
//		tmp= b;
//		b = a;
//		a = tmp;
//	}
//	if (b < c)
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d\n",a ,b ,c);
//	return 0;
//}







////打印3的倍数（1-100）
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//		}
//		else
//			continue;
//	}
//	return 0;
//}






////给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d",&a ,&b);
//	while (a%b)
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("a与b的最大公约数为：%d",b);
//	return 0;
//}






////打印1000-2000年的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





////打印100-200之间的素数(只能被1和它本身所除的数)
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	return 0;
//}







////算出1-100中数字9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	return 0;
//}





////计算1-1/2+1/3-1/4+1/5+.......+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum = sum + 1.0/i;
//		}
//		else
//		{
//			sum = sum - 1.0/i;
//		}
//	}
//	printf("sum=%lf\n",sum);
//	return 0;
//}






////在10个整数中找出想找的数
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int a = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&a);
//    for (i = 0; i < sz; i++)
//	{
//		if (a == arr[i])
//		{
//			printf("找到了，下标为:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//
////求10个整数中的最大值
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max=%d",max);
//	return 0;
//}







////在屏幕输出9×9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int ret = 0;
//			ret = i*j;
//			printf("%d*%d=%2d  ",i,j,ret);//%2d意思是打印两位，不够的话用空格补齐，右对齐；%-2d意思是打印两位，不够的话用空格补齐，左对齐。
//		}
//		printf("\n");
//	}
//	return 0;
//}




//猜字游戏
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字:>");
		scanf("%d",&input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input<random_num)
		{
			printf("猜小了\n");
		}
	   else
	    {
		printf("恭喜你，猜对了");
		break;
	    }
	}

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择是否开始游戏（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新选择！");
			break;
		}
	} while (input);
	return 0;
}