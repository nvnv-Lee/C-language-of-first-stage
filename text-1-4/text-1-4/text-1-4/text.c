
#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>

#include<string.h>

#include<stdlib.h>
#include<limits.h>

//#define MAX 10//define定义的标识符常量
//枚举常量---一一列举：性别（男、女、保密）；三原色（红黄蓝）
//枚举关键字enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET //枚举常量
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
	//scanf("%d%d",&num1,&num2);//scanf函数是C语言提供的，而scanf_s函数不是标准C语言提供的，是我们当前所应用的Visual Studio编译器提供的           
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);


//const--常属性
	//const int num = 4;
	//printf("%d\n", num);//此时num为const修饰的常变量,const是常属性
	//num = 8;
	//printf("%d\n",num);


	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
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
	//""//空字符串

//数据在计算机上存储的时候存储的是二进制
/*a-97
A-65（ASCII码值）
	......ASCII编码*/
	//char arr1[]="abc";//数组,"abc"---'a' 'b'  'c'  '\0'(\0指的是字符串的结束标志,不算是字符串的内容，且'\0'的值为0//'a'的值为97)
	//char arr2[] = { 'a','b','c','\0' };//单引号引起来的叫做字符，双引号引起来的叫做字符串
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);



	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0' };
	//printf("%d\n", strlen(arr1));//strlen---string length字符串长度
	//printf("%d\n", strlen(arr2));
	


//转义字符
	//printf("c:\\test\\32\\test.c");//\t叫水平制表符 
//??)叫做三字母词


	



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
//	printf("%d\n", strlen("c:\test\32\test.c"));//\32是两个8进制数字，32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符。32转化成十进制为26（作为ASCII码值)代表的字符
//
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//		scanf("%d", &input);//1或者0
//	if (input == 1)
//		printf("给你一个好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("好Offer");
//	else
//		printf("卖红薯");
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
//	//scanf("%d%d", &num1, &num2);//scanf函数是C语言提供的，而scanf_s函数不是标准C语言提供的，是我们当前所应用的Visual Studio编译器提供的           
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组
//		char arr[10]; //定义一个存放10个字符的数组
//		float arr[10]；//定义一个存放10个浮点型数字的数组
//
//	printf("%d\n",arr[4]);//用下标的方式访问元素，下标4指向元素5
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
//	int a = 5 % 2;//5除以2余1，所以a=1,整个过程叫做取模，取模得到的是余数。
//	printf("%d\n",a);
//	return 0;
//}


//int main()
//{
//	//移（2进制）位操作符。<<左移，>>右移
//	int a = 1;
//	//整型占四个字节-32个bite位00000000 00000000 00000000 00000001
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
//	a = 20;//=为赋值，==为判断相等
//	a = a + 10;
//	a += 10;//两种写法完全等价
//	a = a - 10;
//	a -= 10;//两种写法完全等价
//	a = a & 2;
//	a &= 2;//两种写法完全等价
//
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//int b = 20;
//a + b;//+是双目操作符
//
//
//
//	int a = 10;
//printf("%d\n", a);
//printf("%d\n", !a);//c语言中表示真假，0-假，所有的非0都是真
//
//	int a = 10;
//
//printf("%d\n",sizeof(a));//4,sizeof计算的是变量/类型所占空间的大小，单位是字节
//printf("%d\n", sizeof(int)); //两种写法完全等价
//printf("%d\n", sizeof a); //a可以把括号省略掉
////printf("%d\n", sizeof int); //int不能把括号省略掉
//
//
//
//
//
//	int sz = 0;
//	int arr[10] = { 0 };//10个整型元素的数组；10*sizeof（int）=40
//	printf("%d\n",sizeof(arr));//计算数组的元素个数，个数=数组总大小除以每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n",sz);
//
//
//
//return 0;
//}


//找出单身狗
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		{
//			//arr[i];//统计arr[i]在数组中出现了几次
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
//				printf("单身狗：%d\n",arr[i]);
//					break;
//				
//				}
//		
//		}//
//	return 0;
//}




//找出单身狗优化程序

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
//printf("单身狗：%d\n", ret);
//return 0;
//






//电脑关机程序
int main()
{
	char input[20] = { 0 };//数组存储数据
	//关机
	//system()---专门用来执行系统命令的
	system("shutdown -s -t 60");//60秒后关机
	again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//%s是指字符串
	if (strcmp(input, "我是猪"))//判断input中是不是“我是猪”，strcmp---string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	
	}
		return 0; 
}