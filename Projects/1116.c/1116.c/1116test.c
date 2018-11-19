
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# define MAX_ROW 10
# define MAX_COL 10
# define DILEI_COUNT 10

//��ʼ��չʾ�ĵ�ͼ�͵���ͼ���λ��Ϊ'1'��������,'0'����û����
void Init(char show_map[MAX_ROW + 2][MAX_COL + 2],

	char dilei_map[MAX_ROW + 2][MAX_COL + 2]){//��ʼ����ͼ

	for (int row = 0; row <= MAX_ROW + 2; row++){
		for (int col = 0; col <= MAX_COL + 2; col++){
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row <= MAX_ROW + 2; row++){
		for (int col = 0; col <= MAX_COL + 2; col++){
			dilei_map[row][col] = '0';//���ȳ�ʼ��Ϊ��û���׼���'0'
		}
	}
	int dilei_count = DILEI_COUNT;//׼����������׵���Ϊ10��
	srand((unsigned int)time(0));
	while (dilei_count >0){
		//srand((unsigned int)time(0));
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (dilei_map[row][col] == '1'){//����1�˴��������ܽ��׷ŵ��˴����·���
			continue;
		}
		dilei_map[row][col] = '1';
		dilei_count--;
	}
}
void dayinmap(char map[MAX_ROW + 2][MAX_COL + 2]){//��ӡ��ͼ
	printf("    ");//���ϽǴ�ӡ4���ո�
	for (int i = 1; i <= MAX_COL; i++){
		printf("%d ", i);//��ӡ��һ��������
	}
	printf("\n");
	for (int j = 1; j <= MAX_COL; j++){
		printf("---");//��ӡ�ϱ߿�
	}
	printf("\n");

	//���д�ӡ��ͼ
	for (int row = 1; row <= MAX_ROW; row++){
		printf("%02d| ", row);//��ӡ��һ�к�����

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
	//����show_map
	//1:���λ��û���ƿ���'*'
	//2:�ƿ��þ�������'1''2'��ʾ
	char show_map[MAX_ROW + 2][MAX_COL + 2];

	//����dilie_map���λ���ǵ�����'1'������'0'

	char dilei_map[MAX_ROW + 2][MAX_COL + 2];

	int dilei_count = 0;

	Init(show_map, dilei_map);//��ʼ�����ŵ�ͼ

	dayinmap(show_map);
	//��ӡû�в�������show_map,Ȼ�������������
	while (1){
		int row;
		int col;
		scanf("%d%d", &row, &col);
		//scanf("%d",&col);
		if (row <= 0 || row > MAX_ROW || col <= 0 || col > MAX_COL)
		{
			printf("���벻�Ϸ�����������\n");
			continue;
		}
		if (dilei_map[row][col] == '1')
		{
			printf("������Ϸ");
			dayinmap(dilei_map);//???
			break;
		}
		//���û�вȵ���,���ǲ�����Ϸʤ����ʤ�������ѭ��
		//ͳ�Ƹ�λ����Χ�м����ײ���������ָ��µ���ͼ��,
		//���״�0��ʼ��10����û�в�����һ�ʤ
		++dilei_count;
		if (dilei_count == MAX_ROW*MAX_COL - DILEI_COUNT){
			printf("��һ�ʤɨ�׳ɹ�");
			dayinmap(dilei_map);//????ɨ�׳ɹ�ҲҪ��ӡ���׵�ͼ
			break;
		}
		updateshowmap(show_map, dilei_map, row, col);
		//updateshowmap(show_map,dilei_map, row, col);
		dayinmap(show_map);//������ҵ��˵��Ǹ���
		//û�дﵽ�������Ҫȫ������,��������ɨҪ������Χ
		//�м����׵�����������ʾ��show map����
	}
}


int menu(){
	printf("*******************************\n");
	printf("***********ɨ����Ϸ************\n");
	printf("***********1.��ʼ��Ϸ**********\n");
	printf("***********0.������Ϸ**********\n");
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