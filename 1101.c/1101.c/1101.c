#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int lifang(int a)
{
	int b;
	b = a*a*a;
	//return b;
}
int main()
{
	int lifang(int a);
	int i = 100;
	int a;
	int b;
	int c;
	int d;
	printf("这个数是水仙数：\n");
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i-a * 100)/10;
		c = (i - a * 100) % 10;
		if (i == lifang(a) + lifang(b) + lifang(c))
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
int main()
{
	int a;
	int sum;

	scanf("%d", &a);
	if (0<a<10)
	sum = 12345 * a;
	if (10 < a < 100)
		sum=102030405*a;
	
		
	printf("%d", sum);
	system("pause");
		return 0;
}
