#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////���������Ӵ�С���
//int main()
//{
//	int arr[] = { 10, 20, 30 };
//	if (arr[0] < arr[1])
//	{
//		int tmp = arr[0];
//		arr[0] = arr[1];
//		arr[1] = tmp;
//	}
//	if (arr[0] < arr[2])
//	{
//		int tmp = arr[0];
//		arr[0] = arr[2];
//		arr[2] = tmp;
//	}
//	if (arr[1] < arr[2])
//	{
//		int tmp = arr[1];
//		arr[1] = arr[2];
//		arr[2] = tmp;
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}





////��ӡ3�ı���1-100
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}





////�����������������Ĺ�Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	printf("����������������:>");
//	scanf("%d %d", &a, &b);
//	while (a%b)
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("���Լ��Ϊ��%d",b);
//	return 0;
//}





////��ӡ1000-2000�������
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





////��ӡ100��200֮�������
//int main()
//{
//	int i = 0;
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
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





////���1-100֮������9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//9,19,29,39,49,59,69,79,89,99
//		{
//			count++;
//		}
//
//		if (i / 10 == 9)//90,91,92,93,94,95,96,97,98,99
//		{
//			count++;
//		}
//	}
//	printf("count=%d",count);
//	return 0;
//}





////����1-1/2+1/3-1/4+1/5+......+1/99-1/100
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 2; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= (1 / i);
//		}
//		else
//		{
//			sum += (1 / i);
//		}
//	}
//	printf("sum=%d",sum);
//	return 0;
//}





////��10�������е����ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d",max);
//	return 0;
//}





////����Ļ�����9*9�˷��ھ�
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int ret = i*j;
//			printf("%d*%d=%-2d  ", i, j, ret);//%2d���Ҷ��룬%-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}





