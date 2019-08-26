#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
//double Div(int a, int b) {
//	// 当b == 0时抛出异常
//	if (b == 0)
//		throw "除0错误!";
//	else
//		return ((double)a / (double)b);
//}
//void func()
//{
//	int len, time;
//	cin >> len >> time;
//	cout << Div(len, time) << endl;
//}
//int main()
//{
//	try {
//		func();
//	}
//	catch (const char* message){
//		cout << message << endl;
//	}
//	catch (...){
//		cout << "不明确信息" << endl;
//	}
//	return 0;
//}
double Division(int a, int b) {
	// 当b == 0时抛出异常
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (double)a / (double)b;
}
void Func()
{
	// 这里可以看到如果发生除0错误抛出异常，另外下面的array没有得到释放。
	// 所以这里捕获异常后并不处理异常，异常还是交给外面处理，这里捕获了再
	// 重新抛出去。
	int* array = new int[10];
	try {
		int len, time;
		cin >> len >> time;
		cout << Division(len, time) << endl;
	}
	catch (...)
	{
		cout << "delete []" << array << endl;
		delete[] array;
		throw;
	}
	// ...
	cout << "delete []" << array << endl;

		delete[] array;
}
//int main()
//{
//	try
//	{
//		Func();
//	}
//	catch (const char* errmsg)
//	{
//		cout << errmsg << endl;
//	}
//	return 0;
//}
struct Goods
{
	string _name;
	double _price;
};
struct Compare
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price <= gr._price;
	}
};
//int main()
//{
//	/*Goods gds[] = { { "苹果", 2.1 }, { "相交", 3 }, { "橙子", 2.2 }, { "菠萝", 1.5 } };
//	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), Compare());
//	for (auto&e : gds){
//		cout <<e._price<<endl;
//	}*/
//	Goods gds[] = { { "苹果", 2.1 }, { "相交", 3 }, { "橙子", 2.2 }, { "菠萝", 1.5 } };
//	sort(gds, gds + sizeof(gds) / sizeof(gds[0]),
//		[](const Goods& gl1, const Goods& gl2){ return gl1._price <= gl2._price; });
//	for (auto&e : gds){
//		cout << e._price << endl;
//	}
//	return 0;
//}
//字符串转数字
class solution{
public:
	int stringtoint(string str){
		if (str.empty()){
			return 0;
		}
		int biaoji = 1;
		if (str[0] == '-'){
			biaoji = -1;
			str[0] = '0';
		}
		else if(str[0]=='+'){
			biaoji = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (size_t i = 0; i < str.size(); i++){
			if (str[i] < '0'&&str[i]>'9'){
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		return sum*biaoji;
	}
};
//输入一个正整数最小变成feib那切的步数
//n为正整数,找到离n最近的fib左边的fib和右边的fib然后min(n-l,r-n)
int main(){
	int n, l = 0, r = 0, f0 = 0, f1 = 1,f;
	cin >> n;
	while (1){
		f = f0 + f1;
		f1 = f;
		f0 = f1;
		//这三步就让它变成fib了
		if (f < n){
			l = n - f;
		}
		if (f>n){
			r = f - n;
			break;
		}
	}
	cout << min(r, l) << endl;
	return 0;
}
//合法括号判断
//用栈结构实现，栈中存放左括号，当遇到右括号之后，检查栈中是否有左括号，
//如果有则出栈，如果没有，则说明不匹配。
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		stack<char>ch;
		for (auto&e : A){
			switch (e)
			{
			case'(':{
						ch.push(e);
						break;
			}
				case ')' : {
							   if (ch.empty() || ch.top() != ')'){
								   return false;
							   }
							   else{
								   ch.pop;
							   }
				}
				break;
				default: false;
			}
		}return true;
	}
};