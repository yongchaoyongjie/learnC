# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int main()
{
	
	int i;
	int n=0;
	int m=0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			n = n + 1;
			//printf("%d\n个位是9：", n);如果是99则两个都满足加两次
		}
		if (i / 10 == 9)
		{
			m = m + 1;
			//printf("%d十位是9的倍数：", m);
		}
		
	}
	printf("一共统计9的个数为：%d\n", m + n);
	system("pause");
	return 0;
}
//int main()
//{
//
//	int i;
//	int n = 0;
//	int m = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			n = n + 1;
//			//printf("%d\n个位是9：", n);如果是99则两个都满足加两次
//		}
//		if (i%100-i%10 == 90)
//		{
//			m = m + 1;
//			//printf("%d十位是9的倍数：", m);
//		}
//
//	}
//	printf("一共统计9的个数为：%d\n", m + n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int sum=0;
//	for (i = 1; i < 101; i++)
//	{
//		
//		if (i%2 == 0)
//		{
//			sum = sum - (1 / i);
//		}		
//		else{
//			sum = sum + (1 / i);
//		}
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}