# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//输入十个数将最小的一个和第一个交换,最大和最后一个写三个函数
//(1)输入十个数(2)进行处理(3)输出十个数
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
//	printf("输出的数为\n");
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
//	printf("有多少个数\n");
//	scanf("%d", &n);
//	printf("请输入数:\n");
//	for (i = 0; i < n; i++){
//		scanf("%d", &num[i]);
//	}
//	printf("你要移动的位置为:\n");
//	scanf("%d", &m);
//	move(num, n, m);
//	printf("现在他们的位置为\n");
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
//n个人围成一个圈从1-3报数报3的出去问最后留下的是原来第几号那位
//10个人369出去最后那个是7号;n-n/3
//int main(){
//	int i, j, k, m, n, num[50], *p;
//	printf("输入人的个数\n");
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
//		printf("最后那个人为%d\n", *p);
//		system("pause");
//		return 0; 
//}
//写一个函数,求一个字符串的长度在main函数中输入字符串并输出长度
int main(){
	int length(char *p);
		int len;
	char str[20];
	printf("请输入字符串\n");
	scanf("%s", str);
	len = length(str);
	printf("字符串的长度为%d\n", len);
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