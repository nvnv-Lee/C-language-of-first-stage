#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





////将字符串逆序
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = {0};
//	//scanf("%s", arr);//%s读取字符串时遇到空格就停止
//	gets(arr);//读取一行，遇到空格照样读取
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}





////求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字，例如2
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d",&a,&n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





////求出0-100000之间的所有“水仙花数”并输出
////水仙花数：是指一个n位数，其个位数字的n次方之和恰好等于该数本身，如153=1^3+5^3+3^3，则153是一个水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数
//		//1.计算i的位数--n
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和sum
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





////打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//7
//	int i = 0;
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i<=line-1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}





////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水//money!=0时，total=2*money-1
//int main()
//{
//	int money = 0;
//	scanf("%d",&money);
//	//买回来的汽水喝掉
//	int total = money;
//	int empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}





//模拟实现库函数strcpy





//模拟实现strlen





////输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分 
//void move(int arr[], int sz)
//{
//	int left = 0; 
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从左边找偶数
//		while((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left<right) && (arr[right] % 2 == 0)) 
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr,sz);
//	return 0;
//}





////在屏幕上打印杨辉三角
//int main()
//{
//	int i = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if ((j == 0) || (i == j))
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




////输出结果不对
////A：不是我；    B：是C；    C：是D；      D：C在胡说；      已知三人说了真话，一人说了假话，请根据信息，写出一个程序判断谁是凶手
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer = 'c') + (killer = 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}





//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名，请问最少比赛几次？   8次
//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名，请问最少比赛几次？ 
//烧香问题：有一种香，材质不均匀，但是每一根这样的香，燃烧完恰好是一个小时，给你两根香，帮我确定一个15分钟的时间段？   第一根香两端都点着，同时第二根香一端点着；在第一根香点完（30分钟）后，第二根香的另一端点着，经过15分钟熄灭 






////字符串左旋：实现一个函数，可以左旋字符串中的K个字符，例如ABCD左旋一个字符得到BCDA；ABCD左旋两个字符得到CDAB
////1.暴力求解法
//#include <string.h>
//#include <assert.h>
//void left_move(char* p, int k,int len)
//{
//	assert(p != NULL);
//	int i = 0; 
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		//1.
//		char tmp = *p;
//		//2.
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);
//		}
//		//3.
//		*(p + len - 1) = tmp;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	left_move(arr,2,len);
//	printf("%s\n",arr);
//	return 0;
//}
////2.三部翻转法
//#include <string.h>
//#include <assert.h>
//void reverse(char*left, char*right)
//{
//	assert(left!=NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* p, int k, int len)
//{
//	assert(p != NULL);
//	assert(k<=len);
//	reverse(p, p + k - 1);//逆序左边
//	reverse(p + k, p + len - 1);//逆序右边
//	reverse(p, p + len - 1);//逆序整体
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	left_move(arr, 2, len);
//	printf("%s\n", arr);
//	return 0;
//}