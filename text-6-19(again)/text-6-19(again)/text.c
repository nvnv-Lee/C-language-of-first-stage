#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{
	printf("********************************\n");
	printf("*********1.play  0.exit*********\n");
	printf("********************************\n");
}
void game()
{
	//�����������������Ϣ
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	char ret = 0;
	while (1)
	{
		//�������
		PlayerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ���Ϸ����\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ���Ϸ����\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ�֣���Ϸ����\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��������Ϸ��ʼ\n");
			game();
			break;
		default:
			printf("ѡ�����������ѡ��:>");
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