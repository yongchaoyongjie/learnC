# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//输入两个人的学号姓名成绩输出成绩最高的学号姓名成绩
//struct Student{
//	int num;
//	char name[100];
//	float score;
//};// student1, student2;在这定义是student1student2是全局变量
//typedef struct Student Student;//将struct Student 定义为Student
//
//int main(){
//	 Student student1;
//	  Student student2;
//	scanf("%d%s%f", &student1.num, student1.name,&student1.score);
//	scanf("%d%s%f", &student2.num, student2.name, &student2.score);
//	if (student1.score > student2.score){
//		printf("%2d %2s %2.0f", student1.num, student1.name, student1.score);
//	}
//	else{
//		printf("%2d %2s %2.0f", student1.num, student1.name, student1.score);
//		printf("\n");
//		printf("%2d %2s %2.0f", student2.num, student2.name, student2.score);
//	}
//	system("pause");
//	return 0;
//}
//3候选人每个选民投一票要求先后输入备选人的名字输出各个人的投票数
//输入被选人的姓名然后与数组元素中的名字比较相同则票数加1
//struct Person{
//	char name[100];
//	int num; 
//};
//typedef struct Person Person;
// //Person beixuanren[3] = { "chen", 0, "yong", 0, "jie", 0 };
// //定义结构体数组并初始化
//int main(){
//	Person beixuanren[3] = { "chen", 0, "yong", 0, "jie", 0 };
//	//定义数组结构体并初始化
//	char beixuanren_name[20];
//	for (int i = 1; i <= 5; i++){
//		//十个人投票
//		scanf("%s", beixuanren_name);
//		if (strcmp(beixuanren_name, beixuanren[i].name) == 0){
//			beixuanren[i].num++;
//		}
//	}
//	printf("\n结果为\n");
//	for (int i = 0; i < 3; i++){
//		printf("%5s %1d",beixuanren[i].name ,beixuanren[i].num);
//	}
//	system("pause");
//	return 0;
//}
//n个学生包括学号姓名成绩要求按照成绩的高低输出学生信息
//为什么出现烫?Student message[1000]结构体数组定义的太小就会出现

//struct Student{
//	int num;
//	char name[100];
//	float score;
//};
//typedef struct Student Student;
//int main(){
//	int k=0;
//	Student message[1000] = { { 101, "zhang", 78 }, { 102, "wang", 98.5 },
//	{ 103, "li", 86 }, { 104, "sun", 100 } };
//	 int n = 5;//定义常变量
//	Student temp;
//	for (int i = 0; i < n - 1; i++){
//		k = i;
//		for (int j = i + 1; j<n; j++){
//			if (message[j].score>message[i].score){
//				k = j;
//				temp = message[k];
//				message[k] = message[i];
//				message[i] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++){
//		printf("%6d%8s%6.2f\n", message[i].num, 
//			message[i].name, message[i].score);
//	}
//	system("pause");
//	return 0;
//}
//结构体指针
//
//struct Student{
//	int num;
//	char name[20];
//	char sex;
//	float score;
//};
//typedef struct Student Student;
//int main(){
//	Student student1;
//	Student *p;//定义一个结构体指针这个指针的类型为Student
//	p = &student1;//p指向student1
//	student1.num = 101;
//	strcpy(student1.name, "lili");//将lili复制给student1.name
//	student1.sex = 'm';
//	student1.score = 98.5;
//	printf("学号%1d\n名字%s\n性别%2c\n成绩%5.1f\n",(*p).num, (*p).name, (*p).sex, (*p).score);
//	system("pause");
//	return 0;
//}
//指向结构体数组的指针
//三个学生信息放在结构体数组中输出全部学生的信息
//struct Student{
//	int num;
//	char name[100];
//	char sex;
//	int age;
//};
//typedef struct Student Student;
//Student student[3] = { { 101, "li", 'm', 18 }, { 102, "zhang", 'm', 19 },
//{ 103, "wang", 'g', 20 } };
//int main(){
//	/*Student student[100] = { { 101, "li", 'm', 18 }, { 102, "zhang", 'm', 19 },
//	{ 103, "wang", 'g', 20 } };*/
//	Student *p;
//	for (p = student; p < student+3; p++){
//	//使p为struct Student类
//	//使p指向结构体数组的首元素
//	//使p指向结构体数组的下一个元素
//		printf("%5d%20s%2c%4d\n", p->num, p->name, p->sex, p->age);
//	}
//	system("pause");
//	return 0;
//}
//用结构体变量和结构体变量指针作函数参数
# define N 3
struct Student
{
	int num;
	char name[100];
	char score[3];
	float aver;
};
//typedef struct Student St;
int main(){
	void input(struct Student a[]);
	struct Student Max(struct Student a[]);
	void print(struct Student a);
	struct Student a[N],*p=a;
	input(p);
	print(Max(p));
	system("pause");
	return 0;
}
void input(struct Student a[]){

	printf("请输入三个学生的学号姓名成绩和平均成绩\n");
	for (int i = 0; i < N; i++){
		scanf("%d%s%f%f%f%f", &a[i].num, 
			a[i].name,
			&a[i].score[0],
			& a[i].score[1], 
			& a[i].score[2]);
		a[i].aver = (a[i].score[0] + a[i].score[1] +
			a[i].score[2]) / 3;
	}
}
struct Student Max(struct Student a[]){
	int m = 0;
	int i;
	for (i = 0; i < N; i++){
		if (a[i].aver>a[m].aver){
			m = i;
		}
	}
	return a[m];
}
void print(struct Student a){
	printf("输出最高成绩的学生信息\n");
	printf("学号%d\n姓名%s\n三门课成绩%5.1f%5.1f%5.1f平均成绩%5.1f",
		a.num, a.name, a.score[0], a.score[1], a.score[2], a.aver);
}