#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////�Ӽ�����
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
//	printf("�������������>");
//	scanf_s("%d %d",&a, &b);
//	sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//}







////�Ƚ�������
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
//	printf("������������������>");
//	scanf_s("%d %d",&a, &b);
//	max = Max(a,b);
//	printf("max=%d\n", max);
//
//
//	return 0;
//}






////�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	printf("������a=:>");
//	scanf_s("%d", &a);
//	if (1 == a % 2)
//		printf("aΪ����");
//	else
//		printf("aΪż��");
//
//
//	return 0;
//}







//
////���1-100֮�������
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
////switch�����������һ---������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		switch (i)
//       {
//		case 1:
//			printf("����һ\n");
//				break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		default:
//			break;
//
//		}
//	}
//	return 0;
//}







////����n�Ľ׳�
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int ret = 1;
//	printf("�����������:>");
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
////��һ�����������в��Ҿ����ĳ�����֣��ö��ַ�����
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz- 1;
//
//	int x = 0;
//	printf("�����������:>");
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}









////��д���룬��ʾ����ַ��������ƶ����м���
//
//int main()
//{
//	char arr1[] = {"welcome to bit!!!!!!"};
//	char arr2[] = {"********************"};
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz-2;//�ַ������滹�и���\0��,�����Ǽ�ȥ2
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





////��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼3�Σ�ֻ���������������룬������ξ�����������˳�����
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = { "123456" };
//	char password[10] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������¼����:>");
//		scanf("%s",password);
//		if (strcmp(password,arr1) == 0)//�Ƚ������ַ�����ȣ��ÿ⺯��strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��¼ʧ��\n");
//	}
//	return 0;
//}





////���������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("����������������:>");
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







////��ӡ3�ı�����1-100��
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






////���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	printf("����������������:>");
//	scanf("%d %d",&a ,&b);
//	while (a%b)
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("a��b�����Լ��Ϊ��%d",b);
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





////��ӡ100-200֮�������(ֻ�ܱ�1����������������)
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







////���1-100������9�ĸ���
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





////����1-1/2+1/3-1/4+1/5+.......+1/99-1/100
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






////��10���������ҳ����ҵ���
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int a = 0;
//	printf("�����������:>");
//	scanf("%d",&a);
//    for (i = 0; i < sz; i++)
//	{
//		if (a == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}




//
////��10�������е����ֵ
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







////����Ļ���9��9�˷��ھ���
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
//			printf("%d*%d=%2d  ",i,j,ret);//%2d��˼�Ǵ�ӡ��λ�������Ļ��ÿո��룬�Ҷ��룻%-2d��˼�Ǵ�ӡ��λ�������Ļ��ÿո��룬����롣
//		}
//		printf("\n");
//	}
//	return 0;
//}




//������Ϸ
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
		printf("������µ�����:>");
		scanf("%d",&input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input<random_num)
		{
			printf("��С��\n");
		}
	   else
	    {
		printf("��ϲ�㣬�¶���");
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
		printf("��ѡ���Ƿ�ʼ��Ϸ��1/0��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��");
			break;
		}
	} while (input);
	return 0;
}