
#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>

#include<string.h>

#include<stdlib.h>
#include<limits.h>

//#define MAX 10//define����ı�ʶ������
//ö�ٳ���---һһ�о٣��Ա��С�Ů�����ܣ�����ԭɫ���������
//ö�ٹؼ���enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET //ö�ٳ���
//};



//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//
	//scanf("%d%d",&num1,&num2);//scanf������C�����ṩ�ģ���scanf_s�������Ǳ�׼C�����ṩ�ģ������ǵ�ǰ��Ӧ�õ�Visual Studio�������ṩ��           
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);


//const--������
	//const int num = 4;
	//printf("%d\n", num);//��ʱnumΪconst���εĳ�����,const�ǳ�����
	//num = 8;
	//printf("%d\n",num);


	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	/*int arr[10] = { 0 };*/





	//int arr[MAX] = { 0 };
	//printf("%d\n", MAX);




	//enum Sex s = FEMALE;
	/*printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
*/


//enum Color color = BLUE;


//"abcdef"
	//""//���ַ���

//�����ڼ�����ϴ洢��ʱ��洢���Ƕ�����
/*a-97
A-65��ASCII��ֵ��
	......ASCII����*/
	//char arr1[]="abc";//����,"abc"---'a' 'b'  'c'  '\0'(\0ָ�����ַ����Ľ�����־,�������ַ��������ݣ���'\0'��ֵΪ0//'a'��ֵΪ97)
	//char arr2[] = { 'a','b','c','\0' };//�������������Ľ����ַ���˫�����������Ľ����ַ���
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);



	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0' };
	//printf("%d\n", strlen(arr1));//strlen---string length�ַ�������
	//printf("%d\n", strlen(arr2));
	


//ת���ַ�
	//printf("c:\\test\\32\\test.c");//\t��ˮƽ�Ʊ�� 
//??)��������ĸ��


	



//printf("%d\n", strlen("c:\test\32\test.c"));
//
//
//
//
//	return 0;
//}

//int main()
//{
//	/*printf("%s\n", "c:\test\32\test.c");*/
//	printf("%c\n",'\x61');
//	printf("%d\n", strlen("c:\test\32\test.c"));//\32������8�������֣�32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ���32ת����ʮ����Ϊ26����ΪASCII��ֵ)������ַ�
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//		scanf("%d", &input);//1����0
//	if (input == 1)
//		printf("����һ����offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("��Offer");
//	else
//		printf("������");
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//
//	int a = 100;
//	int b = 200;
//
//
//	//scanf("%d%d", &num1, &num2);//scanf������C�����ṩ�ģ���scanf_s�������Ǳ�׼C�����ṩ�ģ������ǵ�ǰ��Ӧ�õ�Visual Studio�������ṩ��           
//	sum = add(num1, num2);
//	sum = add(a, b);
//								
//								/*sum = num1 + num2;
//	sum = a + b;*/
//	printf("sum=%d\n", sum);
//
//	return 0;
//}



//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ�����
//		char arr[10]; //����һ�����10���ַ�������
//		float arr[10]��//����һ�����10�����������ֵ�����
//
//	printf("%d\n",arr[4]);//���±�ķ�ʽ����Ԫ�أ��±�4ָ��Ԫ��5
//	/*int i = 0;
//	while (i <10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	
//	}
//
//
//	return 0;
//}





//
//int main()
//{
//	int a = 5 % 2;//5����2��1������a=1,�������̽���ȡģ��ȡģ�õ�����������
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	//�ƣ�2���ƣ�λ��������<<���ƣ�>>����
//	int a = 1;
//	//����ռ�ĸ��ֽ�-32��biteλ00000000 00000000 00000000 00000001
//
//	int b=a << 1;//00000000 00000000 00000000 00000010
//	printf("%d\n",b);
//
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=Ϊ��ֵ��==Ϊ�ж����
//	a = a + 10;
//	a += 10;//����д����ȫ�ȼ�
//	a = a - 10;
//	a -= 10;//����д����ȫ�ȼ�
//	a = a & 2;
//	a &= 2;//����д����ȫ�ȼ�
//
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//int b = 20;
//a + b;//+��˫Ŀ������
//
//
//
//	int a = 10;
//printf("%d\n", a);
//printf("%d\n", !a);//c�����б�ʾ��٣�0-�٣����еķ�0������
//
//	int a = 10;
//
//printf("%d\n",sizeof(a));//4,sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//printf("%d\n", sizeof(int)); //����д����ȫ�ȼ�
//printf("%d\n", sizeof a); //a���԰�����ʡ�Ե�
////printf("%d\n", sizeof int); //int���ܰ�����ʡ�Ե�
//
//
//
//
//
//	int sz = 0;
//	int arr[10] = { 0 };//10������Ԫ�ص����飻10*sizeof��int��=40
//	printf("%d\n",sizeof(arr));//���������Ԫ�ظ���������=�����ܴ�С����ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n",sz);
//
//
//
//return 0;
//}


//�ҳ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		{
//			//arr[i];//ͳ��arr[i]�������г����˼���
//		int count = 0;
//		int j = 0;
//				for (j = 0; j < sz;j++)
//				{
//					if(arr[i]==arr[j])
//						{
//						count++;
//						}
//}
//				if (count == 1)
//				{
//				printf("������%d\n",arr[i]);
//					break;
//				
//				}
//		
//		}//
//	return 0;
//}




//�ҳ������Ż�����

//int main()
//{
//
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//int i = 0;
//int ret = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 0; i < sz; i++)
//{
//	ret = ret ^ arr[i];
//
//}
//printf("������%d\n", ret);
//return 0;
//






//���Թػ�����
int main()
{
	char input[20] = { 0 };//����洢����
	//�ػ�
	//system()---ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//60���ػ�
	again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//%s��ָ�ַ���
	if (strcmp(input, "������"))//�ж�input���ǲ��ǡ���������strcmp---string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	
	}
		return 0; 
}