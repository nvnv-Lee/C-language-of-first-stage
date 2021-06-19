#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//#include <stdio.h>,std-standard,i-input,o-output
//全局变量：定义在代码块{}之外的变量
//局部变量：定义在代码块{}之内的变量
//局部变量与全局变量的名字建议不要相同，容易误会，产生bug；当局部变量和全局变量的名字相同的时候局部变量优先

int global = 2020;

int main()//主函数，main前面的int表示main函数调用返回一个整型值
{
	//%d-打印整型
	//%c-打印字符  
	//%f-打印浮点型，即打印小数
	//%p-以地址的形式打印
	//%x-打印16进制
    //%o-......
	//short int-短整型
	//long 长整形
	//float-单精度浮点型
	//double-双精度浮点型
	//bit-比特位，byte-字节,kb,mb,gb,tb,pb。。。。1byte=8bit,1kb=1024byte,1mb=1024kb,1gb=1024mb,1tb=1024gb,1pb=1024tb
	//printf("%d\n",sizeof(char));//1(8个比特位) 
	//printf("%d\n",sizeof(short ));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4或者8
	//printf("%d\n", sizeof(long long));//8)
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8


	//long num = 100;
	//printf("%d\n", num);
	//double f = 3.14;
		//printf("%lf\n", f);
	
	//char ch = 'A';//内存，char-字符类型
	//short age = 20;//向内存申请两个字节用来存放20
	//float weight=95.6//向内存申请4个字节用来存放95.6
	//printf("%c\n", ch);//%c-打印字符格式的数据
	
	//printf("%d\n",age);//%d-打印整型十进制数据
	//printf("hello 比特\n");
	

	//计算两个数的和
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//输入数据-使用输入函数scanf
	//scanf("%d%d", &num1, &num2);//取地址符号&
	//c语言语法规定变量要定义在当前代码块的最前面
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);

	//printf("%d\n", global);
	
	
	
	
	extern int g_val;
	printf("g_val=%d\n", g_val);//为声明的标识符，
	//声明extern外部符号的







	
	//int num = 0;
			//printf("num=%d\n", num);
	

	return 0;
}//int是整型的意思
//void main()//这种写法是过时的写法
//printf("")--库函数-C语言本身提供给我们使用的函数，别人的东西-打招呼。