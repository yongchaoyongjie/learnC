# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//#define N 5
//#define M 3
//float score[N][M];
//float a_studentcore[N];
//float a_core[M];
//int xueshen, kechen;
//int main(){
//	void average_astudent();
//	void score_average();
//	float find_highnumber();
//	float count_fangcha();
//	void input();
//	input();
//	average_astudent();
//	 score_average();
//	 int i;
//	 int j;
//	 float h;
//	 printf("\nNO core1 core2 core3 core4 core5ÿ��ѧ����ƽ����\n");
//	 for (i = 0; i < N; i++){
//		 printf("\n NO%2d", i + 1);//�ڼ�����
//		 for (j = 0; j < M; j++){
//			 printf("%8.2f", score[i][j]);
//		 }
//		 printf("%8.2f", a_studentcore[i]);
//	 }
//	 printf("\nÿ�ſε�ƽ����\n");
//	 for (j = 0; j < M; j++){
//		 printf("%8.2f", a_core[j]);
//	 }
//	 printf("\n");
//	 h = find_highnumber();
//	 printf("��ߵķ�Ϊ%7.2fΪ�ڼ���ѧ��%2d�ڼ��ſ�%2d\n", h, xueshen, kechen);
//	 printf("����%8.2f", count_fangcha);
//	 system("pause");
//	return 0;
//
//}
//void input(){
//	printf("����ÿ��ѧ���ĳɼ�\n");
//	for (int i = 0; i < N; i++){
//		printf("\n�����i+1��ѧ��%d\n", i + 1);
//		for (int j = 0; j < M; j++){
//			scanf("%f", &score[i][j]);
//		}
//	}
//}
//void average_astudent(){//ÿ��ѧ��������ƽ����
//	float sum;
//	for (int i = 0; i < N; i++){//ÿ�ſε�ƽ����
//		for (int j = 0,sum = 0.0; j < M; j++){
//			sum += score[i][j];
//			a_studentcore[i] = sum / M;
//		}
//	}
//}
//void score_average(){//M 10 N5
//	float sum = 0;
//	for (int j = 0; j <M; j++){//ÿ�ſε�ƽ����
//		for (int i = 0; i < N; i++){
//			sum += score[i][j];
//			a_core[j] = sum / N;
//		}
//	}
//}
//float find_highnumber(){
//	float high;
//	
//	 high = score[0][0];
//		for (int i = 0; i < N; i++){
//			for (int j = 0; j < M; j++){
//				if (high<score[i][j]){
//					high = score[i][j];
//					xueshen= i + 1;
//					kechen = j + 1;
//				}
//			}
//		}
//		return high;
//}
//float count_fangcha(){
//	float sum1=0.0;
//	float sum2=0.0;
//	for (int i = 0; i < M; i++){//a_studentcore[i]����xi
//		sum1 += (a_studentcore[i] * a_studentcore[i]) ;
//		sum2 += a_studentcore[i];
//	}
//	return (sum1 / N) - ((sum2)*(sum2) / (N*N));
//}
//#define N 10
//int main(){
//	void input(int num[],char name[N][12]);
//	void paixu(int num[], char name[N][12]);
//	void chaxun(int to_find, int num[], char name[N][12]);
//	char name[N][12];
//	int num[N],number,c,flag;
//	input(num, name);
//	paixu(num, name);
//	while (flag == 1){
//		printf("\n��������ѯ\n");
//		scanf("%d",&number);
//		chaxun(number, num, name);
//		printf("�������߽���(Y/N)\n");
//		getchar();
//		c = getchar();
//		if (c == 'N' || c == 'n'){
//		
//			flag = 0;
//		}
//	}
//	system("pause");
//	return 0;
//}
//void input(int num[],char name[N][12]){
//	int i;
//	for (i = 0; i < N; i++){
//		printf("�������\n");
//		scanf("%d",&num[i]);
//	
//	printf("����������\n");
//	getchar();
//	gets(name[i]);
//}
//	void paixu(int num[], char name[N][12]){
//		char temp2[12];
//		int min,temp1;
//		for (int i = 0; i < N - 1; i++){
//			min = i;
//			for (int j = i; j < N; j++){
//				if (num[min]>num[j]){//�Ź���
//					min = j;
//				}
//			}
//				temp1 = num[i];
//				strcpy(temp2, name[i]);
//				num[i] = num[min];
//				strcpy(name[i], name[min]);
//				num[min] = temp1;
//				strcpy(name[min], temp2);
//		}
//		printf("\n���Ϊ\n");
//		for (i = 0; i < N; i++){
//			printf("\n%5d%10s", num[i], name[i]);
//		}
//	}
//	void chaxun(int n,int num[], char name[N][12]){
//		int left = 0;
//		int right = N - 1;
//		int mid = 0; 
//		int loca = 0;
//		int sign = 1;
//		/*while (left <= right){
//			mid = (left + right) / 2;
//			if (find < (num[mid])){
//				right = mid - 1;
//			}
//			else if (find>(num[mid])){
//				left = mid + 1;
//			}
//			else{
//				break;
//			}
//		}
//		if (left <= right){
//			printf("�ҵ���%d\n", num[mid]);
//		}
//		else{
//			printf("û�ҵ�!\n");
//		}*/
//
//		if ((n<num[0]) || (n>num[N - 1])){
//			loca = -1;
//		}
//		while ((sign == 1) && (left <= right)){
//			mid = (right + left) / 2;
//			if (n == num[mid]){
//				loca = mid;
//				printf("NO.%d,����������%s\n",find, name[loca]);
//				sign = -1;
//			}
//			else if (n < num[mid]){
//				right = mid - 1;
//			}
//			else{
//				left = mid + 1;
//			}
//		}
//		if (sign == 1 || loca == -1){
//			printf("%dû���ҵ�");
//		}
//	}
//int main(){
//	int a = 8;
//	//a = a<< 1;//����1�൱�ڳ���2����1�൱�ڳ���2ǰ�����޷�����
//	a = a>> 1;
//	printf("%x\n", a);//%x16λ��ӡ
//		system("pause");
//		return 0;
//	}
//int main(){
//	//int a = 0;
//	//printf("%x\n", a | (1 << 3)); //0��ĳһλ��1���Ʋ�������|(1<<n)
//	int a = 8;
//	printf("%x\n", a&(~(1 << 3)));
//	//��ĳһλ��0����nȡ������
//	system("pause");
//	return 0;
//}
//��һ�������ڴ洢�ж�����1�ĸ������ܶԸ�������
//int main(){
//	int bitone(int num);
//	printf("�������1Ϊ:%d", bitone(3));
//	system("pause");
//	return 0;
//}
//int bitone(int num){
//	int count = 0;
//	while (num){
//		if (num % 2 == 1){
//			++count;
//		}
//			//num /= 2;
//			//num = num >> 1;
//		}
//return count; 
//}
//����a,b�����ȴ��С˳�����A��B
//int main(){
//	//int* p1;
//	//int* p2;
//	//int* p;
//	int *p1,*p2,*p;
//	
//	int a, b;
//	printf("������������\n");
//	scanf("%d%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b){
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//		printf("a=%d,b=%d\n", a, b);
//		printf("max=%d,min=%d\n", *p1, *p2);
//	system("pause");
//	return 0;
//}
//����������abc�ɴ�С���
//int main(){
//	void compare(int* a, int* b, int* c);
//	int a, b, c;
//	int *p1, *p2, *p3;
//	scanf("%d%d%d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	compare(p1,p2,p3);
//	printf("%d %d %d ",a,b,c);
//	system("pause");
//		return 0;
//}
//void compare(int* a,int* b,int* c){
//	void swap(int* a, int *b);
//	if (*a <*b)swap(a,b);
//	if (*a < *c)swap(a,c);
//	if (*b < *c)swap(b,c);
//}
//����������!!!���������ú������н�����ʱ��
void swap(int* a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	void compare(int* a, int* b, int* c);
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	compare(&a,&b,&c);
	printf("%d %d %d ", a, b, c);
	system("pause");
	return 0;
}
void compare(int* a, int* b, int* c){
	void swap(int* a, int *b);
	if (a <b)swap(&a, &b);
	if (a < c)swap(&a, &c);
	if (b < c)swap(&b,&c);
}
