#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//#include <stdio.h>,std-standard,i-input,o-output
//ȫ�ֱ����������ڴ����{}֮��ı���
//�ֲ������������ڴ����{}֮�ڵı���
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug�����ֲ�������ȫ�ֱ�����������ͬ��ʱ��ֲ���������

int global = 2020;

int main()//��������mainǰ���int��ʾmain�������÷���һ������ֵ
{
	//%d-��ӡ����
	//%c-��ӡ�ַ�  
	//%f-��ӡ�����ͣ�����ӡС��
	//%p-�Ե�ַ����ʽ��ӡ
	//%x-��ӡ16����
    //%o-......
	//short int-������
	//long ������
	//float-�����ȸ�����
	//double-˫���ȸ�����
	//bit-����λ��byte-�ֽ�,kb,mb,gb,tb,pb��������1byte=8bit,1kb=1024byte,1mb=1024kb,1gb=1024mb,1tb=1024gb,1pb=1024tb
	//printf("%d\n",sizeof(char));//1(8������λ) 
	//printf("%d\n",sizeof(short ));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4����8
	//printf("%d\n", sizeof(long long));//8)
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8


	//long num = 100;
	//printf("%d\n", num);
	//double f = 3.14;
		//printf("%lf\n", f);
	
	//char ch = 'A';//�ڴ棬char-�ַ�����
	//short age = 20;//���ڴ����������ֽ��������20
	//float weight=95.6//���ڴ�����4���ֽ��������95.6
	//printf("%c\n", ch);//%c-��ӡ�ַ���ʽ������
	
	//printf("%d\n",age);//%d-��ӡ����ʮ��������
	//printf("hello ����\n");
	

	//�����������ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//��������-ʹ�����뺯��scanf
	//scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//c�����﷨�涨����Ҫ�����ڵ�ǰ��������ǰ��
	//sum = num1 + num2;
	//printf("sum=%d\n", sum);

	//printf("%d\n", global);
	
	
	
	
	extern int g_val;
	printf("g_val=%d\n", g_val);//Ϊ�����ı�ʶ����
	//����extern�ⲿ���ŵ�







	
	//int num = 0;
			//printf("num=%d\n", num);
	

	return 0;
}//int�����͵���˼
//void main()//����д���ǹ�ʱ��д��
//printf("")--�⺯��-C���Ա����ṩ������ʹ�õĺ��������˵Ķ���-���к���