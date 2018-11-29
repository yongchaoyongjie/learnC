# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//跳水比赛
//b=2,a=3
//b=2,e=4
//c=1,d=2
//c=5,d=3
//e=4,a=1,条件一半真转换成逻辑语句为
//(b==2&&a!=3)||(b!=2&&a==3)
//(b==2&&e!=4)||(b!=2&&e==4)
//(c==1&&d!=2)||(c!=1&&d==2)
//(c==5&&d!=3)||(c!=5&&d==3)
//(e==4&&a!=1)||(e!=4&&a==1)
//总共a5种b5种c5种d5种e5种都有一种情况为真所以需要五个循环
//法1
//void jdge(){
//	int a, b, c, d, e;
//	
//	for ( a=1; a <=5; a++){
//		for ( b=1; b <=5; b++){
//			for (c=1; c <=5; c++){
//				for (d=1; d <= 5; d++){
//					for (e=1; e <= 5; e++){
//						if (((b == 2 && a != 3) || (b != 2 && a == 3))
//							&& ((b == 2 && e != 4) || (b != 2 && e == 4))
//							&& ((c == 1 && d != 2) || (c != 1 && d == 2))
//							&& ((c == 5 && d != 3) || (c != 5 && d == 3))
//							&& ((e == 4 && a != 1) || (e != 4 && a == 1))
//							== 1){
//							if (a*b*c*d*e==120){
//								printf("A=%d,B=%d,C = %d,D= %d,E=%d\n",
//									a, b, c, d, e);
//							}
//						
//						}
//					}
//				}
//			
//			}
//		}
//	}
//}
//int main(){
//	jdge();
//	system("pause");
//	return 0;
//}
//void jdge(){
//	int a, b, c, d, e;
//
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){//有一个为真另一个一定为假加起来等于1
//						if (((b == 2 ) + ( a == 3)==1)
//							&& ((b == 2)+ ( e == 4)==1)
//							&& ((c == 1) + ( d == 2)==1)
//							&& ((c == 5 ) + (d == 3)==1)
//							&& ((e == 4 ) + (a == 1)==1)
//							== 1){
//							if (a*b*c*d*e == 120){
//								printf("A=%d,B=%d,C = %d,D= %d,E=%d\n",
//									a, b, c, d, e);
//								////加法a1b2c3d4e5有重复
//								//if (a+b+c+d+e == 15){
//								//	printf("A=%d,B=%d,C = %d,D= %d,E=%d\n",
//								//		a, b, c, d, e);
//							}
//
//						}
//					}
//				}
//
//			}
//		}
//	}
//}
//int main(){
//	jdge();
//	system("pause");
//	return 0;
//}
//找凶手 a不是我
//b是c
//c是d
//d是胡说
//有一个说的是假的
//转化成逻辑语句为
//killer!='a'
//killer='c';
//killer='d';
//killer!='d';
//void judge(){
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') +
//			(killer == 'd') + (killer != 'd') == 3){
//			printf("找到了!\n凶手为killer=%c\n", killer);
//breack;
//		}
//	}
//}
//int main(){
//	judge();
//	system("pause");
//	return 0;
//}
//写一个函数中返回参数二进制中的1
//法1
//int  rebcak(unsigned int n){
//	int count = 0;
//	for (int i = 0; i < 32;i++){
//		if (((n>>i)&1)==1){
//			count++;
//		}
//	}
//	return count;
//}
//
//int main(){
//	int rebcak(unsigned int);
//	int n;
//	scanf("%d", &n);
//		rebcak( n);
//		printf("一共有1的个数为%d\n", rebcak(n));
//		system("pause");
//		return 0;
//}
////法2
////int rebcak(unsigned int n){
////	int count=0;
////	while(n){
////		//count++;
////		n = n&(n - 1);//n 与n-1相互与的结果就是从低位
////到高位第一次出现1的位置变为0
////		count++;
////		}
////	return count;
////}
//获取一个二进制序列所有的偶数和奇数序列
//void gethard(int n){
//	//偶数位从高位32位就是第31位
//	for (int i = 31; i > 0; i -= 2){
//		printf("%d", (n >> i)&1);
//	}
//	//奇数从31位也就是30位到0位也就是第一位
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2){
//		printf("%d", (n >> i)&1);
//	}
//}
//
//int main(){
//	int a;
//	scanf("%d", &a);
//	printf("\n");
//	gethard(a);
//	system("pause");
//	return 0;
//}
//两个int整数m,n二进制中有多少位不同
//法1n和m各左移i位看是不是与1等
//int  difrent(int n,int m){
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){
//		if ((n >> (i))&1==(m >> i)&1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int  difrent(int n, int m);
//		int a;
//		int b;
//		scanf("%d%d", &a,&b);
//		printf("他们一共有%d位不同",difrent(a, b));
//		system("pause");
//		return 0;
//	}
////法2,亦或等于1表示这个数在该位置不同
//int  difrent(int n, int m){
//	int ret = m^n;
//	int count = 0;
//	while (ret){
//		ret = ret&(ret - 1);
//			count++;
//	}
//	return count;
//}
//
//递归实现strlen
//int s_strlen(char* str){
//	if (*str){//表示不是空字符'\0'(1+子串长度)
//		return 1 + s_strlen(str + 1);
//	}
//	else return 0;
//}
int main(){
	int n_strlen(char* str);
	char str[100];
	scanf("%s", str);
	printf("%d", n_strlen(str));
	system("pause");
	return 0;
}
//不用递归实现strlen
int n_strlen(char* str){
	int count = 0;
	/*for (int i = str; str!= '\0'; i++,*str++){
		count++;
	}*/
	while (*str){//不是"\0"
		str++;
		count++;
	}
	/*for (char i = str; i= '\0'; i++){
	count++;
	}*/
	return count;
}