#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
#include<stdbool.h>
//���������Ĺ�Լ��
//int maxgongyue(int a, int b)
//{//˼·���Ǵ�1��ʼֱ����������������С��λ��
//	int max = 0;
//	int num = 1;//��������̽�ı���
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
//������������
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

//����1-1/2+1/3-1/4....��N;
//�����������ż���������Ϊ1��ĸ����
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

//��дһ������1-100һ�����ֶ��ٴ�9���õ��ú�������ʽ,�õ��ú������Լ���Ƕ�׵�ѭ��
//int ninecount(int i)
//{
//	
//	int count = 0;
//	if (i % 10 == 9)//�жϸ�λ
//	{
//		count ++;
//	}
//	if (i / 10 == 9)//�ж�10λ
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
//		count+=ninecount(x);//ͳ��һ�����ָ�λʮλһ���ж��ٸ�9Ȼ�����еĶ�������
//		
//	}
//	printf("һ���У�%d\n", count);
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
//{//��ӡ�ϰ���
//	for (int i = 1; i <= 6; i++)
//	{
//		printfline(7 - i, 2 * i - 1);
//	}
//	printfline(0, 2 * 7 - 1);//��ӡ�м���
//	//��ӡ�°����պ����ϰ����෴
//	for (int i = 6; i >= 0; i--)
//	{
//		printfline(7 - i, 2 * i - 1);
//	}
//	system("pause");
//		return 0;
//}
//��ˮ�ɻ���
//int isshuixianhua(int num)
//{
//	
//	int temp = num;//���������λ��
//	int x1 = num % 10;//�����λ
//	num = num / 10;
//	int x2 = num % 10;//���ʮλ
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
// int creatnum(int a,int n)//����Ϊa������n������
//{
//		if (a<=0 || a>9||n<=0){
//		return 0;
//	}
//	int num = 0;
//	for (int i = 0; i < n;i++){//����������i��10��ָ��
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
//����Сд�����д�������д���Сд���ֲ����,��д��ASCII��С
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
//��һԪ���η��̵Ľ�,��ƽ��������sqrt

//int main(){
//	double a=0;
//	double b=0;
//	double c=0;
//	double x1;
//	double x2;
//	double p;
//	double q;
//	scanf("%lf%lf%lf",&a,&b,&c);//%7.2lf10���ֽ�����ռ�߸�С��ռ2��С����1��
//	
////scanf %f������%lf˫����float��Ӧ%f��double��Ӧ%lf
//	if (b*b - 4 * a*c < 0){
//		printf("�������\n");
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
//���������������մ�С�������
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
//����һ������#include<stdbool.h>;�������a=sorc<=60;��˼�ǰ�С�ڵ���60������ֵ��a�жϷ���Ϊc
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
		printf("the grade is ������\n");
	}
	
	system("pause");
	return 0;
}
//if ������Ƕ��ʹ��
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