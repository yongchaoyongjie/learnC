# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
//��1-10�������
//int main(){
//	int i, a[10];
//	for (i = 0; i <= 9; ++i){
//		a[i] = i;
//	}
//	for (i = 9;i >= 0; --i){
//		printf("%d\n",a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//����ʮ����ð�ݷ��Ƚ�
//int main(){
//	int a[10] = { 0 };
//	int i, j, t;
//	printf("������ʮ����:\n");
//	for (i = 0; i < 10; ++i){
//		scanf("%d", &a[i]);
//		printf("\n");
//	}
//	for (j = 0; j < 10; ++j){
//		for (i = 0; i < 9-j; i++){
//			if (a[i]>a[i + 1]){//��a[i]<a[i+1]���ǴӴ�С����
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++){
//		printf("%3d\n", a[i]);
//	}
//
//	
//	system("pause");
//	return 0;
//}
//��a[2][3]={{1,2,3},{4,5,6}}�浽��һ����ά������
//a[3][2]={{1,4}{2,5},{3,6}}
//int main(){
//	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int b[3][2] = {};
//	int i,j;
//	printf("����a[2][3]Ϊ:\n");
//	for (i = 0; i <= 1;++i){
//		for (j = 0; j <= 2; j++){
//			printf("%5d", a[i][j]);
//			b[j][i] = a[i][j];
//		}
//		printf("\n");
//	}
//	printf("����b[3][2]Ϊ:\n");
//	for (i = 0; i <= 2; ++i){
//		for (j = 0; j <= 1; j++){
//			printf("%5d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//return 0;
//}
//����һ���ַ�ͳ���ж��ٵ���,���ʼ��ÿպŸ���
//int main(){
//	char str[81];
//	int num = 0, word = 0, i;
//	char c;
//	gets(str);
//	for (i = 0; (c = str[i]) != '\0'; i++){
//		if (c == ' ')
//			word = 0;
//
//		else if (word == 0){
//			word = 1;//������ǿո�ʹword��num +1
//			num++;
//		}
//	}
//	printf("��仰һ���е���:num=%d\n", num);
//	system("pause");
//	return 0;
//}
//�������ַ����ҳ���������һ��
//int main(){
//	char str[3][1000];
//	char shuzu[1000];//����һ��һά������Ϊ��������ʱ����
//	int i = 0;
//	
//	for (; i < 3; i++){
//		gets(str[i]);
//		if (strcmp(str[0],str[1])>0){
//			strcpy(shuzu,str[0]);//�����ַ���str[0]��һά����
//		}
//		else{
//			strcpy(shuzu,str[1]);
//		}
//		if (strcmp(str[2],shuzu) > 0){
//
//			strcpy(shuzu,str[2]);
//		}
//		
//	}
//	printf("�����ַ���Ϊ:\n");
//	printf("%s\n",shuzu);
//	system("pause");
//	return 0;
//}
//
//���ں���������,����������������,�������ʼ��λ��.Ȼ����ܵ���,���ֻ���õ�����ֻ�ܷ���mainǰ��
//int main()
//{
//	float add(float x, float y);
//	float a, b, c;
//	printf("������������:\n");
//	scanf("%f%f", &a, &b);
//	c = add(a, b);
//	printf("sum is%f\n", c);
//	
//	system("pause");
//	return 0;
//}
//float add(float x, float y){
//	float z;
//	z = x + y;
//	return z;
//}
//�����ĸ������ҵ��������������ú���Ƕ��ʵ��
//int main(){
//	int a, b, c, d,max;
//	int max4(int a, int b, int c, int d);
//	printf("�������ĸ�����:\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	max=max4(a, b, c, d);
//	printf("max=%d\n",max);
//	system("pause");
//	return 0;
//	}
//int max4(int a, int b, int c, int d){
//	int max2(int a, int b);
//	/*int m;
//	m = max2(a, b);
//	m = max2(c, m);
//	m = max2(d, m);
//	return m;*/
//	return max2(d,(max2(c, max2(a, b))));
//}
//int max2(int a, int b){
//
//	/*if (a >= b)
//		return a;*/
//	return(a > b ? a : b);
//}
//�����ݹ�,���ú����������ֳ���ֱ�ӻ��߼�ӵص��øú�������
//eg:5��ѧ��һ����һ��������,��һ��10��,������ѧ������
//int nianling(int n){//����ʵ��
//	int age;
//	if (n == 1)
//		age = 10;
//	else{
//		age =nianling(n-1) + 2;
//	}
//	return age;
//}
//int main(){
//	nianling(5);//��仰���Բ�д
//	printf("���������Ϊ:%d\n", nianling(5));
//	system("pause");
//	return 0;
//}
//
////int main(){�ú�������ʵ��
////	int nianling(int n);
////	printf("���������Ϊ:%d\n", nianling(5));
////	system("pause");
////	return 0;
////}
////int nianling(int n){
////	int age;
////		if (n == 1)
////			age = 10;
////		else{
////			age =nianling(n-1) + 2;
////		}
////		return age;
////}
//�ݹ�ʵ��n!
int main(){
	int factor(int n);
	int x;
	int sum;
	scanf("%d", &x);
	sum = factor(x);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int factor(int n){
	int f;
	if (n <= 0){
		printf("����\n");
	}
	if (n == 1)
		f = 1;
	else{
		f = n*factor(n - 1);
	
	}
	return f;
}