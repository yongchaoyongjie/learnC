# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
# define N 10
//int main(){
//	void yidongpanzi(int n, char one, char two, char three);
//		//n������123������
//		int m;
//		char one;
//		char two;
//		char three;
//	printf("���������ӵĸ���m:\n");
//	scanf("%d", &m);
//	printf("Ҫ�ƶ����ӵĲ���Ϊ%d\n:", m);
//	yidongpanzi(m,one,two,three);
//	system("pause");
//	return 0;
//}
//void yidunpanzi(int n, char one, char two, char three){
//	void move(char x, char y); {
//		if (n == 1)
//			move(one, three);
//	}
//else
//{
//	        yidongpanzi(n - 1, one, three, two);
//			move(one, three);
//			yidongpanzi(n - 1, two, one, three);
//			
//		}
//	}
//void move(char x,char y){
//	printf("%c-->%c\n", x, y);
//
//}
//����ʮ��������������Ԫ�غ͸����ǵڼ���Ԫ��
//int main(){
//	int Max(int x, int y);
//	int arr[10],n;
//	int max = arr[0];
//	printf("������ʮ������:\n");
//	for (int i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//		printf("\n");
//	}
//	for (int i =1; i<9; i++){
//		
//		/*if (arr[i]>max){
//			max= arr[i];
//			n = i+1;
//		}*/
//		if (Max(arr[i], max)>max){
//			max = arr[i];
//			n = i + 1;
//		}
//	}
//	printf("���Ϊ%d\nΪ����Ϊ%d\n",max,n);
//	system("pause");
//	return 0;
//}
//int Max(int x, int y){
//	return (x>y?x : y);
//}

//��һ����ʮ��ѧ����ƽ���ɼ�

//int main(){
//	float Average(float arr[10]);
//	float score[10], aver;
//	for (int i = 0; i < 10; i++){
//		scanf("%f", &score[i]);
//		aver= Average(score);
//		//printf("ƽ���ɼ�Ϊ5.2%f\n", averragescore);
//	}
//	printf("ƽ���ɼ�Ϊ%f\n", aver);
//	system("pause");
//	return 0;
//}
//float Average(float arr[10]){
//	float aver, sum = arr[0];
//	for (int i = 1; i < 10; i++){
//		sum =sum+arr[i];
//		aver = sum / 10;
//}
//	return aver;
//}
//������ֱ���5 ��6��ѧ������ƽ�������ֱ����������ƽ���ɼ�
//ֻҪ���һ������n,����ѭ������Ȼ�����鲻ָ������
//int main(){
//	float Average(float arr[], int n);
//	float score1[5] = { 98.5, 97, 91.5, 60, 55 };
//	float score2[10] = { 67.5, 89.5, 99, 69.5, 77, 89.5, 76.5, 54, 60, 99.5 };
//	float aver1, aver2;
//		aver1 = Average(score1,5);
//		aver2 = Average(score2, 10);
//	
//	printf("��һ����ƽ���ɼ�Ϊ%f\n", aver1);
//	printf("��2����ƽ���ɼ�Ϊ%f\n", aver2);
//	system("pause");
//	return 0;
//}
//float Average(float arr[],int n){
//	float aver, sum = arr[0];
//	for (int i = 1; i <n; i++){
//		sum = sum + arr[i];
//		aver = sum / n;
//	}
//	return aver;
//}
//��ѡ�񷨶�10��������װ��С����˳������
//ѡ�񷨾����Ƚ�ʮ�����е���С����a[0]
//�Ի��ٽ�a[1] - a[9]�е���С����a[1]�һ�...
//int main(){
//	void compare(int arr[], int n);
//		int a[10];
//		for (int i = 0; i < 10; i++){
//			scanf("%d", &a[i]);
//		}
//		compare(a, 10);
//		printf("˳�����е�����Ϊ:\n");
//		for (int i = 0; i < 10; i++){
//			printf("%d", a[i]);
//			printf("\n");
//		}
//	system("pause");
//	return 0;
//}
//void compare(int arr[],int n){
//	int swap(int* x, int* y);
//	int i, j;
//	int k;
//	for (i = 0; i < n-1; i++){//��0~n-1С��n-1����ʣ���Ǹ���Ϊ�Ƚϵ���
//		k = i;
//		for (j = i + 1; j < n; j++){//��1~n��һ����Ϊ���Ƚϵ�
//			//��һֱ��С�ڵ�n����
//			if (arr[j] < arr[k]){
//				k = j;	
//			}
//		}
//		swap(&arr[k], &arr[i]);
//	}
//}
//int swap(int* x, int* y){
//	int temp;
//	temp=*x;
//	*x = *y;
//	*y = temp;
//}
//��һ��3*4�ľ���������Ԫ���е����ֵ
//int main(){
//	int Maxjuzhen(int arr[][4]);
//	int arr[3][4] = { { 1, 3, 5, 7, }, { 2, 4, 6, 8 }, 
//	{ 15, 17, 34, 12 } };
//	printf("������������Ϊ%d\n", Maxjuzhen(arr));
//	system("pause");
//	return 0;
//}
//int Maxjuzhen(int arr[][4]){
//	int max = arr[0][0];
//	for (int row = 0; row < 3; row++){
//		for (int col = 0; col < 4; col++){
//			if (max < arr[row][col])
//				max = arr[row][col];
//		}
//		//return max;�����ﷵ����ֵֻ�ǵ�һ�е����ֵ
//	}
//return max;
//}
//��3*3�����;���Խ���֮��
//int main(){
//	int sum=0;
//	int add = 0;
//	int a[3][3];
//	for (int row = 0; row < 3; ++row){
//		for (int col = 0; col < 3; col++){
//			scanf("%d", &a[row][col]);
//		}
//		
//	}
//		for (int row = 0; row < 3; ++row){
//			sum += a[row][row];
//			add = a[2][0] + a[1][1] + a[0][2];
//		}
//		printf("sum=%d,add=%d",sum,add);
//	
//
//	system("pause");
//	return 0;
//}
//һ������õ�����Ҫ������һ������,����ԭ������Ĺ��ɽ�����������
//int main(){
//	int num;
//	int i;
//	int temp1;
//	int temp2;
//	int j;
//	int a[6] = { 1, 3, 5, 7, 9 };
//	for (int i = 0; i<6; i++){
//		printf(" %d", a[i]);
//	}
//	int end = a[4];
//	printf("������Ҫ���������\n");
//	scanf("%d", &num);
//	if (num>end){
//		a[5] = num;
//	}
//	else{
//		for (i = 0; i < 5; i++){
//			if (a[i]>num){
//				temp1 = a[i];
//				a[i] = num;//������������i���±�
//				for (j = i + 1; j < 6; j++){//��i��С�����һ��Ϊj
//					temp2 = a[j];
//					a[j] = temp1;//���ڵ�a[i]��num����,��ԭ����a[i]
//					//��Ԫ�ر�����a[j],�����м���Ҫ�м�����洢
//					temp1 = temp2;//Ȼ���ڽ��еݹ�???
//				}
//				//break;//����Ҫ�������Ȼ�Ӳ����Ԫ�ؿ�ʼ��
//				//һֱ���һ��������ֱ��iִ����4֮��Ż��ú���
//				//Ԫ�����
//			}
//		}
//	}
//	printf("����������Ϊ:\n");
//	for (i = 0; i < 6; i++)
//		printf(" %d", a[i]);
//	system("pause");
//    return 0;
//}
//���һ�����������Ҫ��10��
//int main(){
//     int i, j, a[N][N];
//	for (i = 0; i < N; i++){
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for (i = 2; i < N; i++)
//		for (j = 1; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	for (i = 0; i < N; i++){
//		for (j = 0; j <=i; j++)
//			printf("%d\n",a[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//ħ����:ÿ��ÿ��б�Խ��ߺ����;
//����;1�����ڵ�һ�е����м�λ��
//eg:3*3,1��(12)��2��(33)��ô3����(21)����ÿһ�������λ�þ����ϸ����м�1�м�1
//����ϸ�������Ϊ1���¸���������Ϊn;
//������չ������λ��������
//������һ�����ǵ�һ�е�n����Ӧ�ð������
//�����ϸ���������
int main(){
	int a[15][15];
	int i, j, k, p, n;
	p = 1;
	printf("������n(1-15):\n");
	while (p == 1){
		printf("������n(1-15):\n");
		scanf("%d", &n);
		if ((n != 0) && (n <= 15) && (n % 2 != 0))
			p = 0;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = 0;
			j = (n / 2) + 1;
			a[1][j] = 1;//ȷ��n�׵ĵ�һ��Ԫ��1�ڵ�һ�����м�
			for (k = 2; k <= n*n; k++)
			{
				i = i - 1;//ȷ����һ��Ԫ�������м�1�м�1
				j = j + 1;
				if ((i<1) && (j>n))
				{
					i = i + 2;
					j = j - 1;
				}
				else{
					if (i < 1)
						i = n;//�ж���������������һ��Ϊ��n��
					if (j>n)
						j = 1;//�ж��������ұ�����һ�γ���1��
				}
				if (a[i][j] == 0)
					a[i][j] = k;
				else{
					i = i + 2;
					j = j - 1;
					a[i][j] = k;
				}
}
			for (i = 1; i <= n; i++){
				for (j = 1; j <= n; j++)
					printf("%5d", a[i][j]);
				printf("\n");
			}
			system("pause");
			return 0;

}