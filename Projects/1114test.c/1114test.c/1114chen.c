#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>

//i/*nt main(){
//	int num;
//	int place;
//	int ten_thousand, thousand, hundred, ten, indiv;
//	printf("请输入一个0-99999的数：\n");
//	scanf("%d", &num);
//	if (num > 9999){
//		place = 5;
//	}
//	else if (num > 999){ 
//		place = 4;
//	}
//	else if (num > 99){ 
//		place = 3;
//	}
//	else if (num> 9){ 
//		place = 2;
//	}
//	else{
//		place = 1;
//	}
//	printf("它的位数为：%d\n", place);
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//	ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//	indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
//	switch (place){
//	case 5:
//		printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d,%d, %d, %d, %d", indiv, ten, hundred, thousand, ten_thousand);
//		break;
//	case 4:
//		printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d,%d,%d,%d", indiv, ten, hundred, thousand);
//		break;
//	case 3:
//		printf("%d,%d,%d", hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d,%d,%d", indiv, ten, hundred);
//		break;
//	case 2:
//		printf("%d,%d", ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d,%d", indiv, ten);
//		break;
//	case 1:
//		printf("%d,", indiv);
//		printf("\n反序数字为：");
//		printf("%d", indiv);
//		break;
//	}
//	system("pause");
//	return 0;
//}*/
//求1+2+3+...+100//whlie好处是可以不知道i<=多少；而不像for,适用于条件缺失的情况
//int main(){
//	int i = 1;
//	int sum=0;
//	while (i <= 100){
//		sum += i;
//		++i;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//do while 和while的区别在于do while不论条件真假一定执行一次再判断而while是先判断在执行
//int main(){
//	int i = 1;
//	int sum = 0;
//	do{
//		sum += i;
//		++i;
//	} while (i <= 100);
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//100-200的素数偶数不用判断所以N+2加到它的开方还满足就行了
//int main(){
//	int n, i, k;
//	for (n = 101; n <=200; n=n+2){
//		k =(int)sqrt(n);
//		for (i = 2; i <= k; i++){
//			if (n%i == 0)
//				break;
//		}
//			if (i >= k + 1){
//				printf("%d\n", n);
//				//m = m + 1;
//		}
//			//if (m % 10 == 0)printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//求1！+2！+3！...+20!
//int multpl(int n)
//{
//	
//	if (n == 1){
//		return 1;
//	}
//	return n *multpl(n - 1);
//}
//int main(){
//	int i = 1;
//	int sum=0;
//	for (i = 1; i <= 20; i++){
//		sum += multpl(i);
//	}
//	printf("sum=%d", sum);
//	system("pause");
//	return 0;
//}
//求1-1000的完数6=1+2+3；28；496
int factor(int n){
	
	int j;
	int sum = 0;
	for(j = 1; j <n; j++){
		if (n%j == 0){
			sum += j;
		}
	}
	if (n == sum){
		//printf("%d\n", n);
		return 1;
	}
	return 0;
	
}
int main(){
	
	for (int i = 1; i <= 1000; i++){
		if (factor(i)==1){
			printf("%d\n", i);
		}
		//factor(i);
	}
	
	system("pause");
		return 0;
}
//int main(){
//
//	system("pause");
//	return 0;
//}
