#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>


//
////int MAX(int x, int y)
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////}
////
////
////	void test()
////	{
////		static int a = 1;
////		a++;
////		printf("a=%d\n",a);
////	
////	
////	}
//
//
//
//
//
//int main()
//{
//	//\0��һ��ת���ַ�������ASCII��ֵΪ0���ȼ�������0���ַ���0����ASCII��ֵΪ48
//	//EOF---end of file���ļ�������־�������ϵ�ֵΪ-1
//
//
//	//int num1 = 10;
//	//int num2 = 20;
//	//int max = 0;
//	//max=MAX(num1,num2);
//	//printf("max=%d\n",max);
//
//
//
//
//	//int a = 10;
//	//int b = a++;//����++��
//	//printf("a=%d b=%d",a,b);
//
//
//	//int a = (int)3.14; 
//
//
//	//register int a = 10;//�����a����ɼĴ�������
//
//	//typedef unsigned int u_int;
//	//unsigned int num1 = 20;
//	//u_int num2 = 20;
//
//
//
//	//int i = 0;
//	//while (i < 5)
//	//{
//	//
//	//	test();
//	//	i++;
//	//	
//	//}
//
//
//	//extern---�����ⲿ����
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//	return 0;
//  } 

//�����ⲿ����
//  extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("sum=%d\n",sum);
//	return 0;
//
//}



//#define MAX 100//#define�����ʶ������
//#define���Զ����-������



//������ʵ��
// int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
// //��ķ�ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//////������ʽ
//int max = MAX(a, b);
//printf("max=%d\n",max);
//	//��ķ�ʽ
//max = MAX(a, b);
//	//max = MAX(a > b ? a : b);
//	//int max = MAX(a, b);
//	printf("max=%d\n",max);
//
//	return 0;
//}





//int main()
//{
//	//int a = 10;
//	//int* p = &a;//��һ�ֱ�����ר��������ŵ�ַ��
//	////printf("%p\n", &a);//&a��a�ĵ�ַ
//	//char ch = 'w';
//	//	char* pc = &ch;
//	//	printf("%d\n",sizeof(pc));
//	//	printf("%p\n", pc);
//	//	*pc = 'a';
//	//	printf("%c\n",ch);
//
//
//
//
//
//
//	
//
//
//
//
//	return 0;
//}




//
//
//struct Book
//{
//	short price;//55
//	char name[20];
//};
//
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { 55 ,"C���Գ������" };
//	printf("����:%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%hd\n", b1.price);
//
//	return 0;
//}




int main()
{
int i = 1;
while (i <= 100)
{
	if (i % 2 == 1)
		printf("%d ",i);
	i++;

}
return 0;
}