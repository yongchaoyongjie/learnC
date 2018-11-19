#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
# include<time.h>
#define ROW 3
#define COL 3
char g_board[ROW][COL];


void Init()//��ʼ������
{
	srand((unsigned int)time(0));
	for (int row = 0; row < ROW; row++)
	{

		for (int col = 0; col < COL; col++)
		{
			g_board[row][col] = ' ';
		}
	}
}
void print()//��ӡ����
{

	for (int row = 0; row < ROW; row++)
	{
		printf("%c |%c |%c |", g_board[row][0], g_board[row][1], g_board[row][2]);
		printf("\n");
		if (row < ROW)
		{
			printf("��|��|��|");
			printf("\n");
		}
		if (row == 2)
		{
			printf("  |  |  ");
		}
		/*printf("   -  -  -\n");
		printf("   |  |  |\n");
		*/
	}
}
void playermove()
{
	printf("��������ӣ�\n");
	while (1)
	{
		printf("�������������(row col)��\n");
		int row;
		int col;
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL)
		{
			printf("��������������������\n");
			continue;
		}
		if (g_board[row][col] != ' ')
		{
			printf("��ǰλ���Ѿ������������������\n");
			continue;
		}
		g_board[row][col] = '*';//�������
		break;
	}
}
void computermove()
{
	printf("��������ӣ�\n");
	while (1)
	{//������Ӳ������������������������������ѭ����õ�������ͬ�Ľ������Ϊʱ��̫���ˣ�����Ӧ�÷��ڳ�ʼ�������Ŀ�ʼ��
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_board[row][col] != ' ')
		{
			printf("�������������\n");
			continue;
		}
		g_board[row][col] = 'o';
		break;
	}
}
char judgewinner()
{

	for (int row = 0; row < ROW; row++)
	{

		if (g_board[row][0] == g_board[row][1] && g_board[row][1] == g_board[row][2] && g_board[row][0] != ' ')
		{
			return g_board[row][0];//��ȶ��ұ�֤���ǿո�
		}
	}
	for (int col = 0; col < COL; col++)
	{
		if (g_board[0][col] == g_board[1][col] && g_board[1][col] == g_board[2][col] && g_board[0][col] != ' ')
		{
			return g_board[0][col];
		}
	}
	if (g_board[0][0] == g_board[1][1] && g_board[1][1] == g_board[2][2] && g_board[0][0] != ' ')
	{
		return g_board[0][0];
	}
	if (g_board[2][0] == g_board[1][1] && g_board[1][1] == g_board[0][2] && g_board[2][0] != ' ')
	{
		return g_board[2][0];
	}
	if (isfull()){
		return 'q';
	}

	return ' ';
}
int isfull()	{
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_board[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}



int main()
{
	Init();
	char winner;
	while (1)
	{
		print();
		playermove();

		winner = judgewinner();

		if (winner != ' ')
		{
			break;//����ѭ��ʤ���Ѿ���
		}
		computermove();
		winner = judgewinner();
		if (winner != ' ')
		{
			break;
		}
	}
	if (winner == '*')
	{
		printf("���ʤ����\n");
	}
	else if (winner == 'o')
	{
		printf("����ʤ����\n");
	}
	else if (winner == 'q') {
		printf("������");
	}
	system("pause");
	return 0;
}
