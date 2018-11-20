# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# define ROW 3
# define COL 3
int main(){
	int max, maxcol, k, andian, a[ROW][COL];
	int col=0;
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			scanf("%d", &a[row][col]);
		}
	}
		for (int row = 0; row < ROW; row++){
			max = a[row][0];//假设a[row][0]最大
			maxcol = 0;//将列号0赋值给maxcol保存
			for (int col = 0; col < COL; col++){
			//找出第i行最大的数
				if (a[row][col]>max){
					max = a[row][col];//将本行最大存到max
					maxcol = col;//将本行最大的列数存到maxcol
				}
			}
		}
		andian = 1;//假设鞍点为1
		for (k = 0; k < ROW; k++){
			if (max>a[k][maxcol]){
				andian = 0;//不是同列最小不是鞍点
				continue;
			}
			if (andian == 1){
				printf("%d%d %d %d\n",col,maxcol,max);
//// 输出鞍点的值和所在的行列
break;
			}
		}
		if (andian != 1)//鞍点不存在
		{
			printf("not exist!\n");
		}
	system("pause");
	return 0;
}
//二分法查找
//# define N 8
//int main(){
//	int arr[N];
//	int num;
//	int left = 0;
//	int sign;
//	int flag = 1;
//	int loca;
//	int right = (sizeof(arr)/sizeof(arr[0]))-1;
//	int mid = (left + right) / 2;
//	char c;
//	printf("请输入数组:\n");
//	for (int i = 0; i < N; i++){
//		scanf("%d", &arr[i]);
//	}
//	while (flag){
//		printf("请输入你要查找的数num:\n");
//		scanf("%d", &num);
//		sign = 0;
//		if (num<left || num>right){
//			loca = -1;
//		}
//		while ((!sign) && (left <= right)){
//			if (num == arr[mid]){
//				loca = mid;
//				sign = 1;
//				printf("found%d\n", loca);
//			}
//			else if (num < arr[mid]){
//				right = mid - 1;
//			}
//			else {
//				left = mid + 1;
//			}
//		}
//
//		if (!sign || loca == -1){
//			printf("找不到%d\n", num);
//		}
//		printf("继续找");
//		scanf("%c", &c);
//		if (c == 'N' || c == 'n'){
//			flag = 0;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//统计一篇文章的字符字母空格等有多少个
//# define ROW 3
//# define COL 10
//int main(){
//	char arr[ROW][COL];
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (int row = 0; row < ROW; row++){
//		printf("请输入句子%d\n", row+ 1);
//		gets(arr[row]);
//		for (int col = 0; col < COL; col++){
//			if ((arr[row][col]) >= 'A' && (arr[row][col] <= 'A'))
//				a++;
//			else if ((arr[row][col]) >= 'a' && (arr[row][col] <= 'z'))
//				b++;
//			else if ((arr[row][col]) >= '0' && (arr[row][col] <= '9'))
//				c++;
//			else if ((arr[row][col]) == ' ')
//				d++;
//			else
//				e++;
//		}
//	}
//	printf("大写字母有:a=%d", a);
//	printf("小写字母有:b=%d", b);
//	printf("数字有:c=%d", c);
//	printf("空格有:d=%d", d);
//	printf("其他有:e=%d", e);
//	system("pause");
//	return 0;
//}
//输出一个平行四边形
//# define ROW 10
//int main(){
//	void printfline(int space_cnt, int star_cnt);
//	for (int i = 1; i <=ROW; i++){
//		printfline(i-1 , ROW);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//void printfline(int space_cnt,int star_cnt){
//	for (int i = 0; i < space_cnt; i++){
//		printf(" ");
//	}
//	for (int i = 0; i < star_cnt; i++){
//		printf("*");
//	}
//}
////密码第一个字母变成第26第i个变成第26-I+1,数字其他符号不变
//# define ROW 10
//int main(){
//	char mima[ROW];
//	char yuanwen[ROW];
//	int row = 0;
//	int n;
//	//for (; row < ROW; row++){
//		gets(mima);
//		printf("mima=%s", mima);
//	//}
//		while (mima[row] != '\0'){
//			if ((mima[row] >= 'a') && (mima[row] <= 'z'))
//				yuanwen[row] = 219 - mima[row];
//			else if ((mima[row] >= 'A') && (mima[row] <= 'Z'))
//				yuanwen[row] =155 - mima[row];
//			else
//				yuanwen[row] = mima[row];
//			//printf("yuanwen=%s", yuanwen);
//			row++;
//	}
//		printf("\n原文为:\n");
//		for (row = 0; row < ROW; row++)
//			//printf("原文为:\n");
//			putchar(yuanwen[row]);
//	system("pause");
//	return 0;
//}
//编写一个程序将两个字符串连接起来
//# define N 100
//# define B 10
//int main(){
//	char a[N];
//	char b[B];
//	int i = 0,j = 0;
//	printf("输出第一个字符串a[N]\n");
//		scanf("%s", a);
//		printf("输出第2个字符串b[B]\n");
//		scanf("%s", b);
//		while (a[i] != '\0'){
//			i++;
//		}
//		while (b[j] != '\0'){
//			j++;
//			a[i++] = b[j++];
//			a[i] = '\0';
//			//printf("新字符串为%s", a);
//			printf("%s", a);
//		}
//	system("pause");
//		return 0;
//}
//
//int main(){
//	char s1[80];
//	char s2[80];
//	int i = 0;
//	printf("输入s2\n");
//	scanf("%s", s2);
//	for (i = 0; i <=strlen(s2); i++){
//	
//		s1[i] = s2[i];
//	}
//	printf("复制到S1为%s", s1);
//	system("pause");
//	return 0;
//}
//float Max, Min;
//int main(){
//
//	float average(float arr[10]);
//	int i = 0;
//	float ave, arr[10];
//	for (; i < 10; i++){
//		scanf("%f", &arr[i]);
//	}
//		ave= average( arr);
//		printf("max=%f\n,min=%f\n,ave=%f\n", Max, Min, ave);
//	
//
//	system("pause");
//return 0;
//}
//float average(float arr[10]){////这里可以引入一个变量nfloat average(float arr[],int n)
//	int i = 1;
//	int n = 10;
//	float max;
//	float min;
//	float sum;
//	float average;
//	sum= Max = Min=arr[0];
//	for (i = 1; i <10; i++){////for(i=1;i<n;i++)
//		sum+=arr[i];
//		if (Max < arr[i])
//			Max = arr[i];
//		else if (arr[i] <Min)
//			Min = arr[i];
//	}
//	average = sum / 10;
//	return average;
//}

//int a = 7;
//int b = 5;
////区别局部变量和全局变量的区别
//int main(){
//	int max(int a, int b);
//	int a = 8;
//	printf("%d",max(a, b));//实际比的是max(8,5)而不是max(7,5)
//	system("pause");
//	return 0;
//}
//int max(int a, int b){
//	return(a > b ? a : b);
//}
//静态局部变量调用后值更新
//求1-5阶乘
//int main(){
//	int factor(int n);
//	int i = 1;
//	
//	for (; i <= 5; i++){
//		printf("%d!=%d\n",i, factor(i));
//	}
//	system("pause");
//    return 0;
//}
//int factor(int n){
//	static int f = 1;
//	f = n*f;
//	return f;
//}
//怎么改变变量的作用域
//找到三个数的最大值
//int main(){
//	int Max(int A, int B, int C);
//	 extern int A, B, C;//把外部变量的作用域扩展到此函数
//	scanf("%d%d%d",&A,&B,&C);
//	printf("Max=%d", Max(A, B, C));
//	system("pause");
//return 0;
//}
//int A, B, C;//定义外部变量
//int Max(int A, int B, int C){
//	int m;
//	m = A > B ? A : B;
//	if (C > m){
//		m = C;
//	}
//		return m;
//}
//用函数调用求两个整数的最大公约数和最小公倍数
//int main(){
//	int a, b,c,d;
//	int gongbeishu(int x, int y);
//	int gongyue(int x, int y);
//	scanf("%d%d", &a, &b);
//	c = gongyue(a, b);
//	printf("公约数=%d",c);
//	d = gongbeishu(a, b, c);
//	printf("公倍数=%d", d);
//	system("pause");
//	return 0;
//}
//int gongbeishu(int x, int y,int z){
//	return (x*y) / z;
//}
//int gongyue(int x, int y){
//	int swap(int* c, int *d);
//	int r;
//	if (y > x){
//		swap(&x, &y);
//	}
//	while (r = x%y != 0){
//		x = y;
//		y = r;
//	}
//	return y;
//}
//int swap(int* c,int *d){
//	int temp;
//	temp = *c;
//	*c = *d;
//	*d = temp;
//}
