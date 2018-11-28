# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//////如何使用数组指针
//int main(){
//	void xchage(int* a, int n);
//	int i;
//	int a[6] = { 1, 2, 3, 4, 5, 6 };
//	for (i = 0; i < 6; i++){
//		printf("%d", a[i]);
//	}
//
	/*printf("\n");
	xchage(a,6);
	for (i = 0; i < 6; i++){
		printf("%d", a[i]);
	}*/
	//system("pause");
	//return 0;
//}
//void xchage(int* a, int n){//a为数组指针
//	int *i, *j,mid, temp;
//	mid = (n - 1) / 2;
//	i = a;
//	/*j = a + n ;
//	for (i = a; i <= (a + mid); i++){
//		j--;
//		temp = *i;
//		*i = *j;
//		*j = temp;*/
//		j = a + n-1;
//		for (i = a; i <= (a + mid); i++,j--){
//		
//			temp = *i;
//			*i = *j;
//			*j = temp;
//	}
//}
/////a数组名
/////for(p=a;a<p+10;p++){
/////printf("%d", *p); }
/////*(a+i)=a[i];
////(a+i)=&a[i],*为解引用
//int main(){
//	int i;
//	int a[6] = { 1, 2, 3, 4, 5, 6 };
//	for (i = 0; i < 6; i++){
//		//printf("%5d", *(a + i));
//		printf("%5d", *(&a[i]));
//	}
//	system("pause");
//	return 0;
//}
//用指针变量做实参
//int main(){
//	void exchage(int *arr, int n);
//	int i;
//	int arr[6];
//	int *p = arr;
//	/*for (i = 0; i < 6; i++){
//		scanf("%d", (p + i));
//	}*/
//	for (i = 0; i < 6; i++,p++){
//		scanf("%d", p);
//	
//	}
//	p = arr;//让指针p重新指向首地址
//	exchage(p, 6);
//	/*for (i = 0; i < 6; i++){
//		printf("%d", *(p + i));
//	}*/
//	for (p = arr; p < arr + 6; p++){
//		printf("%d", *p);
//	}
//	system("pause");
//	return 0;
//}
//void exchage(int *arr, int n){
//	int *i, *j, mid,temp;
//	mid = (n - 1) / 2;
//	*i = arr;
//	*j = arr + n - 1;
//	for (; i <= mid + arr; i++, j--){
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
//}
//int main(){
//	void sort(int arr[], int n);
//		int i, *p,arr[6];
//		p = arr;
//		for (i = 0; i < 6; i++){
//			scanf("%d", p++);
//		}
//		//int arr[6] ={ 1, 2, 3, 4, 5, 6 };
//		p = arr;
//		sort(p, 6);
//		for (p = arr; p < arr + 6; p++){
//			printf("%d", *p);
//		}
//		system("pause");
//		return 0;
//}
//void sort(int arr[], int n){
//	int temp;
//	//这个程序无法实现交换
//	///*for (int i = 0; i < n - 1; i++){
//	//	for (int j = i + 1; j < n; j++){
//	//		if (arr[j]>arr[i]){
//	//			temp = arr[i];
//	//			arr[i] = arr[j];
//	//			arr[i] = temp;
//	//		}
//	//	}
//	//}*/
//	///*int k;
//	//for (int i = 0; i < n-1; i++){
//	//	k = i;
//	//	for (int j = i + 1; j < n; j++){
//	//		if (arr[j]>arr[k]){
//	//			k = j;
//	//		}
//	//		if (k != i){
//	//			temp = arr[i];
//	//			arr[i] = arr[j];
//	//			arr[j] = temp;
//	//		}
//	//	}
//	//}*/
//}
//
//void sort(int *x, int n){
//	int i, j, t;
//	int k = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; i++){
//			if (*(x + j)>*(x + k))k = j;
//			if (k != i){
//				t = *(x + i);
//				*(x + i) = *(x + j);
//				*(x + j) = t;
//			}
//		}
//	}
//}
int main(){
	///*int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 },
	//{ 9, 10, 11, 12 } };
	//printf("%d", *(a+0));*/
	
	//int a = 10;
	//int *p = &a;
	//int **pp = &p;
	//printf("%d", *p);
	//printf("\n");
	//printf("%d", **pp);//二级指针类似于一级指针
	//指针数组Vs数组指针
	//int a[] = { 1, 2, 3, 4 };
	//printf("%p\n", a);//数组首元素地址
	//printf("%p\n", (a + 1));//加1跳了4个字节跳过了一个int元素
	//printf("%p\n", &a + 1);//和a的地址差了16个字节
	//也就是&a+1就是跳过整个数组
	//&a这是数组指针,是个指针只不过这个指针指向了整个数组
	//int* a[] = { 0 };
	//指针数组,本质是数组,只不过数组里面的每个元素都是指针(int*)
	//关于指针和数组的问题
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//计算整个数组的大小16
	//printf("%d\n", sizeof(a + 0));
	////数组名不能相加减一旦进行会隐式转换成指针指针加0就是计算第一个元素占几个字节所以为4
	//printf("%d\n", sizeof(*a));
	////把数组名进行解引用指向第一个元素1,*a得到了一个整数位首元素1有因为1是int 所以是四个字节
	//printf("%d\n", sizeof(a+1));
	////a+1和a+0结果相同只不过是第一个元素也是4
	//printf("%d\n", sizeof(a[1]));//计算第一个元素所以也是4
	//printf("%d\n", sizeof(&a));//数组指针和所有指针一样指针都是4个字节,指向的元素是16个字节
	//printf("%d\n", sizeof(*&a));//16数组指针解引用就成了数组(抵消了)
	//printf("%d\n", sizeof(&a+1));//数组指针加1还是数组指针所以只要是指针就是4
	//printf("%d\n", sizeof(&a+1));//a[0]得到的是1首元素整数取地址int*所以还是4
	//char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(a));//char类型7
	//printf("%d\n", sizeof(a+0));//数组名加减就变成指针指针就是4个字节
	//printf("%d\n", sizeof(*a));//*a得到的首元素为'a'字符a,char类型所以为1
	//printf("%d\n", sizeof(a[1]));// *a和a[1]都得到字符a,所以结果为1
	//printf("%d\n", sizeof(&a));//a数组名取地址得到了数组指针指针为4个字节
	//printf("%d\n", sizeof(&a+1));//&a为数组指针加1 还是数组指针
	//printf("%d\n", sizeof(&a[0] + 1)); //a[0]得到一个字符字符取地址得到char*,char*+1还是char*,
	////是char*指针所以为4只要是指针都为4
	//printf("%d\n", strlen(a));//未定义行为strlen是针对于c风格字符串必须以'\0'结尾,
	////没有'\0'则数组越界了直到找到'\0'为止
	//printf("%d\n", strlen(a+0));//也是未定义行为
	//printf("%d\n", strlen(*a));//*a一个字符strlen是char*类型不同也是未定义行为
	//printf("%d\n", strlen(a[1]));//也是类型不兼容
	//printf("%d\n", strlen(&a));//&a数组指针但是strlen和数组指针不是一样类型也是编译不通过
	//printf("%d\n", strlen(&a+1));//也是未定义行为
	//printf("%d\n", strlen(&a[0] + 1)); //首元素加1指向b从b开始找'\0'越界也是未定义行为
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//只要是指针就是四个字节
	//printf("%d\n", sizeof(p+1));//4,p+1还是指针
	//printf("%d\n", sizeof(*p));//结果为1,p是字符指针解引用则得到为a,字符sizeof就是1
	//printf("%d\n", sizeof(p[0]));//也是1和*p等价
	//printf("%d\n", sizeof(&p));//4指针取地址也是指针只不过是二级指针,二级指针也是指针只要是
	////指针就存房间号就是4个字节
	//printf("%d\n", sizeof(&p+1));//还是4;二级指针加1是二级指针
	//printf("%d\n", sizeof(&p[0]));// p[0]得到a,a 取地址指向a的指针然后加1为指向b的指针所以为4
	//printf("%d\n", strlen(p));//6测字符串长度以'\0'结尾但是strlen不会算'\0'不算结束符
	//printf("%d\n", strlen(p+1));//5指向了b然后从b开始数为5
	//printf("%d\n", strlen(*p));//*p得到了一个字符,字符不能计算
	//printf("%d\n", strlen(p[0]));//也是未定义
	//printf("%d\n", strlen(&p));//!!!p是个char*,p在取地址变成了char**成了二级指针不匹配未定义行为
	//printf("%d\n", strlen(&p+1));//char**加1还是二级指针未定义行为
	//printf("%d\n", strlen(&p[0] + 1));//!!!!,p[0]得到a,a取地址则为指向a的指针
	//再加1为指向b的指针从b开始算长度遇到'\0'结束所以为5
	//char a[] = "abcdef";
	//	printf("%d\n", sizeof(a));//7,sizeof算内存strlen算字符串长度,但是sizeof也要占字节空间所以为7
	//	printf("%d\n", sizeof(a+0));//数组名加减运算变成指针指针为4
	//	printf("%d\n", sizeof(*a));//数组名解引用变成首元素为字符a
	//	//为char 类型所以为1
	//	printf("%d\n", sizeof(a[1]));//取到的为b,还是1
	//	printf("%d\n", sizeof(&a));//数组名取地址为数组指针为4
	//	printf("%d\n", sizeof(&a+1));//数组指针加1还是数组指针,为4
//printf("%d\n", sizeof(&a[0] + 1));//还是4位char*的字符指针
//printf("%d\n", strlen(a));//结果为6
//printf("%d\n", strlen(a+0));//a本来指向首元素的地址加0还是,所以还是从a开始所以为6
//printf("%d\n", strlen(*a));//取到字符所以未定义行为
//printf("%d\n", strlen(a[1]));//不能所以未定义
//printf("%d\n", strlen(&a));//!!!a数组名数组名取地址变成数组指针
////数组指针里面的内容就是首元素的房间号所以首元素开始计算为6
//printf("%d\n", strlen(&a+1));//&a为数组指针数组指针加1为跳过整个数组
////已经指到\0的后面数组越界所以未定义行为
////printf("%d\n", strlen(&a[0] + 1)); //a[0]取到a在取地址指向a然后加1指向b所以为5
	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));//!!!得到的为4个元素的和为第一行的所有元素的字节为16
//	printf("%d\n", sizeof(a[0]+1));//!!!a[0]本来是个数组但是进行运算就变成了指针所以为4
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//*(p+1)等价p[1]所以该题为a[0][1]得到的一个整数位4个字节
//	printf("%d\n", sizeof(a+1));//a为数组名a+1变成指针了为4
//	printf("%d\n", sizeof(*(a+ 1)));//!!!为a[1]第二行长度为4个元素的整型所以为16
//	//*(p+1)等价p[1]所以等价于a[1]	
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//a[0]得到的数组a[0]然后取地址为&a[0]数组指针,数组指针加1还是数组指针
//	//就是跳过了第一行数组指向了第二行数组然后解引用得到第二行数组的本体;
//	//所以为16
//	printf("%d\n", sizeof(*a));
//	//*a相当于a[0]所以得到的为第一行的整个数组为16
	printf("%d\n", sizeof(a[3]));
	//a[3]为16但是下标越界sizeof在编译过程中就求出来了,但是在运行过程中
	//访问了一个非法内存,
	system("pause");
	return 0;
}