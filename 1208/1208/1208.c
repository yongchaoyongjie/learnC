# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
///���ַ�����������������
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
	////	printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
	////	printf("����a��b\n");
	////	copy_string(a, b);
	////	printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
	////	system("pause");
	////	return 0;
	////}
	//���ַ���ָ�������ʵ��

	//void copy_string(char ,char );
	//char a[] = "i am a teacher";
	//char b[] = "you are a student";
	//char * from = a;//ָ�����from��ֵ��a����Ԫ�صĵ�ַ,ͬ��b
	//������Ϊʵ�ΰ�ab����Ԫ�صĵ�ַ���ݸ��β�������from,to(ʵ��Ҳ��ָ�����)
	//char *to = b;
	//printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
	//	printf("����a��b\n");
	//	copy_string(from,to);//ʵ��Ϊ�ַ�ָ�����
	//	printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
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
	///���ַ�ָ��������βκ�ʵ��(������)
	//	void copy_string(char *from ,char *to);
	//	char *a = "i am a teacher";
	//	char b = "i am a student";
	//	char *p = b;
	//	printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
	//		printf("����a��b\n");
	//		copy_string(a,p);
	//		printf("�ַ���a=%s\n,�ַ���b=%s\n", a, b);
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
	///ָ�������ֵ�ǿ��Ըı�Ķ�����������һ���̶���ֵ(�׵�ַ)�޷��ı�
	//char *a = "i love china!";//��ָ��a��ʱָ��Ԫ�ؿ�ʼ�����������ַ�
	/////char a[] = { "i love china" };�����������ַ,���ǳ���ֵ����
	//a += 7;
	//printf("%s\n", a);
	///!!!!!!ͨ��ָ�������������ָ��ĺ���
	//	int maxz(int ,int);
	//	int(*p)(int, int);//����ָ������ָ�����
	//	int a, b, c;
	//	p = maxz;//ʹpָ��max����
	//	printf("����a,b\n");
	//	scanf("%d%d", &a, &b);
	//	c = (*p)(a, b);//!!!!!ͨ��ָ���������maxz����
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
	//��ָ������ָ�����
	//������������Ȼ���û�ѡ��1����2,ѡ1����max������������,ѡ2
	//����min����,���������С
	//	int maxz(int a, int b);
	//	int minz(int a, int b);
	//	int(*p)(int, int)=0;//!!!����ָ������ָ�����
	//	int a, b, c, n;
	//	printf("������������a/b");
	//	scanf("%d%d", &a, &b);
	//	printf("������ѡ���ģʽ1/2\n");
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
	//����ָ��ֵ�ĺ���
	//����һ����ά����,score���ѧ���ĳɼ�,a��ѧ��b�ſγ�,����ѧ�����ѧ���ɼ�
	float score[][4] = { { 60, 70, 80, 90 }, { 56, 89, 67, 88 }, {
		34, 78, 90, 60 } };
	float (*search)(float(*pointer)[4], int n);//����Ϊָ�����͵ĺ���
	///�β���ָ�����4��Ԫ�ص�һά�����ָ�����
	float *p;
	int i, k;
	printf("������ѧ��ѧ��\n");
	scanf("%d", &k);
	printf("�����ǵ�%d\n", k);
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
	p1 = *(pointer + n);//pointer+1ָ��score �������Ϊ1����,
	//�Ӹ�*���Ǵ��п���ת��Ϊ�п���
	return p1;
}
