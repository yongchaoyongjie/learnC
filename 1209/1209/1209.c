# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
# include<string.h>
//��ָ������ָ���������Ĳ���(*p)(int ,int)�������ָ������ָ��Ȼ��
//Ȼ����fun ������int (*p)(int,int);��Ϊfun �����Ĳ���
//ָ������ָ����Ϊ�����������԰Ѻ�������ڵ�ַ�����β�����
//�Ϳ����ڱ����õĺ�����ʹ��ʵ��
//����������a,b���û�����123�������1����͸���2�����������2��������С
//3���
//int fun(int x, int y, int (*p)(int, int)){
//	int result;
//	 result = (*p)(x, y);
//	printf("%d\n", result);
//}
//int zmax(int x,int y){
//	int z;
//	if (x > y){
//		z = x;
//	}
//	else{
//		z = y;
//	}
//	printf("max=");
//	return z;
//	}
//int zmin(int x, int y){
//	int z;
//	if (x > y){
//		z = y;
//	}
//	else{
//		z = x;
//	}
//	printf("min=");
//	return z;
//}
//int zsum(int x, int y){
//	int sum;
//	sum = x + y;
//	printf("sum=");
//	return sum;
//}
//int main(){
//	int a, b,n;
//	int *p(int, int);
//	printf("������a,b\n");
//	scanf("%d%d", &a,&b);
//	a = 34; b = -21;
//	printf("������ģʽ123\n");
//	scanf("%d", &n);
//	if (n == 1){
//	fun(a, b, zmax);	
//	}
//	else if (n == 2){
//		
//	 fun(a, b, zmin);
//	}
//	else if (n == 3){
//	 fun(a, b, zsum);
//	}
//	system("pause");
//	return 0;
//}
///ָ������������ָ�����ɸ���ͬ���ַ���
//eg�����ɸ��ַ�������ĸ˳��(��С����)���
//void paixu(char *name[], int n){
//	char *temp;
//	int k,i,j;
//	for ( i = 0; i < n - 1; i++){
//		k = i;
//		for (j = i + 1; j < n; j++){
//			if (strcmp(name[k], name[j])>0){
//				k = j;
//			}
//		}
//		if (k != i){
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}
//	}
//}
//void print(char *name[],int n){
//	/*for (int i = 0; i < n; i++){
//		printf("%s\n", name[i]);
//	}*/
//	int i = 0;
//	char *p;
//	p = name[0];
//	while (i < n){
//	
//		p = *(name + i);
//		i++;
//		printf("%s\n", p);
//	}
//}
//int main(){
//	char *name[] = { "Follow me", "BASICC", "Great wall",
//		"FORTRAN", "Computer design" };
//	int n = 5;
//	paixu(name, n);
//	print(name, n);
//	system("pause");
//	return 0;
//}
///��һ��ָ��������Ԫ�طֱ�ָ��һ����������Ԫ��,��ָ��ָ�����ݵ�ָ������������������Ԫ�ص� ֵ
//int main(){
//	int a[5] = { 1, 3, 5, 7, 9 };
//	int *num[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
//	int **p;
//	p = num;//��pָ��num[0]
//	for (int i = 0; i < 5; i++){
//		printf("%d", **p);
//		p++;
//	}
//	system("pause");
//	return 0;
//}
///������̬��������5��ѧ���ɼ���һ�������������û�е���60,������ϸ�ɼ�

//void chek(int *p){
//	for (int i = 0; i < 5; i++){
//		if (p[i] < 60){
//			printf("%d\n", p[i]);
//		}
//	}
//}int main(){
//	int *p, i;
//	p = (int*)malloc(sizeof(int));
//	for (i = 0; i < 5; i++){
//		scanf("%d", p + i);
//	}
//	chek(p);
//	system("pause");
//	return 0;
//}
//int main(){
//	int daxie=0, xiaoxie=0, 
//		number=0, space=0,other=0, i = 0;
//	char *p;
//	char str[20];
//	printf("��������ĸ\n");
//	while ((str[i] = getchar()) != '\n'){
//		i++;
//	}
//		p = str; 
//		while (*p != '\n'){
//		
//			if ((*p >= 'A') && (*p <= 'Z')){
//				daxie++;
//			}
//			else if ((*p >= 'a') && (*p <= 'z')){
//				xiaoxie++;
//			}
//			else if ( (*p >= '0') && (*p<= '9')){
//				number++;
//			}
//			else if (*p == ' '){
//				space++;
//			}
//			else{
//				other++;
//			}
//			p++;
//		}
//	printf("��д��=%d", daxie);
//	printf("Сд��=%d", xiaoxie);
//	printf("������=%d", number);
//	printf("�ո���=%d", space);
//	printf("������=%d", other);
//	system("pause");
//	return 0;
//}
