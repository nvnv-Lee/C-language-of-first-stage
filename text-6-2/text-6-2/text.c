#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////дһ�����������ж�һ�����ǲ�������(ֻ�ܱ�1��������������������)
//#include <math.h>
//int is_prime(int n)//��Ϊ����������1������Ϊ����������0.
//{
//	int j = 0;
//	for (j =2; j < sqrt(n); j++)//��j<n�Ż�Ϊj<sqrt(n)
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





////дһ�������ж�һ���ǲ�������
//int is_leap_year(int n)//�����귵��1���������귵��0��
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
//	printf("�����������:>");
//	scanf("%d",&year);
//	int i = is_leap_year(year);
//	if (i == 1)
//	{
//		printf("������\n ");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//
//}









////дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[],int a,int sz)//int arr[]�����ﴫ�ݹ�ȥ����arr��Ԫ�صĵ�ַ�����ﱾ����arr��һ��ָ�롣
//{                                        //�����Զ���ĺ���Ҫ���ⲿ�ı���ʱ����Ҫ�����ڣ�����д������
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
//	printf("�����������:>");
//	scanf("%d", &a);
//	int ret = binary_search(arr, sz, a);
//	if (-1!=ret)
//	{
//		printf("�ҵ��ˣ��±�Ϊ:%d",ret);
//	
//	}
//	else 
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}






////дһ��������ÿ����һ������������ͻὫnum��ֵ����1
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





////��˳�����1 2 3 4
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





////���ַ����ĳ���
//int my_strlen(char* pa)
//{
//	int count = 0;
//	while (*pa != '\0')
//	{
//		count++;
//		pa++;//������pa++
//	}
//	return count;
//}
//int main()
//
//
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);// ���鴫�Σ�����ȥ�Ĳ������������Ԫ�صĵ�ַ
//	printf("���ַ�������Ϊ��%d",len);
//	return 0;
//}






////�ݹ鷨��n�Ľ׳�
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
//	printf("�����������n=:>");
//	scanf("%d",&n);
//	int ret = Fac1(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}





////쳲��������У�1 1 2 3 5 8 13 21 34 55......
////���n��쳲�������
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
//	printf("�����������n=:>");
//	scanf("%d",&n);
//	int num = Fib(n);
//	printf("num=%d\n",num);
//	return 0;
//}






////���n��쳲�������(ѭ����)
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
//	printf("�����������n=:>");
//	scanf("%d",&n);
//	int num = Fib(n);
//	printf("num=%d\n",num);
//	return 0;
//}






