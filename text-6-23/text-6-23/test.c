#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////�ж�һ�����Ƿ�Ϊ����
//void su_shu(const a)
//{
//	if (1 == a % 2)
//		printf("aΪ����");
//	else
//		printf("a��Ϊ����");
//}
//int main()
//{
//	int a = 0;
//	printf("�����������:>");
//	scanf("%d",&a);
//    su_shu(a);
//	return 0;
//	
//}





////���1-100֮�������
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





////����n�Ľ׳�
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
//	printf("�����������:>");
//	scanf("%d",&n);
//	Jie_cheng(n);
//	return 0;
//}





////����1��+2��+3!+4!+5!+6!+7!+8!+9!+10!
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
//	printf("�����������:>");
//	scanf("%d",&n);
//	Jie_cheng(n);
//	return 0;
//}





////�����������в��Ҿ����ĳ������n
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
//	printf("������Ҫ���ҵ�����:>");
//	scanf("%d",&a);
//	int i=search_digital(arr,a,sz);
//	if (i == 10)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d", i);
//	}
//	return 0;
//}






////��д���룬��ʾ����ַ��������ƶ������м���
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





////��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//void menu()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		printf("�������¼����:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") != 0)
//		{
//			printf("������������µ�¼\n");
//			continue;
//		}
//		else
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("��¼ʧ��\n");
//	}
//}
//int main()
//{
//	menu();
//	return 0;
//}