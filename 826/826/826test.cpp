#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
//double Div(int a, int b) {
//	// ��b == 0ʱ�׳��쳣
//	if (b == 0)
//		throw "��0����!";
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
//		cout << "����ȷ��Ϣ" << endl;
//	}
//	return 0;
//}
double Division(int a, int b) {
	// ��b == 0ʱ�׳��쳣
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (double)a / (double)b;
}
void Func()
{
	// ������Կ������������0�����׳��쳣�����������arrayû�еõ��ͷš�
	// �������ﲶ���쳣�󲢲������쳣���쳣���ǽ������洦�����ﲶ������
	// �����׳�ȥ��
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
//	/*Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, { "����", 1.5 } };
//	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), Compare());
//	for (auto&e : gds){
//		cout <<e._price<<endl;
//	}*/
//	Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, { "����", 1.5 } };
//	sort(gds, gds + sizeof(gds) / sizeof(gds[0]),
//		[](const Goods& gl1, const Goods& gl2){ return gl1._price <= gl2._price; });
//	for (auto&e : gds){
//		cout << e._price << endl;
//	}
//	return 0;
//}
//�ַ���ת����
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
//����һ����������С���feib���еĲ���
//nΪ������,�ҵ���n�����fib��ߵ�fib���ұߵ�fibȻ��min(n-l,r-n)
int main(){
	int n, l = 0, r = 0, f0 = 0, f1 = 1,f;
	cin >> n;
	while (1){
		f = f0 + f1;
		f1 = f;
		f0 = f1;
		//���������������fib��
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
//�Ϸ������ж�
//��ջ�ṹʵ�֣�ջ�д�������ţ�������������֮�󣬼��ջ���Ƿ��������ţ�
//��������ջ�����û�У���˵����ƥ�䡣
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