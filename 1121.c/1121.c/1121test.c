# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <string.h>
# include<string.h>
//float x1, x2, dis;
//int main(){
//	void factorweilin(float, float);
//	void factorxiaolin(float, float);
//	void factordalin(float, float);
//	float a, b, c;
//	
//	scanf("%f%f%f", &a, &b, &c);
//	printf("��һԪ���η������ϵ������Ϊ:%5.2f %5.2f %5.2f",a,b,c);
//	printf("\n");
//	dis = b*b - 4 * a*c;
//	//if (dis > 0){
//		factordalin(a, b);
//	//	printf("x1=%5.2f\nx2=%5.2f\n", x1, x2);
//      // }
//	//else if (dis == 0){
//		factorweilin(a, b);
//	//	printf("x1=%5.2f\nx2=%5.2f\n", x1,x2);
//	//}
//	//else{
//	factorxiaolin(a, b);
//	//	printf("erro");
//	//}
//	system("pause");
//	return 0;
//}
//void factorweilin(float x, float y){
//	if (dis == 0){
//		//factorweilin(a, b);
//		x1 = x2 = -y / 2 * x;
//		printf("x1=%5.2f\nx2=%5.2f\n", x1, x2);
//	}
//		//x1 = x2 = -y / 2 * x;
//
//}
//void factorxiaolin(float x, float y ){
//	printf("erro");
//		//return 0;
//}
//	void factordalin(float x, float y ){
//		if (dis > 0){
//			x1 = (-y + sqrt(dis)) / (2 * x);
//			x2 = (-y - sqrt(dis)) / (2 * x);
//			printf("x1=%5.2f\nx2=%5.2f\n", x1, x2);
//		}
//			//x1 = (-y + sqrt(dis)) / (2 * x);
//			//x2 = (-y - sqrt(dis)) / (2 * x);
//	}
//int main(){
//	int judgesushu(int a);
//	int a;
//	scanf ("%d", &a);
//	if (judgesushu(a) )//Ϊ��
//		printf("������\n");
//	else{
//		printf("��������");
//	}
//	system("pause");
//	return 0;
//}
// int judgesushu(int a){
//	 int i = 2;
//	 int sum;
//	 for (; i <= sqrt(a); i++){
//		 sum = a%i;
//		 if (sum == 0){
//			 return 1;
//		 }
//	 }
//}
//#define ROW 3
//#define COL 3
//int arr[ROW][COL];
//int main(){
//
//	void exchange(int arr[ROW][COL]);
//	int row;
//	int col;
//	for ( row = 0; row < ROW; row++){
//		for (int col = 0; col < COL; col++){
//			scanf("%d",&arr[row][col]);
//		}
//		printf("\n");
//	}
//	for (row = 0; row < ROW; row++){
//		for ( col = 0; col < COL; col++){
//			printf("%d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//	exchange(arr);
//	for (row = 0; row < ROW; row++){
//		for (col = 0; col < COL; col++){
//			printf("%d ", arr[row][col]);
//		}
//		printf("\n");
//	}
//	system("pause");
//    return 0;
//}
//void exchange(int arr[ROW][COL]){
//	int swap(int* a, int *b);
//	
//	for (int row = 0; row < ROW; row++){
//		for (int col = row+1; col < COL; col++){//0,1��1 0
//			swap(&arr[row][col], &arr[col][row]);
//			/*t = arr[row][col];
//			arr[row][col] = arr[col][row];
//			arr[col][row] = t;*/
//		}
//		printf("\n");
//	}
//}
//char swap(char* a, char *b){
//char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main(){
//	void exchage(char arr[]);
//	char arr[100];
//	printf("������ַ���Ϊ\n");
//	scanf("%s", arr);//�����ַ�������Ҫȡ��ַ
//	
//	printf("���������ַ���Ϊ:\n");
//	exchage(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//void exchage(char arr[]){
//	int i = 0;
//	int j;
//	/*for ( i = 0,  j = strlen(arr); i < (strlen(arr) / 2); i++, j--){
//		swap(&arr[i], &arr[j-1]);
//		}*/
//	for (i = 0; i < (strlen(arr) / 2); i++){
//		for (j = strlen(arr); j>(strlen(arr) / 2); j--)
//		{
//			swap(&arr[i], &arr[j - 1]);//strlen���ַ����ĳ���
//		}
//	}
//}
//int main(){
//	void link(char s1[], char s2[],char s3[]);
//	char s1[100];
//	char s2[100];
//	char s3[100];
//	printf("�����ַ���s1\n");
//	scanf("%s", s1);
//	printf("�����ַ���s2\n");
//	scanf("%s", s2);
//	link(s1,s2,s3);
//	printf("%s", s3);
//	system("pause");
//	return 0;
//}
//void link(char s1[], char s2[], char s3[]){
//	int i;
//		int j ;
//	/*for (i=0; i<=strlen(s1); i++){
//		s3[i] = s1[i];
//	}
//	for (j = 0; j <= strlen(s2); j++){
//		s3[strlen(s1) + j] = s2[j];
//	}
//*/
////��2		for (i = 0; s1[i] != '\0'; i++){
//			s3[i] = s1[i];
//		}
//		for (j = 0; s2[j] != '\0'; j++)
//		{
//			s3[i + j] = s2[j];
//		}
//			s3[i + j] = '\0';		
//}
//��һ���ַ�����Ԫ���ַ����Ƶ���һ���ַ���
//int main(){
//	void yuanyin(char, char);
//	char str1[100];
//	char str2[100];
//	printf("�����һ���ַ���\n");
//	scanf("%s", str1);
//	printf("����ڶ����ַ���\n");
//	scanf("%s", str2);
//	yuanyin(str1,str2);
//	printf("���ƺ���ַ���Ϊ%s\n", str2);
//	system("pause");
//	return 0;
//}
//void yuanyin(char str1[], char str2[]){
//	int i;
//	int j = 0;
//	for (int i = 0; str1[i]!='\0'; i++){
//		if (str1[i] == 'a' || str1[i] == 'o' || str1[i] == 'e' ||
//			str1[i] == 'i' || str1[i] == 'u' ||
//			str1[i] == 'A' || str1[i] == 'O' || str1[i] == 'E' ||
//			str1[i] == 'I' || str1[i] == 'U'){
//			str2[j] = str1[i];
//			j++;
//			//j <= strlen(s2)
//				str2 != '\0';
//			//str2[strlen(str2) + j] = str1[i];
//		}
//		str2 != '\0';
//	}
//}
//����һ������Ҫ���м���,����eg1990--1a9a9a0a
//int main(){
//	void shuru(char );
//	char str[100]; 
//	scanf("%s", str);
//	shuru(str);
//	printf("%s",str);
//	system("pause");
//	return 0;
//}	
//void shuru(char str[]){
//	int temp;
//	for (int i = strlen(str);i>0; i--){
//		/*temp = str[i];
//		str[i+1] = ',';
//		str[i] = temp;*/
//		str[2 * i] = str[i];//���Ͽո��ܹ���2i��
//		str[2 * i - 1] = 'a';
//	}
//}
//ͳ��һƪ�������ж��ٸ��ո���ĸ���ֺ������ַ�
//int count1 ,count2 ,count3 ,count4, count5 ;
//int main(){
//	void tongji(char[]);
//	char test[100];
//	gets(test);
//	puts(test);
//	int count1 = 0;
//	int count2 = 0;
//	int count3 = 0;
//	int count4 = 0;
//	int count5 = 0;
//	tongji(test);
//	printf("Сд��ĸ��%d\n", count1);
//	printf("��д��ĸ��%d\n", count2);
//	printf("������%d\n", count3);
//	printf("������%d\n", count5);
//	printf("�ո���%d\n", count4);
//	system("pause");
//     return 0;
//}
//void tongji(char str[]){
//	
//	for (int i = 0; str[i] != '\0'; i++){
//		if (str[i] >= 'a'&&str[i] <= 'z'){
//			count1++;
//		}
//		if (str[i] >= 'A'&&str[i] <= 'Z'){
//			count2++;
//		}
//		if (str[i] >= '0'&&str[i] <= '9'){
//			count3++;
//		}
//		if (str[i] == ' '){
//			count4++;
//		}
//		else{
//			count5++;
//		}
//	}
//}
//дһ����������һ���ַ����ַ�������ĵĵ������
int main(){
	int findword(char );
	int longest(char test[]);
	char test[100];
	int i;
	gets(test);
	puts(test);
	printf("���word��\n");
	for (i = longest(test); findword(test[i]); i++){
		printf("%c", test[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
int findword(char c){//�ҳ�����
	
	if ((c >= 'a'&&c <= 'z') || (c > 'A'&&c <= 'Z')){
		return 1;
    }
return 0;
     }
int longest(char test[]){
	int len = 0, length = 0, flag = 1, place = 0, point;
	for (int i = 0; i <= strlen(test); i++){
		
		if (findword(test[i])){
			
			if (flag){//Ϊ��ʼ
				point = i;//��
				flag = 0;
			}
			else{
				len++;//�����ж����ַ�
			}
		}
		else{//�Ƚ��ַ��ĸ����
				flag = 1;
				if (len > length){//len�ռǵõ��ʵĳ���
					//length��һ�����ʵĳ���
					length = len;
					place = point;
					len = 0;//��0�´������¼���
				}
			}	
		}
	return place;
}