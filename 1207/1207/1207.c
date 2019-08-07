# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//用指针变量指向数组元素
int main(){
	printf("打印9*9的乘法口诀表\n");
	int n=0;
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <=9; j++){
			printf(" n=%d*%d",i,j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
	//	int a[5];
	//	int *p;	//	printf("请输入五个数\n");
	//	for (int i = 0; i < 5; i++){
	//		scanf("%d", &a[i]);
	//	}
	//	for (p = a; p < a + 5; p++){
	//		printf("%d\n", *p);
	//	}
	//	system("pause");
	//	return 0;
	//}
	//通过指针变量输出整型数组A的五个元素
	//int *p, i, a[5];
	//p = a;//指针变量指向数组名其实是指向数组的首元素
	//for (i = 0; i < 5; i++){
	//	scanf("%d",p++);
	//}
	//p = a;
	//for (i = 0; i < 5; i++){
	//
	//	printf("%d", *p++);//解引用大于++
	//	//p++;
	//}
	//int *p, i, a[5];
	//p = a;
	//for (i = 0; i < 5; i++){
	//	scanf("%d", p++);
	//}
	//p = a;//没有这个输入的p++直接从(p+5)++开始
	//for (i = 0; i < 5;i++,p++){                      
	//	printf("%d", *p);
	//	printf("\n");
	//}
	/*int *p, i, a[5];
	p = a;
	for (i = 0; i < 5; i++){
	scanf("%d", p++);
	}
	p = a;
	for (p = a; p < (a + 5); ++p){
	printf("%d", *p);
	printf("\n");
	}*/
	////*p++和*++p不相同前者先*p然后使p+1,后者先使p+1然后在*
	///eg a[0]输出前者得到a[0];输出后者得到a[1];
	///用指针变量做实参按照相反的顺序输出
	//	void inv(int *arr, int n);
	//	int i, arr[5], *p ;
	//	p = arr;
	//	for (i = 0; i < 5; i++){
	//		scanf("%d", p++);
	//	}
	//		printf("\n");
	//		p = arr;
	//		inv(p, 5);
	//			for (p = arr; p < arr + 5; p++){
	//				printf("%d", *p);
	//			}
	//			printf("\n");
	//	system("pause");
	//	return 0;
	//}
	//void inv(int *arr, int n){
	//	int  mid, temp, *star, *end;
	//	star = arr;
	//	/*end = arr + n - 1;
	//	while (star <end){
	//		temp = *star;
	//		*star = *end;
	//		*end = temp;
	//		star++;
	//		end--;
	//	}*/
	//	//用for
	//	mid = (n - 1) / 2;
	//	end =arr + n - 1;
	//	for (star; star < arr + mid; star++, end--)//star+1时候end-1
	//		temp = *star;
	//		*star = *end;
	//		*end = temp;
	//	}
	//}
	///!!!切记在指针变量做实参的时候在主函数要设置数组而且设置指针
	///用指针的方法对十个数进行从大到小顺序输出
	//	/*void fanzhuan(int *a, int n);
	//	int *p;
	//	int a[5];
	//	p = a;
	//	for (int i = 0; i < 5; i++){
	//		scanf("%d", p++);
	//	}
	//	printf("\n");
	//	p = a;
	//	fanzhuan(a,5);
	//	for (p=a; p < a+5; p++){
	//		printf("%d\n", *p);
	//	}
	//		system("pause");
	//	return 0;
	//}
	//void fanzhuan(int *a, int n){
	//	int *star, *end, temp;
	//	star = a;
	//	end = a + n - 1;
	//	while (star < end){
	//		temp = *star;
	//		*star = *end;
	//		*end = temp;
	//		star++;
	//		end--;
	//	}
	//}*/
	//	//输出二维数组的有关数据
	//	int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	//	int *p;
	//	/*printf("%d", *p);*/
	//	for (p = a; p < a + 12; p++){
	//		if ((p - a) % 4 == 0){
	//			printf("\n");
	//		}
	//		printf("%4d", *p);
	//	}
	//	//printf("/n");
	//	system("pause");
	//	return 0;
	//}
	//输出二维数组任意一行一列元素的值
	//int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	//int(*p)[4];//指针变量p指向包含4个整型元素的数组
	/////它其实指向包含四个整型元素一维数组
	//p = a;
	//int i, j;
	//scanf("%d%d", &i, &j);//i行j列*(P+i)第i行所有的元素
	//printf("a[%d][%d]=%d", i, j, *(*(p + i) + j));
	//system("pause");
	//return 0;
	//}
	//通过字符指针变量输出一个字符串
	//c语言对应字符串常量是按照字符数组处理的,但是这个字符数组
	//是没有名字的所有不能通过数组名引用智能通过指针来引用
	//char *string = "i love you do you konw?";
	//char * string;
	//string = "i love you do you konw?";
	//			printf("%s", string);
	//		system("pause");
	//		return 0;
	//	}
	//将字符串a复制为字符串b,然后输出字符串b
	//char a[] = "i am a student";
	//char b[20];
	//int i;
	//for (i = 0; i != '\0'; i++){
	//	*(b + i) = *(a + i);//a[i]给b[i]
	//}
	//*(b + i) != '\0';
	//printf("字符串a为%s\n", a);
	//printf("字符串b为\n");
	//for (i = 0; b[i] != '\0'; i++){//???为什么有烫?
	//	printf("%c", b[i]);
	//}
	//printf("\n");

//用指针变量处理
//char a[] = "i am a student";
//char b[20],*p1,*p2;
//p1 = a;
//p2 = b;
//printf("字符串a为%s\n", p1);
//while (*p1!='\0'){
//	*p2 = *p1;
//	*p1++;
//	*p2++;
//}
////for (; *p1 != '\0'; p1++)
////{
////	*p2 = *p1;
////	p2++;
////}
//printf("%s", p2);
//	system("pause");
//	return 0;
//}