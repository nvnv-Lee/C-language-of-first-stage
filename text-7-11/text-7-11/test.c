#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





////���ַ�������
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
//	//scanf("%s", arr);//%s��ȡ�ַ���ʱ�����ո��ֹͣ
//	gets(arr);//��ȡһ�У������ո�������ȡ
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}





////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ�����֣�����2
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("����������������:>");
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





////���0-100000֮������С�ˮ�ɻ����������
////ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ���������153=1^3+5^3+3^3����153��һ��ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1.����i��λ��--n
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��sum
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





////��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//7
//	int i = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i<=line-1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}





////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ//money!=0ʱ��total=2*money-1
//int main()
//{
//	int money = 0;
//	scanf("%d",&money);
//	//���������ˮ�ȵ�
//	int total = money;
//	int empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//}





//ģ��ʵ�ֿ⺯��strcpy





//ģ��ʵ��strlen





////����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�� 
//void move(int arr[], int sz)
//{
//	int left = 0; 
//	int right = sz - 1;
//	while (left<right)
//	{
//		//�������ż��
//		while((left<right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
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





////����Ļ�ϴ�ӡ�������
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




////����������
////A�������ң�    B����C��    C����D��      D��C�ں�˵��      ��֪����˵���滰��һ��˵�˼ٻ����������Ϣ��д��һ�������ж�˭������
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





//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ�������������ٱ������Σ�   8��
//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ�������������ٱ������Σ� 
//�������⣺��һ���㣬���ʲ����ȣ�����ÿһ���������㣬ȼ����ǡ����һ��Сʱ�����������㣬����ȷ��һ��15���ӵ�ʱ��Σ�   ��һ�������˶����ţ�ͬʱ�ڶ�����һ�˵��ţ��ڵ�һ������꣨30���ӣ��󣬵ڶ��������һ�˵��ţ�����15����Ϩ�� 






////�ַ���������ʵ��һ�����������������ַ����е�K���ַ�������ABCD����һ���ַ��õ�BCDA��ABCD���������ַ��õ�CDAB
////1.������ⷨ
//#include <string.h>
//#include <assert.h>
//void left_move(char* p, int k,int len)
//{
//	assert(p != NULL);
//	int i = 0; 
//	for (i = 0; i < k; i++)
//	{
//		//����һ���ַ�
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
////2.������ת��
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
//	reverse(p, p + k - 1);//�������
//	reverse(p + k, p + len - 1);//�����ұ�
//	reverse(p, p + len - 1);//��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	left_move(arr, 2, len);
//	printf("%s\n", arr);
//	return 0;
//}