# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//# define MAX 1000
//int main(){
//	int htoi(char s[]);
//	char t[MAX];
//	int c, i, flag, flag1;
//	printf("������ʮ��������\n");
//	while ((c = getchar() != '\0'&&i < MAX&&flag1)){
//		if (c >= '0'&&c <= '9' || c >= 'a'&&c <= "f"
//			|| c >= 'A'&&c <= 'F'){
//			flag = 1;
//			t[i++] = c;
//		}
//		else if (flag){
//			t[i] = '\0';
//			printf("ʮ������%d\n", htoi(t));
//			printf("�������ǲ�����?");
//			c = getchar();
//			if (c == 'N' || c == 'n'){
//				flag1 = 0;
//			}
//			else{
//				flag = 0;
//				i = 0;
//				printf("\n������һ������:");
//			}
//		}
//	}
//	system("pasue");
//	return 0;
//}
//int htoi(char s[]){
//	int i, n;
//	n = 0;
//	for (i = 0; s[i] != '\0'; i++){
//		if (s[i] >= '0'&&s[i] <= '9'){
//			n = n * 16 + s[i] - '0';
//		}
//		if (s[i] >= 'a'&&s[i] <= 'f'){
//			n = n * 16 + s[i] - 'a' + 10;
//		}
//		if (s[i] >= 'A'&&s[i] <= 'F'){
//			n = n * 16 + s[i] - 'A' + 10;
//		}
//	}
//	return n;
//}
//�ݹ鷨��һ������nת�����ַ���
//int main(){
//
//	void exchange(int n);
//	int num = 0;
//	printf("������һ����\n");
//	scanf("%d", num);
//	printf("����������\n");
//	if (num < 0){//С��0������һ������Ȼ��������һ���ո�
//		putchar('-');
//		putchar(' ');
//		num = num;
//	}
//		exchange(num);
//		printf("\n");
//		system("pause");
//		return 0;
//
//}
//	void exchange(int n){
//		int i;
//		if ((i = n / 10) != 0){
//			exchange(i);
//			putchar(n % 10 + '0');
//			putchar(32);
//		}
//	}
//
//���������ռ�������ǵڼ���
//int main(){
//	int sum_day(int month, int day);
//		int leap(int year);
//		int year, month, day;
//		printf("������������\n");
//		scanf("%d,%d,%d",&year,&month,&year);
//		printf("%d%d%d", year, month, day);
//		day = sum_day(month, day);
//		day = day + 1;
//		printf("���ǽ����:%d��\n");
//		system("pasue");
//		return 0;
//}
//int sum_day(int month, int day){
//	int day_tab[13] = { 0, 31, 28, 31, 30, 31, 30,
//		31, 31, 30, 31, 30, 31 };
//	int i;
//	for (i = 1; i < month; i++){
//		day += day_tab[i];
//		return day;
//	}
//}
//	int leap(int year){
//		if(leap ==(year % 4 == 0 && year % 100 != 0 ||
//			year % 400 == 0))
//		return leap;
//	}
//��ָ��,����������������С����˳�����
//int main(){
//	void swap(int *a, int *b);
//	int a, b, c;
//	int *p1, *p2, *p3;
//	printf("������������\n");
//	scanf("%d,%d,%d",&a,&b,&c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	if (a > b){
//		swap(p1, p2);
//	}
//	if (a > c){
//		swap(p1, p3); 
//	}
//	if (b > c){
//		swap(p2, p3);
//	}
//	printf("%d%d%d", a, b, c);
//	system("pause");
//	return 0;
//}
//void swap(int *a, int*b){
//	int temp;
//	if (a > b){
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}
//int main(){
//	void swap(char* ,char*);
//	char str1[20];
//	char str2[20];
//	char str3[20];
//	printf("�����������ַ���\n");
//	gets(str1);
//	gets(str2);
//	gets(str3);
//	if (strcmp(str1, str2) > 0){
//		swap(str1, str2);
//	}
//	if (strcmp(str1, str3) > 0){
//		swap(str1, str3);
//	}
//	if (strcmp(str2, str3) > 0){
//		swap(str2, str3);
//	}
//	printf("˳��Ϊ\n");
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	system("pause");
//	return 0;
//}
//void swap(char*p1, char*p2){
//	char p[20];
//	strcpy(p, p1);//p1���Ƶ�p
//	strcpy(p1,p2);//p2���Ƶ�p1
//	strcpy(p2, p);//p���Ƶ�p2
//}
