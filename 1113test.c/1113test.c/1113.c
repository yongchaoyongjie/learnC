#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
#include<stdbool.h>
//求两个数的公约数
//int maxgongyue(int a, int b)
//{//思路就是从1开始直到除到两个数的最小的位置
//	int max = 0;
//	int num = 1;//用来逐步试探的变量
//	while(num <= a&&a <= b)
//	{
//		if (a%num == 0 && b%num == 0)
//		{
//			max = num;
//		}
//		num++;
//	}
//	return max;
//}
//int main{
//	int c;
//	int d;
//	scanf("%d,%d",&c,&d);
//	printf("%d\n", maxgongyue(c,d));
//	system("pause");
//	return 0;
//}
//交换两个数组
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	
//	int arr2[] = { 9, 5, 2, 7 };
//	for (int i = 0; i<sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//		printf("%d\n", arr1[i]);
//	}
//	for (int i = 0; i<sizeof(arr1) / sizeof(arr1[0]);i++)
//	printf("%d\n", arr2[i]);
//	system("pause");
//	return 0;
//}

//计算1-1/2+1/3-1/4....到N;
//规律奇数项加偶数项减分子为1分母递增
//int main()
//{
//	
//	double sum=0;
//	for (int i = 1; i <= 100;++i)
//	{
//		if (i % 2 == 1)
//		{
//			sum = sum+(1.0 / (double)i);
//		}
//		else
//		{
//			sum = sum-(1.0 / (double)i);
//		}
//		
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}

//编写一个函数1-100一共出现多少次9，用调用函数的形式,用调用函数可以减少嵌套的循环
//int ninecount(int i)
//{
//	
//	int count = 0;
//	if (i % 10 == 9)//判断个位
//	{
//		count ++;
//	}
//	if (i / 10 == 9)//判断10位
//	{
//		count ++;
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	for (int x = 1; x <100; x++)
//	{
//		count+=ninecount(x);//统计一个数字个位十位一共有多少个9然后所有的都加起来
//		
//	}
//	printf("一共有：%d\n", count);
//	system("pause");
//	return 0;
//}

//void printfline(int blank, int star)
//{
//	for (int i = 0; i < blank; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < star; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//int main()
//{//打印上半区
//	for (int i = 1; i <= 6; i++)
//	{
//		printfline(7 - i, 2 * i - 1);
//	}
//	printfline(0, 2 * 7 - 1);//打印中间行
//	//打印下半区刚好与上半区相反
//	for (int i = 6; i >= 0; i--)
//	{
//		printfline(7 - i, 2 * i - 1);
//	}
//	system("pause");
//		return 0;
//}
//求水仙花束
//int isshuixianhua(int num)
//{
//	
//	int temp = num;//保存这个百位数
//	int x1 = num % 10;//提出个位
//	num = num / 10;
//	int x2 = num % 10;//提出十位
//	num = num / 10;
//	int x3 = num % 10;
//	if (x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == temp)
//	{
//		return 1;
//	}
//	
//}
//int main()
//{
//	for (int i = 100; i < 1000; i++)
//	{
//		if (isshuixianhua(i) )
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//		return 0;
//
//}
// int creatnum(int a,int n)//数字为a创建第n项内容
//{
//		if (a<=0 || a>9||n<=0){
//		return 0;
//	}
//	int num = 0;
//	for (int i = 0; i < n;i++){//函数创建第i项10的指数
//		num += a*pow(10, i);
//		return num;
//	}
//}
//int main()
//{
//	int sum = 0;
//	printf("%d\n", creatnum(2, 4));
//	/*for (int i = 1; i <= 5; i++)
//	{
//		sum += creatnum(2, 5);
//	}
//	printf("%d", sum);*/
//	system("pause");
//		return 0;
//}
//int Creatnum(int a, int n){
//	if (a <= 0 || a >= 10 || n <= 0){
//		return 0;
//	}
//	int num = 0;
//	for (int i = 0; i < n; ++i){
//		num=num+a*(int) pow(10,i);
//		
//	}
//	return num;
//}
//int main(){
//	printf("%d\n", Creatnum(2,5));
//	int sum = 0;
//	int a = 1;
//	int i = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		sum+= Creatnum(a,i);
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//输入小写输出大写，输入大写输出小写数字不输出,大写的ASCII码小
//int main(){
//	while (1){
//
//		int c = getchar();
//		if (c == EOF){
//			break;
//		}
//		if ('a' <= c&&c <= 'z'){
//			putchar(c - ('a' - 'A'));
//		}
//		else if ('A' <= c&&c <= 'Z'){
//			putchar(c + ('a' - 'A'));
//		}
//	
//		else if (c >= '0'&&c <= '9'){
//			continue;
//
//		}
//		else{
//			putchar(c);
//		}
//}
//	system("pause");
//	return 0;
//}
//求一元二次方程的解,求平方根函数sqrt

//int main(){
//	double a=0;
//	double b=0;
//	double c=0;
//	double x1;
//	double x2;
//	double p;
//	double q;
//	scanf("%lf%lf%lf",&a,&b,&c);//%7.2lf10个字节整数占七个小数占2个小数点1个
//	
////scanf %f单精度%lf双精度float对应%f，double对应%lf
//	if (b*b - 4 * a*c < 0){
//		printf("输入错误！\n");
//	}
//	else{
//		p = (-b) / 2 * a;
//		q = sqrt(b*b - 4 * a*c) / (2 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("x1=%7.2lf\nx2=%7.2lf", x1, x2);
//	}
//	system("pause");
//	return 0;
//}
//输入三个数并按照从小到大输出
//int swap(int *a,int  *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	float a;
//	float b;
//	float c;
//	scanf("%f%f%f", &a, &b, &c);
//
//	
//	if (b < a){
//		swap(&a,&b);
//	}
//	if (a > c){
//		swap(&a, &c);
//	}
//	if (b>c){
//		swap(&b, &c);
//	}
//	printf("a=%5.2fb=%5.2fc=%5.2f", a, b, c);
//
//	system("pause");
//	return 0;
//}
//调用一个函数#include<stdbool.h>;则可以用a=sorc<=60;意思是把小于等于60的数赋值给a判断分数为c
int main(){
	float score;
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float g;
	scanf("%f", &score);
	g = score<60;
	f = score >=60;
	e = score < 70;
	d = score >=70;
	c= score <80;
	b = score >= 80;
	a = score <= 100;


	if (f==true&&e==true){
		printf("the grade is C\n");
	}
	if (d == true && c == true){
		printf("the grade is B\n");
	}
	if (a == true && b == true){
		printf("the grade is A\n");
	}
	if ( g == true){
		printf("the grade is 不及格\n");
	}
	
	system("pause");
	return 0;
}
//if 函数的嵌套使用
//int main(){
//	int x;
//	int y;
//	scanf("%d", &x);
//	if (x >= 0){
//		if (x > 0){
//			y = 1;
//		}
//		else{
//			y = 0;
//		}
//	}
//	else{ 
//		y = -1;
//	}
//	
//	printf("x=%d,y=%d", x, y);
//
//
//	system("pause");
//	return 0;
//}