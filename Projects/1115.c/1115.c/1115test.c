#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
# include<time.h>
int swap(int* a, int*b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//int main(){
//	double a = 2, b = 1, t;
//	double sum = 0;
//	for (double i = 1; i <= 20; i++){
//		sum = sum + (a / b);
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("sum=%16.10f\n", sum);
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 1;
//	double s = 100,h = s / 2;
//	for (i = 2; i <= 10; i++){
//		s = s + 2*h;
//		h = h / 2;
//	}
//	printf("s=%f\n", s);
//	printf("h=%f\n", h);
//	system("pause");
//	return 0;
//}
//int main(){
//	int total;//总共的桃子
//	int day = 9;//第9天吃的剩下一个第十天起来发现只有一个桃子
//	int x2 = 1;
//
//	while (day > 0){
//		total = 2 * (x2 + 1);//第八天吃完剩下多少个2*（x1+1）,然后将第一天的值变成前一天的值继续朝回推
//		x2 = total;
//		day--;
//	}
//	printf("total=%d\n", total);
//	system("pause");
//	return 0;
//}
//int main(){
//	float a,  x1, x2;
//	scanf("%f", &a);
//	x1= a / 2;
//	x2 = (x1 + (a / x1)) / 2;
//	///*while(fabs(x1-x2)>=pow(10,-5))
//	//{
//	//	x1 = x2;
//	//	x2 = (x1 + (a / x1)) / 2;
//	//
//	//}*/
//	do{
//		x1 = x2;
//		x2 = (x1 + (a / x1)) / 2;
//	} while (fabs(x1 - x2) >= pow(10, -5));
//	printf("the numeber is btween%5.2f to %8.5f\n", a, x1);
//	system("pause");
//	return 0;
//}
//
int main(){
	int p,r;
	int m = 0;
	int n = 0;
	scanf("%d%d",m,n); 
	if (n < m){
		swap(&n,&m);
	}
	p = m*n;
	while (m != 0){
		r = n%m;
		n = m;
		m = r;
	}
	printf("%d\n",n);
	printf("%d\n",p);
	system("pause");
	return 0;
}