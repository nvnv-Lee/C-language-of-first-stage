#define _CRT_SECURE_NO_WARNINGS  
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("********1.play   0.exit********\n");
	printf("*******************************\n");
}
void game()
{
	printf("ɨ��\n");
	//����-�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	//ɨ��
	FindMine(mine,show, ROW, COL);//�����׵������в�����Ϣ���ҵ����׵���Ϣ��ӡ���Ų��׵�������

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼɨ����Ϸ\n");
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}