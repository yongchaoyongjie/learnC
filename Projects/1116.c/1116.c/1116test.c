
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# define MAX_ROW 10
# define MAX_COL 10
# define DILEI_COUNT 10

//初始化展示的地图和地雷图这个位置为'1'代表有雷,'0'代表没有雷
void Init(char show_map[MAX_ROW + 2][MAX_COL + 2],

	char dilei_map[MAX_ROW + 2][MAX_COL + 2]){//初始化地图

	for (int row = 0; row <= MAX_ROW + 2; row++){
		for (int col = 0; col <= MAX_COL + 2; col++){
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row <= MAX_ROW + 2; row++){
		for (int col = 0; col <= MAX_COL + 2; col++){
			dilei_map[row][col] = '0';//首先初始化为都没有雷记做'0'
		}
	}
	int dilei_count = DILEI_COUNT;//准备随机布置雷地雷为10个
	srand((unsigned int)time(0));
	while (dilei_count >0){
		//srand((unsigned int)time(0));
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (dilei_map[row][col] == '1'){//等于1此处有雷则不能将雷放到此处重新放雷
			continue;
		}
		dilei_map[row][col] = '1';
		dilei_count--;
	}
}
void dayinmap(char map[MAX_ROW + 2][MAX_COL + 2]){//打印地图
	printf("    ");//左上角打印4个空格
	for (int i = 1; i <= MAX_COL; i++){
		printf("%d ", i);//打印第一行纵坐标
	}
	printf("\n");
	for (int j = 1; j <= MAX_COL; j++){
		printf("---");//打印上边框
	}
	printf("\n");

	//按行打印地图
	for (int row = 1; row <= MAX_ROW; row++){
		printf("%02d| ", row);//打印第一行横坐标

		for (int col = 1; col <= MAX_COL; col++){
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}
void updateshowmap(char show_map[MAX_ROW + 2][MAX_COL + 2],
	char dilei_map[MAX_ROW + 2][MAX_COL + 2], int row, int col)
{
	int dilei_cnt = (dilei_map[row - 1][col - 1] - '0') +
		(dilei_map[row + 1][col - 1] - '0') +
		(dilei_map[row - 1][col] - '0') +
		(dilei_map[row - 1][col + 1] - '0') +
		(dilei_map[row][col - 1] - '0') +
		(dilei_map[row][col + 1] - '0') +
		(dilei_map[row + 1][col + 1] - '0') +
		(dilei_map[row + 1][col] - '0');
	show_map[row][col] = '0' + dilei_cnt;
}
void game(){
	//对于show_map
	//1:这个位置没有掀开用'*'
	//2:掀开用具体数字'1''2'表示
	char show_map[MAX_ROW + 2][MAX_COL + 2];

	//对于dilie_map这个位置是地雷用'1'不是用'0'

	char dilei_map[MAX_ROW + 2][MAX_COL + 2];

	int dilei_count = 0;

	Init(show_map, dilei_map);//初始化两张地图

	dayinmap(show_map);
	//打印没有操作过的show_map,然后玩家输入坐标
	while (1){
		int row;
		int col;
		scanf("%d%d", &row, &col);
		//scanf("%d",&col);
		if (row <= 0 || row > MAX_ROW || col <= 0 || col > MAX_COL)
		{
			printf("输入不合法请重新输入\n");
			continue;
		}
		if (dilei_map[row][col] == '1')
		{
			printf("结束游戏");
			dayinmap(dilei_map);//???
			break;
		}
		//如果没有踩地雷,看是不是游戏胜利不胜利则继续循环
		//统计该位置周围有几个雷并把这个数字更新到地图上,
		//地雷从0开始到10个都没有踩则玩家获胜
		++dilei_count;
		if (dilei_count == MAX_ROW*MAX_COL - DILEI_COUNT){
			printf("玩家获胜扫雷成功");
			dayinmap(dilei_map);//????扫雷成功也要打印地雷地图
			break;
		}
		updateshowmap(show_map, dilei_map, row, col);
		//updateshowmap(show_map,dilei_map, row, col);
		dayinmap(show_map);//如果雷找到了但是格子
		//没有达到最大数字要全部点完,接着往下扫要更新周围
		//有几个雷的数字数字显示在show map上了
	}
}


int menu(){
	printf("*******************************\n");
	printf("***********扫雷游戏************\n");
	printf("***********1.开始游戏**********\n");
	printf("***********0.结束游戏**********\n");
	int chice = 0;
	scanf("%d", &chice);
	return chice;
}
void start(){
	while (1){
		int chice = menu();
		if (chice == 0){
			break;
		}
		game();
	}
}
int main(){

	start();
	system("pause");
	return 0;
}