# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//���������˵�ѧ�������ɼ�����ɼ���ߵ�ѧ�������ɼ�
//struct Student{
//	int num;
//	char name[100];
//	float score;
//};// student1, student2;���ⶨ����student1student2��ȫ�ֱ���
//typedef struct Student Student;//��struct Student ����ΪStudent
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
//3��ѡ��ÿ��ѡ��ͶһƱҪ���Ⱥ����뱸ѡ�˵�������������˵�ͶƱ��
//���뱻ѡ�˵�����Ȼ��������Ԫ���е����ֱȽ���ͬ��Ʊ����1
//struct Person{
//	char name[100];
//	int num; 
//};
//typedef struct Person Person;
// //Person beixuanren[3] = { "chen", 0, "yong", 0, "jie", 0 };
// //����ṹ�����鲢��ʼ��
//int main(){
//	Person beixuanren[3] = { "chen", 0, "yong", 0, "jie", 0 };
//	//��������ṹ�岢��ʼ��
//	char beixuanren_name[20];
//	for (int i = 1; i <= 5; i++){
//		//ʮ����ͶƱ
//		scanf("%s", beixuanren_name);
//		if (strcmp(beixuanren_name, beixuanren[i].name) == 0){
//			beixuanren[i].num++;
//		}
//	}
//	printf("\n���Ϊ\n");
//	for (int i = 0; i < 3; i++){
//		printf("%5s %1d",beixuanren[i].name ,beixuanren[i].num);
//	}
//	system("pause");
//	return 0;
//}
//n��ѧ������ѧ�������ɼ�Ҫ���ճɼ��ĸߵ����ѧ����Ϣ
//Ϊʲô������?Student message[1000]�ṹ�����鶨���̫С�ͻ����

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
//	 int n = 5;//���峣����
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
//�ṹ��ָ��
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
//	Student *p;//����һ���ṹ��ָ�����ָ�������ΪStudent
//	p = &student1;//pָ��student1
//	student1.num = 101;
//	strcpy(student1.name, "lili");//��lili���Ƹ�student1.name
//	student1.sex = 'm';
//	student1.score = 98.5;
//	printf("ѧ��%1d\n����%s\n�Ա�%2c\n�ɼ�%5.1f\n",(*p).num, (*p).name, (*p).sex, (*p).score);
//	system("pause");
//	return 0;
//}
//ָ��ṹ�������ָ��
//����ѧ����Ϣ���ڽṹ�����������ȫ��ѧ������Ϣ
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
//	//ʹpΪstruct Student��
//	//ʹpָ��ṹ���������Ԫ��
//	//ʹpָ��ṹ���������һ��Ԫ��
//		printf("%5d%20s%2c%4d\n", p->num, p->name, p->sex, p->age);
//	}
//	system("pause");
//	return 0;
//}
//�ýṹ������ͽṹ�����ָ������������
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

	printf("����������ѧ����ѧ�������ɼ���ƽ���ɼ�\n");
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
	printf("�����߳ɼ���ѧ����Ϣ\n");
	printf("ѧ��%d\n����%s\n���ſγɼ�%5.1f%5.1f%5.1fƽ���ɼ�%5.1f",
		a.num, a.name, a.score[0], a.score[1], a.score[2], a.aver);
}