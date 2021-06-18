#define _CRT_SECURE_NO_WARNINGS 1;
//static int g_val = 2020;//全局变量，static修饰全局变量，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
////static修饰函数,也是改变了函数的作用域---不准确；static修饰函数，改变了函数的链接属性，外部链接属性就变成了内部链接属性


//普通函数是有外部链接属性的

int Add(int x, int y)
{
	int z = x + y;
	return z;

}