#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include <math.h>
# include<stdlib.h>
# include<time.h>
# include<string.h>
int swap(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
//冒泡法排序从小到大和从大到小
//void bubb(int* arr, int size)//将序排列
//{
//	int bound = 0;
//	
//	for (; bound < size; bound++)
//	{
//		int cur = size-1;
//		for (; bound <cur; cur--)
//		{
//			if (arr[cur-1] >arr[cur])
//			{
//				swap(&arr[cur], &arr[cur-1]);
//			}
//		}
//	}
//}
//void bubb(int* arr, int size)//冒泡升序排列
//{
//	int bound = 0;//bound为边界
//	for (; bound < size; ++bound)
//	{
//		int cur = size - 1;//cur辅助找到最小值的一个变量，表示当前对哪个元素比较
//		for (; bound<cur; --cur)
//		{
//
//			if (arr[cur - 1] < arr[cur])//后面元素比后面大不符合就换，升序
//			{
//				swap(&arr[cur], &arr[cur - 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 5, 2, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubb(arr, size);
//	for (int j = 0; j < size; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//	system("pause");
//	return 0;
//}
//一个数列实现初始化清空逆置

//void init(int arr[],int size)
//{
//	memset(arr, 0, size*sizeof(arr[0]));//size元素个数，整体字节个数要乘以sizeof,SIZE100,sizeof(arr[0])为4
//
//}
//void empty(int arr[], int size)
//{
//	init(arr, size);
//}
//void reverse(int arr[], int size)
//{
//	int left = 0;
//	int right = size-1;
//	if (size <= 1)
//	{
//		return;
//	}
//	while (left < right)
//	{
//		swap(&arr[left], &arr[right]);
//		++left;
//		--right;
//	}
//
//}
//#define SIZE 5//5个元素每个元素四个字节一共是20，
//
//int main()
//{
//	int arr[SIZE] = { 9, 5, 2, 7, 1 };
//	//init(arr, SIZE);
//	//empty(arr, SIZE);
//	reverse( arr,  SIZE);
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//求10和数里面最大的一个（擂台法）


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 44, 7, 8, 9 };
	int max = arr[0];
	for (int i = 1; i < sizeof(arr) / (sizeof(arr[0])); i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);
	system("pause");
	return 0;
}