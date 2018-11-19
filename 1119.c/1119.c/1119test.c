# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
# define N 10
//int main(){
//	void yidongpanzi(int n, char one, char two, char three);
//		//n个盘子123三个座
//		int m;
//		char one;
//		char two;
//		char three;
//	printf("请输入盘子的个数m:\n");
//	scanf("%d", &m);
//	printf("要移动盘子的步数为%d\n:", m);
//	yidongpanzi(m,one,two,three);
//	system("pause");
//	return 0;
//}
//void yidunpanzi(int n, char one, char two, char three){
//	void move(char x, char y); {
//		if (n == 1)
//			move(one, three);
//	}
//else
//{
//	        yidongpanzi(n - 1, one, three, two);
//			move(one, three);
//			yidongpanzi(n - 1, two, one, three);
//			
//		}
//	}
//void move(char x,char y){
//	printf("%c-->%c\n", x, y);
//
//}
//输入十个数求其中最大的元素和该数是第几个元素
//int main(){
//	int Max(int x, int y);
//	int arr[10],n;
//	int max = arr[0];
//	printf("请输入十个数字:\n");
//	for (int i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//		printf("\n");
//	}
//	for (int i =1; i<9; i++){
//		
//		/*if (arr[i]>max){
//			max= arr[i];
//			n = i+1;
//		}*/
//		if (Max(arr[i], max)>max){
//			max = arr[i];
//			n = i + 1;
//		}
//	}
//	printf("最大为%d\n为排序为%d\n",max,n);
//	system("pause");
//	return 0;
//}
//int Max(int x, int y){
//	return (x>y?x : y);
//}

//求一个班十个学生的平均成绩

//int main(){
//	float Average(float arr[10]);
//	float score[10], aver;
//	for (int i = 0; i < 10; i++){
//		scanf("%f", &score[i]);
//		aver= Average(score);
//		//printf("平均成绩为5.2%f\n", averragescore);
//	}
//	printf("平均成绩为%f\n", aver);
//	system("pause");
//	return 0;
//}
//float Average(float arr[10]){
//	float aver, sum = arr[0];
//	for (int i = 1; i < 10; i++){
//		sum =sum+arr[i];
//		aver = sum / 10;
//}
//	return aver;
//}
//两个班分别有5 个6个学生调用平均函数分别求两个班的平均成绩
//只要多加一个变量n,控制循环次数然后数组不指定长度
//int main(){
//	float Average(float arr[], int n);
//	float score1[5] = { 98.5, 97, 91.5, 60, 55 };
//	float score2[10] = { 67.5, 89.5, 99, 69.5, 77, 89.5, 76.5, 54, 60, 99.5 };
//	float aver1, aver2;
//		aver1 = Average(score1,5);
//		aver2 = Average(score2, 10);
//	
//	printf("第一个班平均成绩为%f\n", aver1);
//	printf("第2个班平均成绩为%f\n", aver2);
//	system("pause");
//	return 0;
//}
//float Average(float arr[],int n){
//	float aver, sum = arr[0];
//	for (int i = 1; i <n; i++){
//		sum = sum + arr[i];
//		aver = sum / n;
//	}
//	return aver;
//}
//用选择法对10个整数安装有小到大顺序排序
//选择法就是先将十个数中的最小数与a[0]
//对换再将a[1] - a[9]中的最小数与a[1]兑换...
//int main(){
//	void compare(int arr[], int n);
//		int a[10];
//		for (int i = 0; i < 10; i++){
//			scanf("%d", &a[i]);
//		}
//		compare(a, 10);
//		printf("顺序排列的数组为:\n");
//		for (int i = 0; i < 10; i++){
//			printf("%d", a[i]);
//			printf("\n");
//		}
//	system("pause");
//	return 0;
//}
//void compare(int arr[],int n){
//	int swap(int* x, int* y);
//	int i, j;
//	int k;
//	for (i = 0; i < n-1; i++){//从0~n-1小于n-1的数剩下那个数为比较的数
//		k = i;
//		for (j = i + 1; j < n; j++){//从1~n第一个数为被比较的
//			//数一直到小于第n个数
//			if (arr[j] < arr[k]){
//				k = j;	
//			}
//		}
//		swap(&arr[k], &arr[i]);
//	}
//}
//int swap(int* x, int* y){
//	int temp;
//	temp=*x;
//	*x = *y;
//	*y = temp;
//}
//有一个3*4的矩阵求所有元素中的最大值
//int main(){
//	int Maxjuzhen(int arr[][4]);
//	int arr[3][4] = { { 1, 3, 5, 7, }, { 2, 4, 6, 8 }, 
//	{ 15, 17, 34, 12 } };
//	printf("数组中最大的数为%d\n", Maxjuzhen(arr));
//	system("pause");
//	return 0;
//}
//int Maxjuzhen(int arr[][4]){
//	int max = arr[0][0];
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			if (max < arr[row][col])
//				max = arr[row][col];
//		}
//		//return max;在这里返回则值只是第一行的最大值
//	}
//return max;
//}
//求3*3的整型矩阵对角线之和
//int main(){
//	int sum=0;
//	int add = 0;
//	int a[3][3];
//	for (int row = 0; row < 3; ++row){
//		for (int col = 0; col < 3; col++){
//			scanf("%d", &a[row][col]);
//		}
//		
//	}
//		for (int row = 0; row < 3; ++row){
//			sum += a[row][row];
//			add = a[2][0] + a[1][1] + a[0][2];
//		}
//		printf("sum=%d,add=%d",sum,add);
//	
//
//	system("pause");
//	return 0;
//}
//一个排序好的数组要求输入一个数后,按照原来排序的规律将他插入数组
//int main(){
//	int num;
//	int i;
//	int temp1;
//	int temp2;
//	int j;
//	int a[6] = { 1, 3, 5, 7, 9 };
//	for (int i = 0; i<6; i++){
//		printf(" %d", a[i]);
//	}
//	int end = a[4];
//	printf("请输入要插入的数字\n");
//	scanf("%d", &num);
//	if (num>end){
//		a[5] = num;
//	}
//	else{
//		for (i = 0; i < 5; i++){
//			if (a[i]>num){
//				temp1 = a[i];
//				a[i] = num;//将这个数插入第i的下标
//				for (j = i + 1; j < 6; j++){//第i的小标的下一个为j
//					temp2 = a[j];
//					a[j] = temp1;//由于第a[i]被num插入,则原来第a[i]
//					//的元素被顶到a[j],所以中间需要中间变量存储
//					temp1 = temp2;//然后在进行递归???
//				}
//				//break;//必须要用这个不然从插入的元素开始会
//				//一直输出一样的数字直到i执行完4之后才会让后面
//				//元素替代
//			}
//		}
//	}
//	printf("插入后的数组为:\n");
//	for (i = 0; i < 6; i++)
//		printf(" %d", a[i]);
//	system("pause");
//    return 0;
//}
//输出一个杨辉三角形要求10行
//int main(){
//     int i, j, a[N][N];
//	for (i = 0; i < N; i++){
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	for (i = 0; i < N; i++){
//		for (j = 0; j <=i; j++)
//			printf("%d\n",a[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//魔方阵:每行每列斜对角线和相等;
//规律;1必须在第一行的最中间位置
//eg:3*3,1在(12)则2在(33)那么3就在(21)就是每一个数存的位置就是上个数行减1列加1
//如果上个数行数为1则下个数的行数为n;
//如果按照规则这个位置上有数
//或者上一个数是第一行第n列则应该吧这个数
//放在上个数的下面
int main(){
	int a[15][15];
	int i, j, k, p, n;
	p = 1;
	printf("请输入n(1-15):\n");
	while (p == 1){
		printf("请输入n(1-15):\n");
		scanf("%d", &n);
		if ((n != 0) && (n <= 15) && (n % 2 != 0))
			p = 0;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = 0;
			j = (n / 2) + 1;
			a[1][j] = 1;//确定n阶的第一个元素1在第一行最中间
			for (k = 2; k <= n*n; k++)
			{
				i = i - 1;//确定下一个元素坐标行减1列加1
				j = j + 1;
				if ((i<1) && (j>n))
				{
					i = i + 2;
					j = j - 1;
				}
				else{
					if (i < 1)
						i = n;//判断行在最上面则下一次为第n行
					if (j>n)
						j = 1;//判断列在最右边则下一次成了1列
				}
				if (a[i][j] == 0)
					a[i][j] = k;
				else{
					i = i + 2;
					j = j - 1;
					a[i][j] = k;
				}
}
			for (i = 1; i <= n; i++){
				for (j = 1; j <= n; j++)
					printf("%5d", a[i][j]);
				printf("\n");
			}
			system("pause");
			return 0;

}