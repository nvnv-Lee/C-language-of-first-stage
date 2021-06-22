 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>




////冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz-1; j++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int i = 0;
//		for (i = 0; i < sz-1-j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;//这一趟要排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}





////创建一个整形数组，完成对数组的操作
////1.实现函数init()初始化数组为全0
////2.实现print()打印数组的每个元素
////3.实现reverse()完成数组元素的逆置
//void initarr(int arr[],int s)
//{
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int s)
//{
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int s)
//{
//	int left = 0;
//	int right = s-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	initarr(arr,sz);
//	print(arr,sz);
//	return 0;
//}





////将数组a中的内容与数组b中的内容进行交换（数组一样大）
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4 };
//	int brr[] = { 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//	}
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	printf("\n");
//}





////全局变量不初始化，默认为0
////sizeof()计算变量/类型所占内存的大小>=0返回无符号数，会将sizeof()中的内容也改为无符号数，即内容若为负数，就会变为很大的无符号是
//int i;
//int main()
//{
//	printf("%d", i);
//	return 0;
//}





//求二进制(补码)中1的个数
////法1
//int Count_bit_one(unsigned int a)//unsigned int 将所传的参数转化为无符号数
//{
//	int count = 0;
//	while (a)
//	{
//		int i = a % 2;
//		if (i == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//
//	}
//	return count;
//}

////法2
//int Count_bit_one(int a)//unsigned int 将所传的参数转化为无符号数
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////法3
//int Count_bit_one(int a)//unsigned int 将所传的参数转化为无符号数
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);//每执行一次，参数里面的1取消一个
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&a);
//	//写一个函数求a的二进制（补码）表示中有几个1 
//	//13---00000000 00000000 00000000 00001101（补码）
//	//-1---11111111 11111111 11111111 11111111 (补码)-------32个1
//	int count=Count_bit_one(a);//若a为-1时，会有特殊情况，应考虑参数为负数的情况
//	printf("%d", count);
//	system("pause");//system库函数-执行系统命令-pause(暂停)
//	return 0;
//}





////求二进制(补码)中不同位的个数
//int get_different(int m, int n)
//{
//
//	int count = 0;
//	int tmp = m^n;//m异或n
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);//每执行一次，参数里面的1取消一个
//		count++;
//	}
//
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d",&m,&n);
//	int count = get_different(m,n);
//	printf("%d",count);
//	
//}





////分别打印二进制的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		int n = (m>>i) & 1;
//		printf("%d ",n);	
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		int n = (m >> i) & 1;
//		printf("%d ", n);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个操作数:>");
//	scanf("%d", &a);
//	print(a);
//}
 





////交换两个变量，不允许创造临时变量
//int main()
//{
//	int a = 1;
//	int b = 2;
//	/*b = a^b;
//	a = a^b;
//	b = a^b;*/
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d",a,b);
//	return 0;
//
//}





////使用指针来打印数组内容
//void print(int *p,int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		*p = *(p + i);
//		printf("%d ", *p);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}





//编写一个函数reverse_string(char *string)递归实现
//不能使用库函数中的字符串操作函数，将参数字符中的字符反向排列

//循环法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr,int sz)// 括号里也可以写为char arr[]
//{
//	int left = 0;
//	int right = sz;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//递归法（不会）
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s",arr);
	return 0;
}