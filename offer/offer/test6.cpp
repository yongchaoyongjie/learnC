#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//二进制中的1--与1与然后右移第二位和1与然后继续
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
//但是有bug为负数就奔了
//解决方法不右移数组把n和1做与之后将1左移然后第二位在和它与
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
//负数也适合,循环32次
//一个整数减去1在和原整数与会把整数最右边的1变成0一个整数2进制
//表示有多少个1就可以进行多少次这样的操作
int numberof3(int n){
	int count = 0;
	while (n){
		++count;
		n = n&(n - 1);
	}
	return count;
}
//输入两个整数m,n计算需要改变m的二进制表示中的多少位能得到n
//(1)求两个数的异或,(2)统计异或中1的个数
int change(int m, int n){
	int count = m^n;
	return count;
}
//数值的整数次方
//bool g_cimi = false;
//底数为0 负数和正数都需要考虑
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
//打印从1-n--考虑大数的问题将数字转换为字符串最大数字为n所以需要
//字符串n+1
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
//换思维在数字前面补0,n位十进制数起始是n个从0-9的全排列也就是数字
//每一位都从0-9排列一遍就得到了所有的十进制,只是在打印的时候0不打印
//出来
//全排列用递归数字的每一位都肯是0-9的一个数然后设置下一位递归结束
//的条件是我们已经设置了数字的最后一位
void printtomaxnumber(int n){//打印最大的数字,最大的数字是0-9
	//的全排列
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
	for (int i = 0; i < 10; i++){//打印下一位
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