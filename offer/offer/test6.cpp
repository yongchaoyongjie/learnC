#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//�������е�1--��1��Ȼ�����Ƶڶ�λ��1��Ȼ�����
int numberof1(int n){
	int count = 0;
	while (n){
		if (n & 1){
			count++;
		}
		n = n >> 1;
	}
	return count;
}
//������bugΪ�����ͱ���
//������������������n��1����֮��1����Ȼ��ڶ�λ�ں�����
int numberof2(int n){
	int count = 0;
	unsigned int biaozhi = 1;
	while (biaozhi){
		if (biaozhi&n){
			count++;
		}
		biaozhi = biaozhi << 1;
	}
	return count;
}
//����Ҳ�ʺ�,ѭ��32��
//һ��������ȥ1�ں�ԭ���������������ұߵ�1���0һ������2����
//��ʾ�ж��ٸ�1�Ϳ��Խ��ж��ٴ������Ĳ���
int numberof3(int n){
	int count = 0;
	while (n){
		++count;
		n = n&(n - 1);
	}
	return count;
}
//������������m,n������Ҫ�ı�m�Ķ����Ʊ�ʾ�еĶ���λ�ܵõ�n
//(1)�������������,(2)ͳ�������1�ĸ���
int change(int m, int n){
	int count = m^n;
	return count;
}
//��ֵ�������η�
//bool g_cimi = false;
//����Ϊ0 ��������������Ҫ����
double cifang(double n, int a){
	double jieguo;
	bool g_cimi = false;
	if (equal(n,0.0&&a<0){
		g_cimi = ture;
	}
	unsigned int absen = (unsigned int)(a);
	if (a < 0){
		absen = (unsigned int )(-a);
	}
	jieguo = powerwithunsigeda(n, absen);
	if (a < 0){
		jieguo = 1.0 / jieguo;
		return jieguo;
	}
}
double powerwhithunsigeda(double base, unsigned int a){
	double jieguo = 1.0;
	for (int i = 1; i < a; i++){
		jieguo *= base;
	}
	return jieguo;
}
double powerwhithunsigeda1(double base, unsigned int a){
	if (a == 0){
		return 1;
	}
	if (a == 1){
		return base;
	}
	double jieguo = powerwhithunsigeda1(base, a>>1);
	jieguo *= jieguo;
	if (a & 0x1 == 1){
		jieguo *= base;
	}
	return jieguo;
}
//��ӡ��1-n--���Ǵ��������⽫����ת��Ϊ�ַ����������Ϊn������Ҫ
//�ַ���n+1
void printfdashu(int n){
	if (n <= 0){
		return;
	}
	char*num = new char[n + 1];

}
bool increment(char*number){
	bool isoverflow = true;
	int  ntakeover = 0;
	int nlength = strlen(number);
	for (int i = nlength - 1; i >= 0; i--){
		int nsum = number[i] - '0' + ntakeover;
		if (i == nlength - 1){
			nsum++;
		}
		if (nsum > 10){
			if (i == 0){
				isoverflow = true;
			}
			else{
				nsum -= 10;
				ntakeover = 1;
				number[i] = '0' + nsum;
			}
		}
		else{
			number[i] = '0' + nsum;
			break;
		}
	}
	return isoverflow;
}
void printfnumber(char*number){
	bool isbegin= true;
	int nlength = strlen(number);
	for (int i = 0; i < nlength; i++){
		if (isbegin && number[i] != '\0'){
			isbegin = false;
		}
		if (!isbegin){
			cout << number[i] << " ";
		}
	}
	cout << endl;
}
//��˼ά������ǰ�油0,nλʮ��������ʼ��n����0-9��ȫ����Ҳ��������
//ÿһλ����0-9����һ��͵õ������е�ʮ����,ֻ���ڴ�ӡ��ʱ��0����ӡ
//����
//ȫ�����õݹ����ֵ�ÿһλ������0-9��һ����Ȼ��������һλ�ݹ����
//�������������Ѿ����������ֵ����һλ
void printtomaxnumber(int n){//��ӡ��������,����������0-9
	//��ȫ����
	if (n <= 0){
		return;
	}
	char*number = new char[n + 1];
	number[n] = '\0';
	for (int i = 0; i < 10; i++){
		number[i] = '0' + i;
		printtomaxdigui(number, n, 0);
	}
	delete[]number;
}
void printtomaxdigui(char*number, int length, int index){
	if (index == length - 1){
		printfnumber1(number);
		return;
	}
	for (int i = 0; i < 10; i++){//��ӡ��һλ
		number[index + 1] = i + '0';
		printtomaxdigui(number, length, index + 1);
	}
}
void printfnumber1(char*number){
	bool isbegin = true;
	int nlength = strlen(number);
	for (int i = 0; i < nlength; i++){
		if (isbegin && number[i] != '\0'){
			isbegin = false;
		}
		if (!isbegin){
			cout << number[i] << " ";
		}
	}
int main(){
	cout << numberof1(3) << endl;
	cout << numberof2(-2) << endl;
	cout << numberof3(0) << endl;
	return 0;
}