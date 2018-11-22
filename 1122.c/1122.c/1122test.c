# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include<string.h>
//起泡法对输入十个字符按照由小到大顺序输出
//# define N 10
//int main(){
//	void compare(char str[]);
//	char str[N];
//	int flag,i;
//	for (flag = 1; flag == 1;){
//		scanf("%s",&str);
//		if (strlen(str) > N){
//			printf("erro");
//		}
//		else{
//			flag = 0;
//		}
//	}
//	compare(str);
//	printf("顺序为\n");
//	for (i = 0; i < N; i++){
//		printf("%c",str[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//void compare(char str[]){
//	char swap(char* a, char *b);
//	int i = 0;
//	for (int j=1; j < N; j++){//比的次数
//		for (int i = 0; (i < (N - j)) && (str[i] != '\0'); i++){
//			if (str[i]>str[i + 1])
//				swap(&(str[i]), &(str[i + 1]));
//		}
//	}
//}
//	char swap(char* a, char *b){
//		char temp;
//		temp = *a;
//		*a = *b;
	//	*b = temp;
	//}
//int main(){
//	/*double c=pow(10, 1);
//	printf("%f", c);*/
//	float diedai(float, float, float, float );
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a,&b,&c,&d);
//	printf("x=%10.7f\n", diedai(a, b, c, d));
//	system("pause");
//	return 0;
//}
//float diedai(float a,float b,float c,float d){
//	float x = 1, x0=0, f, f1;
//	while (fabs(x - x0) >= (exp(3))){///???
//		x0 = x;//????
//		f = ((a*x0 + b)*x0 + c)*x0 + d;
//		f1 = (3 * a*x0 + 2 * b)*x0 + c;
//		x = x0 - (f / f1);
//	}
//	return x;
//}
//#define N 10
//#define M 5
//float score[M][N];
//float a_stu[N];
//float a_cour[M];
//int r;
//int c;
//int main(){
//	int i, j;
//	float h;
//	float s_var(void);
//	float highest();
//	void input_st(void);
//	void aver_stu(void);
//	void aver_cour(void);
//	input_stu();
//	aver_stu();
//	aver_cour();
//	printf("\nNO.cour1 cour2 cour3 cour4 cour5 aver\n");
//	for (i = 0; i < N; i++){
//		printf("\nNO%2d", i + 1);
//		for (j = 0; j < M; j++){
//			printf("%8.2f", score[i][j]);
//			//printf("%8.2f", a_stu[i]);
//		}
//		printf("%8.2f", a_stu[i]);
//	}
//	printf("\naverage:");
//	for (j = 0; j < M; j++){
//		printf("%8.2f", a_cour[j]);
//	}
//		printf("\n");
//		h = highest();
//		printf("highest:%7.2f NO.%2d course%2d\n", h, r, c);
//		printf("variance%8.2f\n", s_var());
//		system("pause");
//	return 0;
//}
//void input_stu(void){
//	int i, j;
//	for (i = 0; i < N; i++){
//	}
//}
#define PEOPLE 10
# define DOOR 5
float score[PEOPLE][DOOR];
float student[PEOPLE];
float average_coure[DOOR]
int main(){
	void input_student_score();

	system("pause");
	return 0;
}
void input_student_score(){
	for (int i = 0; i < PEOPLE; i++){
		printf("请输入第i个学生%d\n", i + 1);
		for (int j = 0; j < DOOR; j++){
			scanf("%d", &score[i][j]);
		}
	}
}
