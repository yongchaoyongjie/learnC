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
//ð�ݷ������С����ʹӴ�С
//void bubb(int* arr, int size)//��������
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
//void bubb(int* arr, int size)//ð����������
//{
//	int bound = 0;//boundΪ�߽�
//	for (; bound < size; ++bound)
//	{
//		int cur = size - 1;//cur�����ҵ���Сֵ��һ����������ʾ��ǰ���ĸ�Ԫ�رȽ�
//		for (; bound<cur; --cur)
//		{
//
//			if (arr[cur - 1] < arr[cur])//����Ԫ�رȺ���󲻷��Ͼͻ�������
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
//һ������ʵ�ֳ�ʼ���������

//void init(int arr[],int size)
//{
//	memset(arr, 0, size*sizeof(arr[0]));//sizeԪ�ظ����������ֽڸ���Ҫ����sizeof,SIZE100,sizeof(arr[0])Ϊ4
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
//#define SIZE 5//5��Ԫ��ÿ��Ԫ���ĸ��ֽ�һ����20��
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
//��10������������һ������̨����


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