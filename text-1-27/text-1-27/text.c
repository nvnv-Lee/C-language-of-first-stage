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
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码并存放在password数组中
//	
//    //缓冲区还剩一个'\n'
//	//读取一下'\n'	
//	//getchar();
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret=getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
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