# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//��ָ�����ָ������Ԫ��
int main(){
	printf("��ӡ9*9�ĳ˷��ھ���\n");
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
	//	int *p;	//	printf("�����������\n");
	//	for (int i = 0; i < 5; i++){
	//		scanf("%d", &a[i]);
	//	}
	//	for (p = a; p < a + 5; p++){
	//		printf("%d\n", *p);
	//	}
	//	system("pause");
	//	return 0;
	//}
	//ͨ��ָ����������������A�����Ԫ��
	//int *p, i, a[5];
	//p = a;//ָ�����ָ����������ʵ��ָ���������Ԫ��
	//for (i = 0; i < 5; i++){
	//	scanf("%d",p++);
	//}
	//p = a;
	//for (i = 0; i < 5; i++){
	//
	//	printf("%d", *p++);//�����ô���++
	//	//p++;
	//}
	//int *p, i, a[5];
	//p = a;
	//for (i = 0; i < 5; i++){
	//	scanf("%d", p++);
	//}
	//p = a;//û����������p++ֱ�Ӵ�(p+5)++��ʼ
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
	////*p++��*++p����ͬǰ����*pȻ��ʹp+1,������ʹp+1Ȼ����*
	///eg a[0]���ǰ�ߵõ�a[0];������ߵõ�a[1];
	///��ָ�������ʵ�ΰ����෴��˳�����
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
	//	//��for
	//	mid = (n - 1) / 2;
	//	end =arr + n - 1;
	//	for (star; star < arr + mid; star++, end--)//star+1ʱ��end-1
	//		temp = *star;
	//		*star = *end;
	//		*end = temp;
	//	}
	//}
	///!!!�м���ָ�������ʵ�ε�ʱ����������Ҫ���������������ָ��
	///��ָ��ķ�����ʮ�������дӴ�С˳�����
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
	//	//�����ά������й�����
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
	//�����ά��������һ��һ��Ԫ�ص�ֵ
	//int a[3][4] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 };
	//int(*p)[4];//ָ�����pָ�����4������Ԫ�ص�����
	/////����ʵָ������ĸ�����Ԫ��һά����
	//p = a;
	//int i, j;
	//scanf("%d%d", &i, &j);//i��j��*(P+i)��i�����е�Ԫ��
	//printf("a[%d][%d]=%d", i, j, *(*(p + i) + j));
	//system("pause");
	//return 0;
	//}
	//ͨ���ַ�ָ��������һ���ַ���
	//c���Զ�Ӧ�ַ��������ǰ����ַ����鴦���,��������ַ�����
	//��û�����ֵ����в���ͨ����������������ͨ��ָ��������
	//char *string = "i love you do you konw?";
	//char * string;
	//string = "i love you do you konw?";
	//			printf("%s", string);
	//		system("pause");
	//		return 0;
	//	}
	//���ַ���a����Ϊ�ַ���b,Ȼ������ַ���b
	//char a[] = "i am a student";
	//char b[20];
	//int i;
	//for (i = 0; i != '\0'; i++){
	//	*(b + i) = *(a + i);//a[i]��b[i]
	//}
	//*(b + i) != '\0';
	//printf("�ַ���aΪ%s\n", a);
	//printf("�ַ���bΪ\n");
	//for (i = 0; b[i] != '\0'; i++){//???Ϊʲô����?
	//	printf("%c", b[i]);
	//}
	//printf("\n");

//��ָ���������
//char a[] = "i am a student";
//char b[20],*p1,*p2;
//p1 = a;
//p2 = b;
//printf("�ַ���aΪ%s\n", p1);
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