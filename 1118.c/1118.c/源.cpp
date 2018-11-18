# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <time.h>
# include <string.h>
//将1-10逆序输出
//int main(){
//	int i, a[10];
//	for (i = 0; i <= 9; ++i){
//		a[i] = i;
//	}
//	for (i = 9;i >= 0; --i){
//		printf("%d\n",a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//输入十个数冒泡法比较
//int main(){
//	int a[10] = { 0 };
//	int i, j, t;
//	printf("请输入十个数:\n");
//	for (i = 0; i < 10; ++i){
//		scanf("%d", &a[i]);
//		printf("\n");
//	}
//	for (j = 0; j < 10; ++j){
//		for (i = 0; i < 9-j; i++){
//			if (a[i]>a[i + 1]){//将a[i]<a[i+1]就是从大到小排列
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++){
//		printf("%3d\n", a[i]);
//	}
//
//	
//	system("pause");
//	return 0;
//}
//将a[2][3]={{1,2,3},{4,5,6}}存到另一个二维数组中
//a[3][2]={{1,4}{2,5},{3,6}}
//int main(){
//	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int b[3][2] = {};
//	int i,j;
//	printf("数组a[2][3]为:\n");
//	for (i = 0; i <= 1;++i){
//		for (j = 0; j <= 2; j++){
//			printf("%5d", a[i][j]);
//			b[j][i] = a[i][j];
//		}
//		printf("\n");
//	}
//	printf("数组b[3][2]为:\n");
//	for (i = 0; i <= 2; ++i){
//		for (j = 0; j <= 1; j++){
//			printf("%5d", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//return 0;
//}
//输入一行字符统计有多少单词,单词间用空号隔开
//int main(){
//	char str[81];
//	int num = 0, word = 0, i;
//	char c;
//	gets(str);
//	for (i = 0; (c = str[i]) != '\0'; i++){
//		if (c == ' ')
//			word = 0;
//
//		else if (word == 0){
//			word = 1;//如果不是空格使word置num +1
//			num++;
//		}
//	}
//	printf("这句话一共有单词:num=%d\n", num);
//	system("pause");
//	return 0;
//}
//有三个字符串找出其中最大的一个
//int main(){
//	char str[3][1000];
//	char shuzu[1000];//定义一个一维数组作为交换的临时数组
//	int i = 0;
//	
//	for (; i < 3; i++){
//		gets(str[i]);
//		if (strcmp(str[0],str[1])>0){
//			strcpy(shuzu,str[0]);//复制字符串str[0]到一维数组
//		}
//		else{
//			strcpy(shuzu,str[1]);
//		}
//		if (strcmp(str[2],shuzu) > 0){
//
//			strcpy(shuzu,str[2]);
//		}
//		
//	}
//	printf("最大的字符串为:\n");
//	printf("%s\n",shuzu);
//	system("pause");
//	return 0;
//}
//
//关于函数的申明,必须在主函数申明,而且是最开始的位置.然后才能调用,如果只调用调用则只能放在main前面
//int main()
//{
//	float add(float x, float y);
//	float a, b, c;
//	printf("请输入两个数:\n");
//	scanf("%f%f", &a, &b);
//	c = add(a, b);
//	printf("sum is%f\n", c);
//	
//	system("pause");
//	return 0;
//}
//float add(float x, float y){
//	float z;
//	z = x + y;
//	return z;
//}
//输入四个整数找到其中最大的数字用函数嵌套实现
//int main(){
//	int a, b, c, d,max;
//	int max4(int a, int b, int c, int d);
//	printf("请输入四个数字:\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	max=max4(a, b, c, d);
//	printf("max=%d\n",max);
//	system("pause");
//	return 0;
//	}
//int max4(int a, int b, int c, int d){
//	int max2(int a, int b);
//	/*int m;
//	m = max2(a, b);
//	m = max2(c, m);
//	m = max2(d, m);
//	return m;*/
//	return max2(d,(max2(c, max2(a, b))));
//}
//int max2(int a, int b){
//
//	/*if (a >= b)
//		return a;*/
//	return(a > b ? a : b);
//}
//函数递归,调用函数过程中又出现直接或者间接地调用该函数本身
//eg:5个学生一个比一个大两岁,第一个10岁,求第五个学生年龄
//int nianling(int n){//调用实现
//	int age;
//	if (n == 1)
//		age = 10;
//	else{
//		age =nianling(n-1) + 2;
//	}
//	return age;
//}
//int main(){
//	nianling(5);//这句话可以不写
//	printf("第五个年龄为:%d\n", nianling(5));
//	system("pause");
//	return 0;
//}
//
////int main(){用函数声明实现
////	int nianling(int n);
////	printf("第五个年龄为:%d\n", nianling(5));
////	system("pause");
////	return 0;
////}
////int nianling(int n){
////	int age;
////		if (n == 1)
////			age = 10;
////		else{
////			age =nianling(n-1) + 2;
////		}
////		return age;
////}
//递归实现n!
int main(){
	int factor(int n);
	int x;
	int sum;
	scanf("%d", &x);
	sum = factor(x);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
int factor(int n){
	int f;
	if (n <= 0){
		printf("错误\n");
	}
	if (n == 1)
		f = 1;
	else{
		f = n*factor(n - 1);
	
	}
	return f;
}