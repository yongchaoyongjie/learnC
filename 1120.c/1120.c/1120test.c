# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# define ROW 3
# define COL 3
int main(){
	int max, maxcol, k, andian, a[ROW][COL];
	int col=0;
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			scanf("%d", &a[row][col]);
		}
	}
		for (int row = 0; row < ROW; row++){
			max = a[row][0];//����a[row][0]���
			maxcol = 0;//���к�0��ֵ��maxcol����
			for (int col = 0; col < COL; col++){
			//�ҳ���i��������
				if (a[row][col]>max){
					max = a[row][col];//���������浽max
					maxcol = col;//���������������浽maxcol
				}
			}
		}
		andian = 1;//���谰��Ϊ1
		for (k = 0; k < ROW; k++){
			if (max>a[k][maxcol]){
				andian = 0;//����ͬ����С���ǰ���
				continue;
			}
			if (andian == 1){
				printf("%d%d %d %d\n",col,maxcol,max);
//// ��������ֵ�����ڵ�����
break;
			}
		}
		if (andian != 1)//���㲻����
		{
			printf("not exist!\n");
		}
	system("pause");
	return 0;
}
//���ַ�����
//# define N 8
//int main(){
//	int arr[N];
//	int num;
//	int left = 0;
//	int sign;
//	int flag = 1;
//	int loca;
//	int right = (sizeof(arr)/sizeof(arr[0]))-1;
//	int mid = (left + right) / 2;
//	char c;
//	printf("����������:\n");
//	for (int i = 0; i < N; i++){
//		scanf("%d", &arr[i]);
//	}
//	while (flag){
//		printf("��������Ҫ���ҵ���num:\n");
//		scanf("%d", &num);
//		sign = 0;
//		if (num<left || num>right){
//			loca = -1;
//		}
//		while ((!sign) && (left <= right)){
//			if (num == arr[mid]){
//				loca = mid;
//				sign = 1;
//				printf("found%d\n", loca);
//			}
//			else if (num < arr[mid]){
//				right = mid - 1;
//			}
//			else {
//				left = mid + 1;
//			}
//		}
//
//		if (!sign || loca == -1){
//			printf("�Ҳ���%d\n", num);
//		}
//		printf("������");
//		scanf("%c", &c);
//		if (c == 'N' || c == 'n'){
//			flag = 0;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//ͳ��һƪ���µ��ַ���ĸ�ո���ж��ٸ�
//# define ROW 3
//# define COL 10
//int main(){
//	char arr[ROW][COL];
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (int row = 0; row < ROW; row++){
//		printf("���������%d\n", row+ 1);
//		gets(arr[row]);
//		for (int col = 0; col < COL; col++){
//			if ((arr[row][col]) >= 'A' && (arr[row][col] <= 'A'))
//				a++;
//			else if ((arr[row][col]) >= 'a' && (arr[row][col] <= 'z'))
//				b++;
//			else if ((arr[row][col]) >= '0' && (arr[row][col] <= '9'))
//				c++;
//			else if ((arr[row][col]) == ' ')
//				d++;
//			else
//				e++;
//		}
//	}
//	printf("��д��ĸ��:a=%d", a);
//	printf("Сд��ĸ��:b=%d", b);
//	printf("������:c=%d", c);
//	printf("�ո���:d=%d", d);
//	printf("������:e=%d", e);
//	system("pause");
//	return 0;
//}
//���һ��ƽ���ı���
//# define ROW 10
//int main(){
//	void printfline(int space_cnt, int star_cnt);
//	for (int i = 1; i <=ROW; i++){
//		printfline(i-1 , ROW);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//void printfline(int space_cnt,int star_cnt){
//	for (int i = 0; i < space_cnt; i++){
//		printf(" ");
//	}
//	for (int i = 0; i < star_cnt; i++){
//		printf("*");
//	}
//}
////�����һ����ĸ��ɵ�26��i����ɵ�26-I+1,�����������Ų���
//# define ROW 10
//int main(){
//	char mima[ROW];
//	char yuanwen[ROW];
//	int row = 0;
//	int n;
//	//for (; row < ROW; row++){
//		gets(mima);
//		printf("mima=%s", mima);
//	//}
//		while (mima[row] != '\0'){
//			if ((mima[row] >= 'a') && (mima[row] <= 'z'))
//				yuanwen[row] = 219 - mima[row];
//			else if ((mima[row] >= 'A') && (mima[row] <= 'Z'))
//				yuanwen[row] =155 - mima[row];
//			else
//				yuanwen[row] = mima[row];
//			//printf("yuanwen=%s", yuanwen);
//			row++;
//	}
//		printf("\nԭ��Ϊ:\n");
//		for (row = 0; row < ROW; row++)
//			//printf("ԭ��Ϊ:\n");
//			putchar(yuanwen[row]);
//	system("pause");
//	return 0;
//}
//��дһ�����������ַ�����������
//# define N 100
//# define B 10
//int main(){
//	char a[N];
//	char b[B];
//	int i = 0,j = 0;
//	printf("�����һ���ַ���a[N]\n");
//		scanf("%s", a);
//		printf("�����2���ַ���b[B]\n");
//		scanf("%s", b);
//		while (a[i] != '\0'){
//			i++;
//		}
//		while (b[j] != '\0'){
//			j++;
//			a[i++] = b[j++];
//			a[i] = '\0';
//			//printf("���ַ���Ϊ%s", a);
//			printf("%s", a);
//		}
//	system("pause");
//		return 0;
//}
//
//int main(){
//	char s1[80];
//	char s2[80];
//	int i = 0;
//	printf("����s2\n");
//	scanf("%s", s2);
//	for (i = 0; i <=strlen(s2); i++){
//	
//		s1[i] = s2[i];
//	}
//	printf("���Ƶ�S1Ϊ%s", s1);
//	system("pause");
//	return 0;
//}
//float Max, Min;
//int main(){
//
//	float average(float arr[10]);
//	int i = 0;
//	float ave, arr[10];
//	for (; i < 10; i++){
//		scanf("%f", &arr[i]);
//	}
//		ave= average( arr);
//		printf("max=%f\n,min=%f\n,ave=%f\n", Max, Min, ave);
//	
//
//	system("pause");
//return 0;
//}
//float average(float arr[10]){////�����������һ������nfloat average(float arr[],int n)
//	int i = 1;
//	int n = 10;
//	float max;
//	float min;
//	float sum;
//	float average;
//	sum= Max = Min=arr[0];
//	for (i = 1; i <10; i++){////for(i=1;i<n;i++)
//		sum+=arr[i];
//		if (Max < arr[i])
//			Max = arr[i];
//		else if (arr[i] <Min)
//			Min = arr[i];
//	}
//	average = sum / 10;
//	return average;
//}

//int a = 7;
//int b = 5;
////����ֲ�������ȫ�ֱ���������
//int main(){
//	int max(int a, int b);
//	int a = 8;
//	printf("%d",max(a, b));//ʵ�ʱȵ���max(8,5)������max(7,5)
//	system("pause");
//	return 0;
//}
//int max(int a, int b){
//	return(a > b ? a : b);
//}
//��̬�ֲ��������ú�ֵ����
//��1-5�׳�
//int main(){
//	int factor(int n);
//	int i = 1;
//	
//	for (; i <= 5; i++){
//		printf("%d!=%d\n",i, factor(i));
//	}
//	system("pause");
//    return 0;
//}
//int factor(int n){
//	static int f = 1;
//	f = n*f;
//	return f;
//}
//��ô�ı������������
//�ҵ������������ֵ
//int main(){
//	int Max(int A, int B, int C);
//	 extern int A, B, C;//���ⲿ��������������չ���˺���
//	scanf("%d%d%d",&A,&B,&C);
//	printf("Max=%d", Max(A, B, C));
//	system("pause");
//return 0;
//}
//int A, B, C;//�����ⲿ����
//int Max(int A, int B, int C){
//	int m;
//	m = A > B ? A : B;
//	if (C > m){
//		m = C;
//	}
//		return m;
//}
//�ú����������������������Լ������С������
//int main(){
//	int a, b,c,d;
//	int gongbeishu(int x, int y);
//	int gongyue(int x, int y);
//	scanf("%d%d", &a, &b);
//	c = gongyue(a, b);
//	printf("��Լ��=%d",c);
//	d = gongbeishu(a, b, c);
//	printf("������=%d", d);
//	system("pause");
//	return 0;
//}
//int gongbeishu(int x, int y,int z){
//	return (x*y) / z;
//}
//int gongyue(int x, int y){
//	int swap(int* c, int *d);
//	int r;
//	if (y > x){
//		swap(&x, &y);
//	}
//	while (r = x%y != 0){
//		x = y;
//		y = r;
//	}
//	return y;
//}
//int swap(int* c,int *d){
//	int temp;
//	temp = *c;
//	*c = *d;
//	*d = temp;
//}
