//# define _CRT_SECURE_NO_WARNINGS
//# include<stdio.h>
//# include<stdlib.h>
//# include<math.h>
//# include<string.h>
//int main(){
//	void harvestoushu(unsigned n);
//	int num = 25;
//	harvestoushu( num);
//	system("pause");
//	return 0;
//}
//void harvestoushu(unsigned n){
//		int count = 0;
//		int a[32] = { 0 };
//		int c[32] = { 0 };
//		int i = 0;
//		int j = 31;
//		double sum = 0;
//		while(n){
//			a[i++] = n % 2;
//			c[j--] = n % 2;
//			n /= 2;
//			//count++;
//			
//		}
//		printf("翻转前\n");
//		for (i =31; i>=0; i--){
//			printf("%d", a[i]);
//		}
//		printf("\n翻转后\n");
//
//		/*for (i = 0; i <= 31; i++){
//			printf("%d", a[i]);
//		}*/
//		for (j = 31; j >=0; j--){
//			printf("%d", c[j]);
//			if (c[j] % 2 != 0){
//				sum += pow(2, j);
//			}
//		}
//		printf("\n输出的数为\nsum=%5.0f", sum);
//	}
//int main(){
//	int averagenumber(int a, int b);
//	int a = 4, b = 10;
//	/*a = a >>1 ;
//	b = b >> 1;
//	c = a + b;*/
//	
//	printf("%d", averagenumber( a,  b));
//	system("pause");
//	return 0;
//}
//int averagenumber(int a, int b){
//	int c;
//	a = a >> 1;
//	b = b >> 1;
//	c = a + b;
//	return c;
//}
//1729变成1+7+2+9
//int main(){
//	int exchangge();
//	int a;
//	scanf("%d", &a);
//		printf("%d", exchange(a));
//	system("pause");
//	return 0;
//}
//int exchange(int n){
//	if (n < 10){
//		return n;
//	}
//	return n % 10 + exchange(n/10);
//}
//编程实现n的k次方
//int main(){
//	int factor(int n, int k);
//	int a = 2;
//	int b = 4;
//	printf("%d",factor(a,b));
//	system("pause");
//		return 0;
//
//}
//int factor(int n, int k){
//	if (n <= 0){
//		return 0;
//	}
//	if (k ==0){
//		return 1;
//	}
//	if (k ==1){ 
//		return n;
//	}
//	return n*factor(n, k - 1);
//}
//非递归法实现斐波那数 1 1 2 3 5 8
//int main(){
//	int no_feibo(int n); 
//		int a = 4;
//	printf("%d",no_feibo(a));
//	system("pause");
//	return 0;
//	/*int feibo(int n);
//	printf("%d", feibo(a));
//	system("pause");
//	return 0;*/
//}
//int no_feibo(int n){
//	int i;
//	int result = 0;
//	int i_1 = 1;//第i-1项
//	int i_2 = 1;//第i-2项
//	if ((n == 1)||(n==2))
//		return 1;
//	if (n<= 0);
//	return 0;
//	for (i = 3; i <= n; i++){
//		result = i_1 + i_2;
//		i_2 = i_1;
//		i_1 = result;
//	
//	}
//	return result;
//}
//int feibo(int n){
//	if (n < 0)
//		return 0;
//	if (n == 1 || n == 2)
//		return 1;
//	return feibo(n - 1) + feibo(n - 2);
//}
//
//int main(){
//	int arr[5];
//	int i;
//	printf("请输入数\n");
//	for (i = 0; i < 5; i++){
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <5; i++){
//		printf("%d", *(arr + i));//通过数组名和元素序号找到该元素
//		printf("%d", arr[i]);//通过数组元素下标找到元素
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
int main(){//用指针变量指向数组元素
	int arr[5];
	int i;
	int *p;
	printf("请输入数\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	for (p = arr; p < (arr + 5); p++)
		printf("%d", *p);
	printf("\n");
	system("pause");
	return 0;
}//先用指针指向首地址,然后p++,直到执行到arr+5为止;