# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
# include<string.h>
//用指向函数的指针作函数的参数(*p)(int ,int)这个就是指向函数的指针然后
//然后在fun 函数中int (*p)(int,int);作为fun 函数的参数
//指向函数的指针作为函数参数可以把函数的入口地址传给形参这样
//就可以在被调用的函数中使用实参
//有两个整数a,b由用户输入123如果输入1程序就给出2个数最大输入2两个数最小
//3求和
//int fun(int x, int y, int (*p)(int, int)){
//	int result;
//	 result = (*p)(x, y);
//	printf("%d\n", result);
//}
//int zmax(int x,int y){
//	int z;
//	if (x > y){
//		z = x;
//	}
//	else{
//		z = y;
//	}
//	printf("max=");
//	return z;
//	}
//int zmin(int x, int y){
//	int z;
//	if (x > y){
//		z = y;
//	}
//	else{
//		z = x;
//	}
//	printf("min=");
//	return z;
//}
//int zsum(int x, int y){
//	int sum;
//	sum = x + y;
//	printf("sum=");
//	return sum;
//}
//int main(){
//	int a, b,n;
//	int *p(int, int);
//	printf("请输入a,b\n");
//	scanf("%d%d", &a,&b);
//	a = 34; b = -21;
//	printf("请输入模式123\n");
//	scanf("%d", &n);
//	if (n == 1){
//	fun(a, b, zmax);	
//	}
//	else if (n == 2){
//		
//	 fun(a, b, zmin);
//	}
//	else if (n == 3){
//	 fun(a, b, zsum);
//	}
//	system("pause");
//	return 0;
//}
///指针数组适用于指向若干个不同的字符串
//eg将若干个字符串按字母顺序(由小到大)输出
//void paixu(char *name[], int n){
//	char *temp;
//	int k,i,j;
//	for ( i = 0; i < n - 1; i++){
//		k = i;
//		for (j = i + 1; j < n; j++){
//			if (strcmp(name[k], name[j])>0){
//				k = j;
//			}
//		}
//		if (k != i){
//			temp = name[i];
//			name[i] = name[k];
//			name[k] = temp;
//		}
//	}
//}
//void print(char *name[],int n){
//	/*for (int i = 0; i < n; i++){
//		printf("%s\n", name[i]);
//	}*/
//	int i = 0;
//	char *p;
//	p = name[0];
//	while (i < n){
//	
//		p = *(name + i);
//		i++;
//		printf("%s\n", p);
//	}
//}
//int main(){
//	char *name[] = { "Follow me", "BASICC", "Great wall",
//		"FORTRAN", "Computer design" };
//	int n = 5;
//	paixu(name, n);
//	print(name, n);
//	system("pause");
//	return 0;
//}
///有一个指针数组其元素分别指向一个整型数组元素,用指向指针数据的指针变量输出整型数组中元素的 值
//int main(){
//	int a[5] = { 1, 3, 5, 7, 9 };
//	int *num[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
//	int **p;
//	p = num;//让p指向num[0]
//	for (int i = 0; i < 5; i++){
//		printf("%d", **p);
//		p++;
//	}
//	system("pause");
//	return 0;
//}
///建立动态数组输入5个学生成绩另一函数检测其中有没有低于60,输出不合格成绩

//void chek(int *p){
//	for (int i = 0; i < 5; i++){
//		if (p[i] < 60){
//			printf("%d\n", p[i]);
//		}
//	}
//}int main(){
//	int *p, i;
//	p = (int*)malloc(sizeof(int));
//	for (i = 0; i < 5; i++){
//		scanf("%d", p + i);
//	}
//	chek(p);
//	system("pause");
//	return 0;
//}
//int main(){
//	int daxie=0, xiaoxie=0, 
//		number=0, space=0,other=0, i = 0;
//	char *p;
//	char str[20];
//	printf("请输入字母\n");
//	while ((str[i] = getchar()) != '\n'){
//		i++;
//	}
//		p = str; 
//		while (*p != '\n'){
//		
//			if ((*p >= 'A') && (*p <= 'Z')){
//				daxie++;
//			}
//			else if ((*p >= 'a') && (*p <= 'z')){
//				xiaoxie++;
//			}
//			else if ( (*p >= '0') && (*p<= '9')){
//				number++;
//			}
//			else if (*p == ' '){
//				space++;
//			}
//			else{
//				other++;
//			}
//			p++;
//		}
//	printf("大写有=%d", daxie);
//	printf("小写有=%d", xiaoxie);
//	printf("数字有=%d", number);
//	printf("空格有=%d", space);
//	printf("其他有=%d", other);
//	system("pause");
//	return 0;
//}
