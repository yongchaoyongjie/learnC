#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
# include<time.h>
#define ROW 3
#define COL 3
char g_board[ROW][COL];


void Init()//初始化棋盘
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
void print()//打印棋盘
{

	for (int row = 0; row < ROW; row++)
	{
		printf("%c |%c |%c |", g_board[row][0], g_board[row][1], g_board[row][2]);
		printf("\n");
		if (row < ROW)
		{
			printf("—|—|—|");
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
	printf("请玩家落子：\n");
	while (1)
	{
		printf("请玩家输入坐标(row col)：\n");
		int row;
		int col;
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL)
		{
			printf("输入错误请玩家重新输入\n");
			continue;
		}
		if (g_board[row][col] != ' ')
		{
			printf("当前位置已经有子请玩家重新输入\n");
			continue;
		}
		g_board[row][col] = '*';//落子玩家
		break;
	}
}
void computermove()
{
	printf("请电脑落子：\n");
	while (1)
	{//随机种子不能再这里设置如果设置在这里两次循环会得到两次相同的结果，因为时间太短了，所以应该放在初始化函数的开始。
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_board[row][col] != ' ')
		{
			printf("请电脑重新输入\n");
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
			return g_board[row][0];//相等而且保证不是空格
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
			break;//跳出循环胜负已经分
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
		printf("玩家胜利！\n");
	}
	else if (winner == 'o')
	{
		printf("电脑胜利！\n");
	}
	else if (winner == 'q') {
		printf("棋盘满");
	}
	system("pause");
	return 0;
}
