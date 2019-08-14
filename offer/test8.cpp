
#include<iostream>
using namespace std;
//int check(){
//	union{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main(){
//	int i = 1;
//	int ret = *(char*)&i;
//	if (check() == 1){//低位存低地址
//		cout << "小端" << endl;
//	}
//	else{
//		cout << "大端" << endl;
//	}
//	int a = 20;
//	int b = -10;
//	return 0;
//}
void TestFunc(int a = 0) {
	cout << a << endl;
}
void TestRef()
{
	int a = 10;
	int& ra = a;//<====定义引用类型
	printf("%p\n", &a);
	printf("%p\n", &ra);
}
void TestConstRef()
{
	//const int a = 10;
	//int& ra = a; // 该语句编译时会出错，a为常量
	//const int& ra = a;
	// int& b = 10; // 该语句编译时会出错，b为常量
	//const int& b = 10;
	double d = 12.34;
	//int& rd = d; // 该语句编译时会出错，类型不同
	const int& rd = d;
	cout << d << endl;
	cout << rd << endl;
}
int &add(int a, int b){
	int c = a + b;
	return c;
}
//int main(){
//	int & ret = add(1, 2);
//	cout << "add(1,2) is " << ret << endl;
//	add(3, 4);
//	cout << "haha没想到把" << endl;
//	cout << "add(1,2) is " << ret << endl;
//}
//int main()
//{
//	TestConstRef();
//	TestFunc(); // 没有传参时，使用参数的默认值
//	TestFunc(10); // 传参时，使用指定的实参
//	TestRef();
//}
//int arryfunc(int pos){
//	static int a[10] = { 1, 2, 3 };
//	return a[pos];
//}
//int main(){
//	cout << arryfunc(0) << endl;
//
//	//arryfunc(0) = 10;
//
//}
//int &arryfunc(int pos){
//	static int a[10] = { 1, 2, 3 };
//	return a[pos];
//}
//int main(){
//	arryfunc(0) = 10;
//	arryfunc(1) = 11;
//	arryfunc(2) = 12;
//	arryfunc(3) = 13;
//	cout << arryfunc(0) << endl;
//	cout << arryfunc(1) << endl;
//	cout << arryfunc(2) << endl;
//	cout << arryfunc(3) << endl; 
//}
class Date
{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();
	d2.Display();
	return 0;
}
