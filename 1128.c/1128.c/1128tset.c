# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//////���ʹ������ָ��
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
//void xchage(int* a, int n){//aΪ����ָ��
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
/////a������
/////for(p=a;a<p+10;p++){
/////printf("%d", *p); }
/////*(a+i)=a[i];
////(a+i)=&a[i],*Ϊ������
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
//��ָ�������ʵ��
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
//	p = arr;//��ָ��p����ָ���׵�ַ
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
//	//��������޷�ʵ�ֽ���
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
	//printf("%d", **pp);//����ָ��������һ��ָ��
	//ָ������Vs����ָ��
	//int a[] = { 1, 2, 3, 4 };
	//printf("%p\n", a);//������Ԫ�ص�ַ
	//printf("%p\n", (a + 1));//��1����4���ֽ�������һ��intԪ��
	//printf("%p\n", &a + 1);//��a�ĵ�ַ����16���ֽ�
	//Ҳ����&a+1����������������
	//&a��������ָ��,�Ǹ�ָ��ֻ�������ָ��ָ������������
	//int* a[] = { 0 };
	//ָ������,����������,ֻ�������������ÿ��Ԫ�ض���ָ��(int*)
	//����ָ������������
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//������������Ĵ�С16
	//printf("%d\n", sizeof(a + 0));
	////������������Ӽ�һ�����л���ʽת����ָ��ָ���0���Ǽ����һ��Ԫ��ռ�����ֽ�����Ϊ4
	//printf("%d\n", sizeof(*a));
	////�����������н�����ָ���һ��Ԫ��1,*a�õ���һ������λ��Ԫ��1����Ϊ1��int �������ĸ��ֽ�
	//printf("%d\n", sizeof(a+1));
	////a+1��a+0�����ֻͬ�����ǵ�һ��Ԫ��Ҳ��4
	//printf("%d\n", sizeof(a[1]));//�����һ��Ԫ������Ҳ��4
	//printf("%d\n", sizeof(&a));//����ָ�������ָ��һ��ָ�붼��4���ֽ�,ָ���Ԫ����16���ֽ�
	//printf("%d\n", sizeof(*&a));//16����ָ������þͳ�������(������)
	//printf("%d\n", sizeof(&a+1));//����ָ���1��������ָ������ֻҪ��ָ�����4
	//printf("%d\n", sizeof(&a+1));//a[0]�õ�����1��Ԫ������ȡ��ַint*���Ի���4
	//char a[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(a));//char����7
	//printf("%d\n", sizeof(a+0));//�������Ӽ��ͱ��ָ��ָ�����4���ֽ�
	//printf("%d\n", sizeof(*a));//*a�õ�����Ԫ��Ϊ'a'�ַ�a,char��������Ϊ1
	//printf("%d\n", sizeof(a[1]));// *a��a[1]���õ��ַ�a,���Խ��Ϊ1
	//printf("%d\n", sizeof(&a));//a������ȡ��ַ�õ�������ָ��ָ��Ϊ4���ֽ�
	//printf("%d\n", sizeof(&a+1));//&aΪ����ָ���1 ��������ָ��
	//printf("%d\n", sizeof(&a[0] + 1)); //a[0]�õ�һ���ַ��ַ�ȡ��ַ�õ�char*,char*+1����char*,
	////��char*ָ������Ϊ4ֻҪ��ָ�붼Ϊ4
	//printf("%d\n", strlen(a));//δ������Ϊstrlen�������c����ַ���������'\0'��β,
	////û��'\0'������Խ����ֱ���ҵ�'\0'Ϊֹ
	//printf("%d\n", strlen(a+0));//Ҳ��δ������Ϊ
	//printf("%d\n", strlen(*a));//*aһ���ַ�strlen��char*���Ͳ�ͬҲ��δ������Ϊ
	//printf("%d\n", strlen(a[1]));//Ҳ�����Ͳ�����
	//printf("%d\n", strlen(&a));//&a����ָ�뵫��strlen������ָ�벻��һ������Ҳ�Ǳ��벻ͨ��
	//printf("%d\n", strlen(&a+1));//Ҳ��δ������Ϊ
	//printf("%d\n", strlen(&a[0] + 1)); //��Ԫ�ؼ�1ָ��b��b��ʼ��'\0'Խ��Ҳ��δ������Ϊ
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//ֻҪ��ָ������ĸ��ֽ�
	//printf("%d\n", sizeof(p+1));//4,p+1����ָ��
	//printf("%d\n", sizeof(*p));//���Ϊ1,p���ַ�ָ���������õ�Ϊa,�ַ�sizeof����1
	//printf("%d\n", sizeof(p[0]));//Ҳ��1��*p�ȼ�
	//printf("%d\n", sizeof(&p));//4ָ��ȡ��ַҲ��ָ��ֻ�����Ƕ���ָ��,����ָ��Ҳ��ָ��ֻҪ��
	////ָ��ʹ淿��ž���4���ֽ�
	//printf("%d\n", sizeof(&p+1));//����4;����ָ���1�Ƕ���ָ��
	//printf("%d\n", sizeof(&p[0]));// p[0]�õ�a,a ȡ��ַָ��a��ָ��Ȼ���1Ϊָ��b��ָ������Ϊ4
	//printf("%d\n", strlen(p));//6���ַ���������'\0'��β����strlen������'\0'���������
	//printf("%d\n", strlen(p+1));//5ָ����bȻ���b��ʼ��Ϊ5
	//printf("%d\n", strlen(*p));//*p�õ���һ���ַ�,�ַ����ܼ���
	//printf("%d\n", strlen(p[0]));//Ҳ��δ����
	//printf("%d\n", strlen(&p));//!!!p�Ǹ�char*,p��ȡ��ַ�����char**���˶���ָ�벻ƥ��δ������Ϊ
	//printf("%d\n", strlen(&p+1));//char**��1���Ƕ���ָ��δ������Ϊ
	//printf("%d\n", strlen(&p[0] + 1));//!!!!,p[0]�õ�a,aȡ��ַ��Ϊָ��a��ָ��
	//�ټ�1Ϊָ��b��ָ���b��ʼ�㳤������'\0'��������Ϊ5
	//char a[] = "abcdef";
	//	printf("%d\n", sizeof(a));//7,sizeof���ڴ�strlen���ַ�������,����sizeofҲҪռ�ֽڿռ�����Ϊ7
	//	printf("%d\n", sizeof(a+0));//�������Ӽ�������ָ��ָ��Ϊ4
	//	printf("%d\n", sizeof(*a));//�����������ñ����Ԫ��Ϊ�ַ�a
	//	//Ϊchar ��������Ϊ1
	//	printf("%d\n", sizeof(a[1]));//ȡ����Ϊb,����1
	//	printf("%d\n", sizeof(&a));//������ȡ��ַΪ����ָ��Ϊ4
	//	printf("%d\n", sizeof(&a+1));//����ָ���1��������ָ��,Ϊ4
//printf("%d\n", sizeof(&a[0] + 1));//����4λchar*���ַ�ָ��
//printf("%d\n", strlen(a));//���Ϊ6
//printf("%d\n", strlen(a+0));//a����ָ����Ԫ�صĵ�ַ��0����,���Ի��Ǵ�a��ʼ����Ϊ6
//printf("%d\n", strlen(*a));//ȡ���ַ�����δ������Ϊ
//printf("%d\n", strlen(a[1]));//��������δ����
//printf("%d\n", strlen(&a));//!!!a������������ȡ��ַ�������ָ��
////����ָ����������ݾ�����Ԫ�صķ����������Ԫ�ؿ�ʼ����Ϊ6
//printf("%d\n", strlen(&a+1));//&aΪ����ָ������ָ���1Ϊ������������
////�Ѿ�ָ��\0�ĺ�������Խ������δ������Ϊ
////printf("%d\n", strlen(&a[0] + 1)); //a[0]ȡ��a��ȡ��ַָ��aȻ���1ָ��b����Ϊ5
	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));//!!!�õ���Ϊ4��Ԫ�صĺ�Ϊ��һ�е�����Ԫ�ص��ֽ�Ϊ16
//	printf("%d\n", sizeof(a[0]+1));//!!!a[0]�����Ǹ����鵫�ǽ�������ͱ����ָ������Ϊ4
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//*(p+1)�ȼ�p[1]���Ը���Ϊa[0][1]�õ���һ������λ4���ֽ�
//	printf("%d\n", sizeof(a+1));//aΪ������a+1���ָ����Ϊ4
//	printf("%d\n", sizeof(*(a+ 1)));//!!!Ϊa[1]�ڶ��г���Ϊ4��Ԫ�ص���������Ϊ16
//	//*(p+1)�ȼ�p[1]���Եȼ���a[1]	
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//a[0]�õ�������a[0]Ȼ��ȡ��ַΪ&a[0]����ָ��,����ָ���1��������ָ��
//	//���������˵�һ������ָ���˵ڶ�������Ȼ������õõ��ڶ�������ı���;
//	//����Ϊ16
//	printf("%d\n", sizeof(*a));
//	//*a�൱��a[0]���Եõ���Ϊ��һ�е���������Ϊ16
	printf("%d\n", sizeof(a[3]));
	//a[3]Ϊ16�����±�Խ��sizeof�ڱ�������о��������,���������й�����
	//������һ���Ƿ��ڴ�,
	system("pause");
	return 0;
}