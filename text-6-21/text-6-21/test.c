 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>




////ð������
//void bubble_sort(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz-1; j++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int i = 0;
//		for (i = 0; i < sz-1-j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int tmp = 0;
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;//��һ��Ҫ�����������ʵ����ȫ����
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





////����һ���������飬��ɶ�����Ĳ���
////1.ʵ�ֺ���init()��ʼ������Ϊȫ0
////2.ʵ��print()��ӡ�����ÿ��Ԫ��
////3.ʵ��reverse()�������Ԫ�ص�����
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





////������a�е�����������b�е����ݽ��н���������һ����
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





////ȫ�ֱ�������ʼ����Ĭ��Ϊ0
////sizeof()�������/������ռ�ڴ�Ĵ�С>=0�����޷��������Ὣsizeof()�е�����Ҳ��Ϊ�޷���������������Ϊ�������ͻ��Ϊ�ܴ���޷�����
//int i;
//int main()
//{
//	printf("%d", i);
//	return 0;
//}





//�������(����)��1�ĸ���
////��1
//int Count_bit_one(unsigned int a)//unsigned int �������Ĳ���ת��Ϊ�޷�����
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

////��2
//int Count_bit_one(int a)//unsigned int �������Ĳ���ת��Ϊ�޷�����
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
////��3
//int Count_bit_one(int a)//unsigned int �������Ĳ���ת��Ϊ�޷�����
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);//ÿִ��һ�Σ����������1ȡ��һ��
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("�����������:>");
//	scanf("%d",&a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1 
//	//13---00000000 00000000 00000000 00001101�����룩
//	//-1---11111111 11111111 11111111 11111111 (����)-------32��1
//	int count=Count_bit_one(a);//��aΪ-1ʱ���������������Ӧ���ǲ���Ϊ���������
//	printf("%d", count);
//	system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
//	return 0;
//}





////�������(����)�в�ͬλ�ĸ���
//int get_different(int m, int n)
//{
//
//	int count = 0;
//	int tmp = m^n;//m���n
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);//ÿִ��һ�Σ����������1ȡ��һ��
//		count++;
//	}
//
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("����������������:>");
//	scanf("%d %d",&m,&n);
//	int count = get_different(m,n);
//	printf("%d",count);
//	
//}





////�ֱ��ӡ�����Ƶ�����λ��ż��λ
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
//	printf("������һ��������:>");
//	scanf("%d", &a);
//	print(a);
//}
 





////������������������������ʱ����
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





////ʹ��ָ������ӡ��������
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





//��дһ������reverse_string(char *string)�ݹ�ʵ��
//����ʹ�ÿ⺯���е��ַ��������������������ַ��е��ַ���������

//ѭ����
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
//void reverse_string(char* arr,int sz)// ������Ҳ����дΪchar arr[]
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

//�ݹ鷨�����ᣩ
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