# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//��ˮ����
//b=2,a=3
//b=2,e=4
//c=1,d=2
//c=5,d=3
//e=4,a=1,����һ����ת�����߼����Ϊ
//(b==2&&a!=3)||(b!=2&&a==3)
//(b==2&&e!=4)||(b!=2&&e==4)
//(c==1&&d!=2)||(c!=1&&d==2)
//(c==5&&d!=3)||(c!=5&&d==3)
//(e==4&&a!=1)||(e!=4&&a==1)
//�ܹ�a5��b5��c5��d5��e5�ֶ���һ�����Ϊ��������Ҫ���ѭ��
//��1
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
//					for (e = 1; e <= 5; e++){//��һ��Ϊ����һ��һ��Ϊ�ټ���������1
//						if (((b == 2 ) + ( a == 3)==1)
//							&& ((b == 2)+ ( e == 4)==1)
//							&& ((c == 1) + ( d == 2)==1)
//							&& ((c == 5 ) + (d == 3)==1)
//							&& ((e == 4 ) + (a == 1)==1)
//							== 1){
//							if (a*b*c*d*e == 120){
//								printf("A=%d,B=%d,C = %d,D= %d,E=%d\n",
//									a, b, c, d, e);
//								////�ӷ�a1b2c3d4e5���ظ�
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
//������ a������
//b��c
//c��d
//d�Ǻ�˵
//��һ��˵���Ǽٵ�
//ת�����߼����Ϊ
//killer!='a'
//killer='c';
//killer='d';
//killer!='d';
//void judge(){
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') +
//			(killer == 'd') + (killer != 'd') == 3){
//			printf("�ҵ���!\n����Ϊkiller=%c\n", killer);
//breack;
//		}
//	}
//}
//int main(){
//	judge();
//	system("pause");
//	return 0;
//}
//дһ�������з��ز����������е�1
//��1
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
//		printf("һ����1�ĸ���Ϊ%d\n", rebcak(n));
//		system("pause");
//		return 0;
//}
////��2
////int rebcak(unsigned int n){
////	int count=0;
////	while(n){
////		//count++;
////		n = n&(n - 1);//n ��n-1�໥��Ľ�����Ǵӵ�λ
////����λ��һ�γ���1��λ�ñ�Ϊ0
////		count++;
////		}
////	return count;
////}
//��ȡһ���������������е�ż������������
//void gethard(int n){
//	//ż��λ�Ӹ�λ32λ���ǵ�31λ
//	for (int i = 31; i > 0; i -= 2){
//		printf("%d", (n >> i)&1);
//	}
//	//������31λҲ����30λ��0λҲ���ǵ�һλ
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
//����int����m,n���������ж���λ��ͬ
//��1n��m������iλ���ǲ�����1��
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
//		printf("����һ����%dλ��ͬ",difrent(a, b));
//		system("pause");
//		return 0;
//	}
////��2,������1��ʾ������ڸ�λ�ò�ͬ
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
//�ݹ�ʵ��strlen
//int s_strlen(char* str){
//	if (*str){//��ʾ���ǿ��ַ�'\0'(1+�Ӵ�����)
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
//���õݹ�ʵ��strlen
int n_strlen(char* str){
	int count = 0;
	/*for (int i = str; str!= '\0'; i++,*str++){
		count++;
	}*/
	while (*str){//����"\0"
		str++;
		count++;
	}
	/*for (char i = str; i= '\0'; i++){
	count++;
	}*/
	return count;
}