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
//	printf("输一元二次方程组的系数依次为:%5.2f %5.2f %5.2f",a,b,c);
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
//	if (judgesushu(a) )//为真
//		printf("是素数\n");
//	else{
//		printf("不是素数");
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
//		for (int col = row+1; col < COL; col++){//0,1与1 0
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
//	printf("输入的字符串为\n");
//	scanf("%s", arr);//输入字符串不需要取地址
//	
//	printf("输出反序的字符串为:\n");
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
//			swap(&arr[i], &arr[j - 1]);//strlen测字符串的长度
//		}
//	}
//}
//int main(){
//	void link(char s1[], char s2[],char s3[]);
//	char s1[100];
//	char s2[100];
//	char s3[100];
//	printf("输入字符串s1\n");
//	scanf("%s", s1);
//	printf("输入字符串s2\n");
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
////法2		for (i = 0; s1[i] != '\0'; i++){
//			s3[i] = s1[i];
//		}
//		for (j = 0; s2[j] != '\0'; j++)
//		{
//			s3[i + j] = s2[j];
//		}
//			s3[i + j] = '\0';		
//}
//将一个字符串的元音字符复制到另一个字符串
//int main(){
//	void yuanyin(char, char);
//	char str1[100];
//	char str2[100];
//	printf("输入第一个字符串\n");
//	scanf("%s", str1);
//	printf("输入第二个字符串\n");
//	scanf("%s", str2);
//	yuanyin(str1,str2);
//	printf("复制后的字符串为%s\n", str2);
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
//输入一个数字要求中间用,隔开eg1990--1a9a9a0a
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
//		str[2 * i] = str[i];//加上空格总共有2i项
//		str[2 * i - 1] = 'a';
//	}
//}
//统计一篇课文里有多少个空格字母数字和其他字符
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
//	printf("小写字母有%d\n", count1);
//	printf("大写字母有%d\n", count2);
//	printf("数字有%d\n", count3);
//	printf("其他有%d\n", count5);
//	printf("空格有%d\n", count4);
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
//写一个函数输入一行字符将字符串中最长的的单词输出
int main(){
	int findword(char );
	int longest(char test[]);
	char test[100];
	int i;
	gets(test);
	puts(test);
	printf("最长的word是\n");
	for (i = longest(test); findword(test[i]); i++){
		printf("%c", test[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
int findword(char c){//找出单词
	
	if ((c >= 'a'&&c <= 'z') || (c > 'A'&&c <= 'Z')){
		return 1;
    }
return 0;
     }
int longest(char test[]){
	int len = 0, length = 0, flag = 1, place = 0, point;
	for (int i = 0; i <= strlen(test); i++){
		
		if (findword(test[i])){
			
			if (flag){//为开始
				point = i;//第
				flag = 0;
			}
			else{
				len++;//单词有多少字符
			}
		}
		else{//比较字符哪个最大
				flag = 1;
				if (len > length){//len刚记得单词的长度
					//length上一个单词的长度
					length = len;
					place = point;
					len = 0;//清0下次又重新计算
				}
			}	
		}
	return place;
}