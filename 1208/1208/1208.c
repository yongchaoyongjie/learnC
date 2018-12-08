# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
///用字符数组名做函数参数
////void copy_string(char a[],char b[]){
////	int i=0;
////	while (a[i] != '\0'){
////		b[i] = a[i];
////		i++;
////		b[i] != '\0';
////	}
////}
int main(){
	////	char a[] = "wo ai ni meng";
	////	char b[] = "ni shi shui chen";
	////	printf("字符串a=%s\n,字符串b=%s\n", a, b);
	////	printf("复制a到b\n");
	////	copy_string(a, b);
	////	printf("字符串a=%s\n,字符串b=%s\n", a, b);
	////	system("pause");
	////	return 0;
	////}
	//用字符型指针变量做实参

	//void copy_string(char ,char );
	//char a[] = "i am a teacher";
	//char b[] = "you are a student";
	//char * from = a;//指针变量from的值是a数组元素的地址,同理b
	//他们作为实参把ab数组元素的地址传递给形参数组名from,to(实质也是指针变量)
	//char *to = b;
	//printf("字符串a=%s\n,字符串b=%s\n", a, b);
	//	printf("复制a到b\n");
	//	copy_string(from,to);//实参为字符指针变量
	//	printf("字符串a=%s\n,字符串b=%s\n", a, b);
	//	system("pause");
	//	return 0;
	//}
	//void copy_string(char from[], char to[]){
	//	int i = 0;
	//	while (from[i] != 0){
	//		to[i] = from[i];
	//				i++;
	//				to[i] != '\0';
	//	}
	///用字符指针变量做形参和实参(有问题)
	//	void copy_string(char *from ,char *to);
	//	char *a = "i am a teacher";
	//	char b = "i am a student";
	//	char *p = b;
	//	printf("字符串a=%s\n,字符串b=%s\n", a, b);
	//		printf("复制a到b\n");
	//		copy_string(a,p);
	//		printf("字符串a=%s\n,字符串b=%s\n", a, b);
	//		system("pause");
	//		return 0;
	//}
	//void copy_string(char *from, char *to){
	//	/*while (*from != '\0'){
	//		*to = *from;
	//		from++;
	//		to++;
	//	}
	//	*to = '\0';*/
	//	/*for (; *from != '\0'; from++, to++){
	//		*to = *from;
	//	}
	//	*to = '\0';*/
	//	while ((*to = *from) != '\0')
	//	{
	//		to++;
	//		from++;
	//	}
	///指针变量的值是可以改变的而数组名代表一个固定的值(首地址)无法改变
	//char *a = "i love china!";//从指针a当时指的元素开始逐个输入各个字符
	/////char a[] = { "i love china" };数组名代表地址,它是常量值不变
	//a += 7;
	//printf("%s\n", a);
	///!!!!!!通过指针变量访问它所指向的函数
	//	int maxz(int ,int);
	//	int(*p)(int, int);//定义指向函数的指针变量
	//	int a, b, c;
	//	p = maxz;//使p指向max函数
	//	printf("输入a,b\n");
	//	scanf("%d%d", &a, &b);
	//	c = (*p)(a, b);//!!!!!通过指针变量调用maxz函数
	//	printf("a=%d,b=%d\nmax=%d", a, b, c);
	//		system("pause");
	//		return 0;
	//	}
	//int maxz(int a, int b ){
	//	int z;
	//	if (a > b)
	//		z = a;
	//	else
	//		z = b;
	//	return z;
	//}
	//用指向函数的指针变量
	//输入两个整数然后用户选择1或者2,选1调用max输出二者最大数,选2
	//调用min函数,输出二者最小
	//	int maxz(int a, int b);
	//	int minz(int a, int b);
	//	int(*p)(int, int)=0;//!!!定义指向函数的指针变量
	//	int a, b, c, n;
	//	printf("请输入两个数a/b");
	//	scanf("%d%d", &a, &b);
	//	printf("请输入选择的模式1/2\n");
	//	scanf("%d", &n);
	//	if (n == 1){
	//		p = maxz;
	//	}
	//	else if (n == 2){
	//		p = minz;
	//	}
	//	else {
	//		printf("erro");
	//	}
	//	c = (*p)(a, b);
	//	printf("a=%d,b=%d", a, b);
	//	if (n == 1){
	//		printf("max=%d", c);
	//	}
	//	else if (n == 2){
	//		printf("min=%d", c);
	//	}
	//	else{
	//		printf("erro");
	//	}
	//	system("pause");
	//	return 0;
	//}
	//int maxz(int a, int b){
	//	int z;
	//	if (a > b){
	//		z = a;
	//	}
	//	else{
	//		z = b;
	//	}
	//	return z;
	//}
	//int minz(int a, int b){
	//	int z;
	//	if (a > b){
	//		z = a;
	//	}
	//	else{
	//		z = b;
	//	}
	//	return z;
	//}
	//返回指针值的函数
	//定义一个二维数组,score存放学生的成绩,a个学生b门课程,输入学号输出学生成绩
	float score[][4] = { { 60, 70, 80, 90 }, { 56, 89, 67, 88 }, {
		34, 78, 90, 60 } };
	float (*search)(float(*pointer)[4], int n);//定义为指针类型的函数
	///形参是指向包含4个元素的一维数组的指针变量
	float *p;
	int i, k;
	printf("请输入学生学号\n");
	scanf("%d", &k);
	printf("分数是第%d\n", k);
	p = search(score, k);
	for (i = 0; i < 4; i++){
		printf("%5.2f\t", *(p + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
float *search(float(*pointer)[4], int n){
	float *p1;
	p1 = *(pointer + n);//pointer+1指向score 数组序号为1的行,
	//加个*就是从行控制转化为列控制
	return p1;
}
