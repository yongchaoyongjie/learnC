# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
////������00001100-00110000
////��1
// int harvest( int n){
//	int sum=0;
//	int i;
//	for (i = 1; i <= 32; i++){
//		sum += ((n >>i)& 1)*pow(2, 32 - i);
//	}
//	return sum;
//}
//// //��2 
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
////ʵ��(a+b)/2;
/////��1,����1λ��2����1����2
////�ᵼ�����
//unsigned int average(unsigned int a, unsigned int b){
//	unsigned int sum;
//	return sum = (a + b) >> 1;
//	return sum;
//}
//////�Ż�
//unsigned int averagea(unsigned int a, unsigned int b){
//	unsigned int sum;
//	return sum = ((b-a)>>1)+a;//a+(b-a)/2=(a+b)/2
//	return sum;
//}
////����������
//unsigned int avera(unsigned int a, unsigned int b){
//	unsigned int sum;
//	sum = a&b+((a^b) >> 1) ;
//	//���ȡ��1��λ����ͬ����1��ƽ��ֵ
//	//����ȡ��ͬ��λ����01 ��ƽ��ֵ
//	//����ͬλ�ú͵Ľ������2���ǲ���ͬλ��ƽ��ֵ
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
////һ������ֻҪһ����������һ���������ǳɶԳ���
//�������,��Ӧλ��1�ĸ���Ϊ�����������Ϊ1
//��������Ӧλ��1�ĸ���Ϊż�������Ľ��Ϊ0
//����������������˳��û�й�ϵ������1�ĸ����й�(������)
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
///�ַ���Ϊ student a am i���i am student 
//����������ת i ma a tnedutsȻ��ֲ���ת���i am student 
//�����ַ�������
//int mystrlen(char *str){
//	int count;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
/////��ת
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
//	char *star = str;///???�ض���????
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
///��������ʹ����ȫ��λ��ż����ǰ��
//void revers_arr(int arr[],int n){
//	int right =n-1 ;//�ұ߿�ʼ������
//	int left = 0;//��߿�ʼ��ż��
//	while (left < right){
//		while (left < right&&arr[left] % 2 != 0){
//			left++;
//		}
//		while (left < right&&arr[right] % 2 == 0){
//			right--;
//		}
//		if (left < right){
//			//�ҵ��Ժ�ż�����������໻λ��
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
//ʹ��ָ��ָ�����ݵ�ָ�����
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