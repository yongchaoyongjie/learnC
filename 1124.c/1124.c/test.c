# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//int main(){
//	char killer = 'A';
//	for (; killer <= 'D'; killer++){
//		if ((killer != 'A') + (killer != 'B') + (killer == 'C') +
//			(killer != 'D') + (killer == 'D') == 4){
//			printf("����Ϊ%c", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int mian(){
//	//a;b2,a3;
//	//b; b2;e4
//	//c; c1;d2
//	//d;c5,d3
//	//e;e4,a1
//	//b2Ϊ��a3,e4��,a1��C1��d2��,����d2��b2��Ϊ�����Դ���;
//	//b2Ϊ��,ab���滰Ϊ�����a3,e4��.e�ų�,d3��c5��c1��d2��
//	//A3E4 C5 D2 B1/
//	//
//	int arr[5][5] = { 0 };
//	scanf("%d", arr[0][0]);
//	if (arr[0][0] == arr[1][0] == 0){//b2Ϊ��˵�ļ�Ϊ0
//		arr[0][1] = 3; arr[1][2] = 4;
//		arr[4][0] = 0; arr[4][1] = 1;
//		arr[3][1] = 0; arr[3][0] = 5;
//		arr[2][0] = 0; arr[2][1] = 2;
//		printf("errow");
//	}
//	if(arr[0][0] == arr[1][0] == 2){
//		// b2Ϊ��
//		arr[0][1] = arr[1][1] = 0;
//		arr[4][0] = 0; arr[4][1] = 1;
//		arr[2][0] = 0; arr[2][2] = 2;
//		printf("��ȷ˳��ΪB1,D2,A3,E4,C5");
//	}
//	//printf("��ȷ˳��ΪB1,D2,A3,E4,C5");
//	system("pause");
//	return 0;
//}
//#define ROW 10
//#define COL 10
//int arr[ROW][COL];
//int main(){
//	void printf_sanjiao();
//	printf_sanjiao();
//	system("pause");
//	return 0;
//}
//void printf_sanjiao(){
//
//	for (int row = 0; row < ROW; row++){
//		//int arr[0][0] = 1;
//		arr[row][0] = 1;
//		arr[row][row] = 1;
//	}
//	for (int row = 2; row < ROW; row++){
//		for (int col = 1; col <=row - 1; col++){
//			arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
//		}
//
//	}
//	for (int row = 0; row < ROW; row++){
//		for (int col = 0; col <=row; col++){
//			printf("%4d", arr[row][col]);
//		}
//		printf("\n");
//}	
//	}
//int main(){//ֻ��ʹ������
//	int countbit(int n);
//	printf("%d",countbit());
//	system("pause");
//	return 0;
//}
//int countbit(int n){
//	int count=0; 
//	while (n)
//	{
//		if ((n &(0x1)) == 1){
//			++count;
//		}
//			n /= 2;
//	}
//	return count;
//}

//int main(){
//	int countbit(int n);
//	int num = -3;
//	printf("������һ�ĸ���Ϊ:%d\n",countbit(num));
//	system("pause");
//	return 0;
//}
//int countbit(int n){
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if (n&(1 << i)) 
//			++count;
//	}
//	return count;
//}
//ͳ��������ż�����ж��ٸ�1
//int main(){
//	int countbitoushu(int n);
//	int countbitjishu(int n);
//		int num = -3;
//		printf("������һ�ĸ���ż��λΪ:%d\n",countbitoushu(num));
//		printf("������һ�ĸ�������λΪ:%d\n", countbitjishu(num));
//		system("pause");
//		return 0;
//	system("pause");
//	return 0;
//}
//int countbitoushu(int n){
//	int oushu = 0;
//	for (int i = 0; i <16; i++){
//		if (n&(1 << 2 * i)){
//			++oushu;
//		}
//	}
//	return oushu;
//}
//int countbitjishu(int n){
//	int jishu = 0;
//	for (int i = 1; i <= 16; i++){
//		if (n & (1 << (2 * (i)-1)))
//			++jishu;
//	}
//	return jishu;
//}
////int main(){
////	void harvestoushu(unsigned n);
////	int a=43;
////	//scanf("%d", &a);
////	harvestoushu(a);
////	system("pause");
////	return 0;
////}
////void harvestoushu(unsigned n){
////	int count = 0;
////	int a[32] = { 0 };
////	int i = 0;
////	while(n){
////		a[i++] = n % 2;
////		n /= 2;
////		count++;
////	}
////	printf("����\n");
////	for (i = count; i >= 0; i -= 2){
////		printf("%d", a[i]);
////	}
////	printf("ż��\n");
////	for (i = count - 1; i >= 0; i -= 2){
////		printf("%d", a[i]);
////	}
////}
int main(){
	int countbit(int n);
	int a=78;
	int b = 2;
	int c;
	c = (a^b);
	//scanf("%d", &a);
	countbit(c);
	printf("%d", c);
	printf("\n");
	printf("%d", countbit(c));
	system("pause");
	return 0;
}
 int countbit(int n){
		int count = 0;
		for (int i = 0; i < 32; i++){
			if (n&(1 << i)) 
				++count;
		}
		return count;
	}