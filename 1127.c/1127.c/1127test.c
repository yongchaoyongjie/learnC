# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//����ѧ�����ڽṹ�����������ѧ������Ϣ
//ָ��ṹ�������ָ��
//typedef struct Student{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//}Student; 
//	int main(){
//		//pָ��һ���ṹ�����stu���������÷��ȼ�
//		//(1)stu.name
//		//	(2)((*p).(name))
//		//	(3)(p->name)
//
//		Student stu[3] = { { 100, "lilin", 'M', 20 },
//		{ 101, "wangming", 'W', 21 }, { 102, "chenjie", 'M', 21 }
//		};
//		 Student *p=&stu[3];//����ָ��ṹ�����Student�ṹ����ָ��(�ṹ�������ָ�����)
//		printf("	No. Name   sex age\n");
//		for (; p < stu + 3; p++){//p ָ��ṹ��������Ԫ��,Ȼ��ָ����һ��
//			//p = stu;
//			printf("%5d%20s%2c%4d\n", p->num, p->name, p->sex, p->age);
//		}
//	system("pause");
//	return 0;
//}
//n���ṹ���������ѧ��ѧ���������Ź��γɼ�
//����������ʵ��(1)������input�������ݺ������ѧ����ƽ���ɼ�
//(2)��max�����ҵ�ƽ���ֳɼ���ߵ�ѧ��
//(3)��print����������û����ѧ������Ϣ
//# define N 3
//typedef struct Student{
//	int num;
//	char name[100];
//	char score[3];
//	float average;
//}Student;
//
//int main(){
//	void input(Student student[]);
//	Student Max(Student student[]);
//	void print(Student student);
//	Student student[N];
//	Student *p =&student[N];
//    input(p);
//	// Max(p);
//	 print(Max(p));
//	system("pause");
//	return 0;
//}
//void input(Student student[]){
//	int i;
//	printf("���������ѧ����ѧ�����������ųɼ�\n");
//	for (i = 0; i < N; i++){
//		scanf("%d%s%f%f%f", &student[i].num, &student[i].name,
//			&student[i].score[0], &student[i].score[3], 
//			&student[i].score[2]);
//		student[i].average = (student[i].score[0] + student[i].score[1]
//		+student[i].score[2]) / 3;
//	}
//}
//Student Max(Student student[]){//�ṹ������ĺ���
//	int i, m=0;
//	for ( i = 0; i < N; i++){
//	
//		if (student[m].average < student[i].average)
//			m = i;
//	}
//	return student[m];
//}
//void print(Student student){
//	printf("\n�ɼ���ߵ�ѧ��Ϊ:\n");
//	printf("ѧ��:%d\n����:%s\n���ſεĳɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ�:%6.2f\n",
//		student.num, student.name, student.score[0],
//		student.score[1], student.score[2], student.average);
//
//}
//�����򵥵ľ�̬����
//typedef struct Student{
//	int num;
//	float score;
//	struct Student* next;
//}Student;
//int main(){
//	Student a;
//	Student b;
//	Student c;
//	Student *head;
//	Student *p;
//	a.num = 100;
//	a.score = 89.5;
//	b.num = 101;
//	b.score = 90;
//	c.num = 102;
//	c.score = 85;
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;
//	while (p != NULL){
//		printf("%1d%5.1f\n", p->num, p->score);
//		p=p->next;
//	}
//	system("pause");
//	return 0;
//}
//����һ����̬�б�
//����һ��������
//# define LEN sizeof( struct Student)
//  struct Student{
//	long num;
//	float score;
//struct Student *next;
// };
//int n;
// struct Student *creat(void){
//	 struct Student *head;
//	 struct Student *p1,*p2;
//	n = 0;
//	p1=p2 = (struct Student *)malloc(LEN);
//	
//	scanf("%ld,%f",&p1->num,&p1->score);
//	head = NULL;
//	while (p1->num!= 0){
//		n = n + 1;
//		if (n == 1){
//			head = p1;
//		}
//		else{
//			p2->next = p1;
//		}
//		p2 = p1;
//		p1 = (struct Student*)malloc(LEN);
//		scanf("%1d,%f", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return (head);
//}
//
//int main(){
//	struct Student *pt;
//	pt = creat();
//	printf("/nnum:%1d\nscore:%5.1f\n", pt->num, pt->score);
//	system("pause");
//	return 0;
//}