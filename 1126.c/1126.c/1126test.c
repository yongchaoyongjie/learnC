# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//将数组a中n 个整数按相反的顺序存放
//就是a[0]与a[n-1]换,a[1]与a[n-2]换
//# define N 5
//int main(){
//	void exchange(int* x,int n);
//	int i,a[5] = { 1, 2, 3, 4, 5};
//	exchange(a,N);
//	for ( i = 0; i < 5; i++)
//		printf("%d",a[i]);
//	system("pause");
//	return 0;
//}
//void exchange(int a[],int n){
//	void swap(int* a, int* b);
//	int i, j,temp;
//	int m = (n - 1) / 2;
//	for (i=0;i<m;i++){
//		j = n - 1 - i;
//			swap(&a[i], &a[j]);
//		/*temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;*/
//	}
//}
//void swap(int* a, int* b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//#define N 8
//int main(){
//	void judge(int arr[], int n);
//	//int arr[N];
//	/*for (int i = 0; i < N; i++){
//		scanf("%d", &arr[i]);
//	}*/
//	int arr[N] = { 4, 2, 9, 12, 3 ,5,10,1};
//	judge( arr, N);
//	for (int i = 0; i < N; i++){
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//void judge(int arr[], int n){
//	int i = 0;
//	int 	m = (n - 1) / 2;
//	int j = 0;
//	int temp;
//		for (i = n - 1; i >= m; i--){
//			for (j = 0; j <= m; j++){
//				if (((arr[i]) % 2 == 1) && ((arr[j]) % 2 == 0)){
//					temp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = temp;
//				}
//			}
//		}
//}
//int main(){
//	int arr[] = { 9,5,2,7,5,2,9 };
//	//int temp = 0;
//	int i = 0;
//	int m = (sizeof(arr) / sizeof(arr[0]));
//	for (; i < m; i++){
//		arr[0] = arr[0] ^ arr[i];
//	}
//			
//	printf("%d", arr[0]);
//	
//	system("pause");
//	return 0;
//}
//# define N 3
//int main(){
//	int yangshi(int arr[N][N], int n);
//	int a=1;
//	int arr[N][N] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
//	/*scanf("%d", &a);*/
//	
//	if (yangshi(arr, a)==1){
//		printf("找到了");
//	}
//	else{
//		printf("没找到");
//	}
//	system("pause");
//		return 0;
//}
//int yangshi(int arr[N][N], int n){
//	int i = 0;
//	int j = N-1;
//	int c;
//
//	for (i = 0; i <=N-1; i++)
//	for (j = N - 1; j >= 0; j--){
//
//		if (n == arr[i][j]){
//			return 1;
//		}
//	}
//}
//定义结构体数组
//3个候选人每个选民只投一票,编程先求输入备选人的名字最后输出
//各人的得票结果
// struct Peple{
//	char name[20];//候选人的名字
//	int count;//候选人的票数
//	//定义结构体并初始化
//}leader[3] = { "lili", 0, "zhangxiao", 0, "sunxia", 0 };
//int main(){
//	int i;
//	int j = 0;
//	char leader_name[20];
//	scanf("%s", leader_name);
//	for (i = 0; i <= 10; i++){
//		if (strcmp(leader_name,leader[j].name) == 0)
//			leader[j].count++;
//	}
//	printf("结果\n");
//	printf("\n%5s:%d\n", leader[i].name, leader[i].count);
//	system("pause");
//	return 0;
//}
////学生学号姓名成绩
//struct Student{
//	int num;
//	char name[20];
//	float score;
//};
//int main(){
//	struct Student student[5] = { { 10101, "zhang", 78 },
//	{ 10103, "wang", 98.5 }, { 10106, "li", 86 },
//	{ 10108, "ling", 73.5 }, { 10110, "sun", 100 } };
//	struct Student temp;
//	//定义结构体变量temp,用作交换临时变量
//	const int n = 5;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++){
//		//k = i;
//		for (j = i + 1; j < n; j++){
//			if (student[j].score < student[i].score){
////进行成绩比较
//				//k = j;
//				temp = student[j];
//				student[j] = student[i];
//				student[i] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++){
//		printf("%6d%8s%6.2f\n", student[i].num, student[i].name,
//			student[i].score);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//指向结构体变量的指针
int main(){
	struct Student{
		long num;
		char name[20];
		char sex;
		float score;
	};
	struct Student stu_1;
	struct Student*p;
	p = &stu_1;
	stu_1.num = 10101;
	strcpy(stu_1.name, "lilin");
	stu_1.sex = 'M';
	stu_1.score = 89.5;
	struct Student stu_2;
	struct Student*q;
	q = &stu_2;
	stu_2.num = 10100;
	strcpy(stu_2.name, "zhang");
	stu_2.sex = 'G';
	stu_2.score = 90;
	//printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
		//stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
		(*p).num, (*p).name, (*p).sex, (*p).score);
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
		(*q).num, (*q).name, (*q).sex, (*q).score);
	system("pause");
	return 0;
}