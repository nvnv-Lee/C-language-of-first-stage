#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//int main()
//{/*
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������벢�����password������
//	
//    //��������ʣһ��'\n'
//	//��ȡһ��'\n'	
//	//getchar();
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret=getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
// }
//int main()
//{
//	int i=0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i<=n;i++)
//	{
//		ret = ret * i;
//		
//
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}


int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	//scanf("%d", &n);
	for (i = 1; i <= 3; i++)
	{
		ret = ret * i;
		sum = sum + ret;

	}
	printf("sum=%d\n", sum);
	return 0;
}