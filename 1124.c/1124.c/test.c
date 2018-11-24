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
//			printf("凶手为%c", killer);
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
//	//b2为真a3,e4假,a1真C1假d2真,但是d2与b2都为真所以错误;
//	//b2为假,ab后面话为真就是a3,e4真.e排除,d3假c5真c1假d2真
//	//A3E4 C5 D2 B1/
//	//
//	int arr[5][5] = { 0 };
//	scanf("%d", arr[0][0]);
//	if (arr[0][0] == arr[1][0] == 0){//b2为假说的假为0
//		arr[0][1] = 3; arr[1][2] = 4;
//		arr[4][0] = 0; arr[4][1] = 1;
//		arr[3][1] = 0; arr[3][0] = 5;
//		arr[2][0] = 0; arr[2][1] = 2;
//		printf("errow");
//	}
//	if(arr[0][0] == arr[1][0] == 2){
//		// b2为真
//		arr[0][1] = arr[1][1] = 0;
//		arr[4][0] = 0; arr[4][1] = 1;
//		arr[2][0] = 0; arr[2][2] = 2;
//		printf("正确顺序为B1,D2,A3,E4,C5");
//	}
//	//printf("正确顺序为B1,D2,A3,E4,C5");
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
//int main(){//只能使用正数
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
//	printf("二进制一的个数为:%d\n",countbit(num));
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
//统计数奇数偶数各有多少个1
//int main(){
//	int countbitoushu(int n);
//	int countbitjishu(int n);
//		int num = -3;
//		printf("二进制一的个数偶数位为:%d\n",countbitoushu(num));
//		printf("二进制一的个数奇数位为:%d\n", countbitjishu(num));
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
////	printf("奇数\n");
////	for (i = count; i >= 0; i -= 2){
////		printf("%d", a[i]);
////	}
////	printf("偶数\n");
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