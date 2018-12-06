# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
////二进制00001100-00110000
////法1
// int harvest( int n){
//	int sum=0;
//	int i;
//	for (i = 1; i <= 32; i++){
//		sum += ((n >>i)& 1)*pow(2, 32 - i);
//	}
//	return sum;
//}
//// //法2 
// int revers(int q){
//	 int temp = 0;
//	 int i;
//	 for (i = 0; i < 32; i++){
//		 temp = temp << 1;
//		 temp = temp | ((q >> i) & 1);
//		}
//	 return temp;
// }
//int main(){
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", harvest(n));
//	printf("%d\n", revers(n));
//	system("pause");
//	return 0;
//}
////实现(a+b)/2;
/////法1,右移1位除2左移1乘以2
////会导致溢出
//unsigned int average(unsigned int a, unsigned int b){
//	unsigned int sum;
//	return sum = (a + b) >> 1;
//	return sum;
//}
//////优化
//unsigned int averagea(unsigned int a, unsigned int b){
//	unsigned int sum;
//	return sum = ((b-a)>>1)+a;//a+(b-a)/2=(a+b)/2
//	return sum;
//}
////解决溢出问题
//unsigned int avera(unsigned int a, unsigned int b){
//	unsigned int sum;
//	sum = a&b+((a^b) >> 1) ;
//	//与获取了1个位置想同都是1的平均值
//	//亦或获取了同个位置是01 的平均值
//	//不相同位置和的结果除以2就是不相同位的平均值
//	return sum;
//}
//int main(){
//	unsigned int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%u\n", average( a,  b));
//	printf("%u\n", averagea(a, b));
//	printf("%u\n", avera(a, b));
//	system("pause");
//	return 0;
//}
////一个数组只要一个数出现了一次其他都是成对出现
//连续亦或,对应位上1的个数为奇数则亦或结果为1
//连续亦或对应位上1的个数为偶数则亦或的结果为0
//连续亦或结果和运算的顺序没有关系与其中1的个数有关(二进制)
//int find(int a[],int n){
//	int ret = 0;
//	for (int i = 0; i < n; i++){
//		ret ^= a[i];
//	}
//	return ret;
//}
//int main(){
//	int a[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
//	printf("%d", find(a, sizeof(a) / sizeof(a[0])));
//	system("pause");
//	return 0;
//}
///字符串为 student a am i变成i am student 
//首先整体逆转 i ma a tneduts然后局部逆转变成i am student 
//计算字符串长度
//int mystrlen(char *str){
//	int count;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
/////逆转
//void revers_string(char *star,char *end){
//	char *star = str;////???????
//	char  *end = str + mystrlen(str)-1;
//	while (star<end){
//		char temp = *star;
//		*star = *end;
//		*end = temp;
//	}
//}
//void revers(char *str){
//	int len = mystrlen(str);
//	char *star = str;///???重定义????
//	char *end =  mystrlen(str) - 1;
//	char * cur = str;//???
//	revers_string(star, end);
//	while (*cur){
//		char *st = cur;
//		while (*cur != ' '&&cur != '\0'){
//			cur++;
//		}
//		while (*cur == ' '){
//			cur++;
//		}
//	}
//}
//int main(){
//	char str[100];
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
///调整数组使奇数全部位于偶数的前面
//void revers_arr(int arr[],int n){
//	int right =n-1 ;//右边开始找奇数
//	int left = 0;//左边开始找偶数
//	while (left < right){
//		while (left < right&&arr[left] % 2 != 0){
//			left++;
//		}
//		while (left < right&&arr[right] % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			//找到以后偶数和奇数互相换位置
//			arr[left] = arr[left] ^ arr[right];
//			arr[right] = arr[left] ^ arr[right];
//			arr[left] = arr[left] ^ arr[right];
//		}
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	revers_arr(arr, 10);
//	for (int i = 0; i < 10; i++){
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//使用指向指针数据的指针变量
int main(){
	char * name[] = { "Follow me", "BASICC", "computer", 
	"Greatwall" };
	char **p;
	int i;
	for (i = 0; i < 5; i++){
		p = name + i;
		printf("%s\n", *p);
	}
	system("pause");
	return 0;
}