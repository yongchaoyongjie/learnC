# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//����ʮ��������С��һ���͵�һ������,�������һ��д��������
//(1)����ʮ����(2)���д���(3)���ʮ����
//void inputnum(int *num){
//	for(int i = 0; i < 10; i++){
//		scanf("%d", &num[i]);
//	}
//}
//void chuli(int *num){
//	int *max, *min, *p, temp;
//	max = min = num;
//	for (p = num + 1; p < num + 10; p++){
//		if (*p>*max){
//			max = *p;
//		}
//		else if (*p < *min){
//			min = *p;
//		}
//		temp = num[0];
//		num[0] = *min;
//		*min = temp;
//		if (max == num){
//			max = min;
//		}
//		temp = num[9];
//		num[9] = *max;
//		*max = temp;
//	}
//}
//void print(int *num){
//	int *p;
//	printf("�������Ϊ\n");
//	for (p = num; num < num + 10; num++){
//		printf("%d", *p);
//	}
//	printf("\n");
//}
//int main(){
//	int num[10];
//	inputnum(num);
//	chuli(num);
//	print(num);
//	system("pause");
//	return 0;
//}
//int main(){
//	void move(int[20], int, int);
//	int num[20], n, m, i;
//	printf("�ж��ٸ���\n");
//	scanf("%d", &n);
//	printf("��������:\n");
//	for (i = 0; i < n; i++){
//		scanf("%d", &num[i]);
//	}
//	printf("��Ҫ�ƶ���λ��Ϊ:\n");
//	scanf("%d", &m);
//	move(num, n, m);
//	printf("�������ǵ�λ��Ϊ\n");
//	for (i = 0; i < n; i++){
//		printf("%d", num[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//void move(int arr[20], int n, int m){
//	int *p, arr_end;
//	arr_end = *(arr + n - 1);
//	for (p = arr + n - 1; p>arr; p--){
//		*p = *p - 1;
//		*arr = arr_end;
//		m--;
//		if (m > 0){
//			move(arr, n, m);
//		}
//	}
//}
//n����Χ��һ��Ȧ��1-3������3�ĳ�ȥ��������µ���ԭ���ڼ�����λ
//10����369��ȥ����Ǹ���7��;n-n/3
//int main(){
//	int i, j, k, m, n, num[50], *p;
//	printf("�����˵ĸ���\n");
//	scanf("%d", &n);
//	p = num;
//	for (i = 0; i < n; i++)
//		*(p + i) = i + 1;
//		i = 0;
//		k = 0;
//		m = 0;
//		while (m < n - 1){
//			if (*(p + 1) != 0)
//				k++;
//
//			if (k == 3)
//
//				*(p + i) = 0;
//			k = 0;
//			m++;
//		}
//			i++;
//			if (i == n)
//				i = 0;
//		while (*p == 0)
//			p++;
//		printf("����Ǹ���Ϊ%d\n", *p);
//		system("pause");
//		return 0; 
//}
//дһ������,��һ���ַ����ĳ�����main�����������ַ������������
int main(){
	int length(char *p);
		int len;
	char str[20];
	printf("�������ַ���\n");
	scanf("%s", str);
	len = length(str);
	printf("�ַ����ĳ���Ϊ%d\n", len);
	system("pause");
	return 0;
}
int length(char *p){
	int n;
	n = 0;
	while (*p != '\0'){
		n++;
		p++;
	}
	return n;
}