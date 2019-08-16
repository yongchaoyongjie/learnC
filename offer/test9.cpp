#include<iostream>
using namespace std;
//template<class T> 
//T Add(const T& left, const T& right) {
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.1;
//	cout<<Add(a1, a2)<<endl;
//	cout<<Add(d1, d2)<<endl;
//	cout << Add(a1, (int)d1) << endl;
//	return 0;
//}
int Add(int left, int right) {
	return left + right;
}
//template<class T>
//T Add(T left, T right) {
//	return left + right;
//}
//void Test()
//{
//	cout<<"int"<<Add(1, 2)<<endl; // 与非模板函数匹配，编译器不需要特化
//	cout<<"moban"<<Add<int>(1, 2)<<endl; // 调用编译器特化的Add版本
//}
//int main(){
//	Test();
//	return 0;
//}
//template<class T>
//class Vector{
//	Vector(size_t _capacity = 10) :_capacity(capacity),
//	_size(size), _data = new T*[capacity]{}
//
//	~Vector();
//private:
//	size_t _capacity;
//	size_t _size;
//	T* _data;
//};
////类模板放在类外需要加模板参数列表
//template <class T>
//Vector<T>::~Vector()
//{
//	if (_data){
//		delete[]_data;
//	}
//	_size = _capacity = 0;
//}
//int main(){
//
//	return 0;
////}
////定义一个模板类型的静态数组
//template<class arry,size_t N=10>
//class arry{
//public:
//	T& operator[](size_t index){
//		return array[index];
//	}
//private:
//	T _arry[N];
//	size_t _size;
//};




////定义一个模板类型的静态数组
//template<class T,size_t N=10>
//class arry{
//	T& operator[](size_t index){//返回的是值而且出了作用域在所以用&
//		return arry[index];
//	}
//	const T& operator[](size_t index)const{
//		return arry[index];
//	}
//	size_t Size(){
//		return _size;
//	}
//	bool isempty(){
//		return _size == 0;
//	}
//private:
//	T _arry[N];
//	size_t _size;
//};
//template<class T1,class T2>
//bool issame(const T1& a, const T2& b){
//	return a == b;
//}
//template<>
//bool issame<char*>(char*& left, char*& right) {
//	if (strcmp(left, right) > 0)
//		return true;
//	return false;
//}
//int main(){
//		cout << issame(1, 1) << endl;
//		//cout << issame("nihao", "nihao") << endl;// -->相等只是巧合
//		char*p1 = new char[6];
//			char*p2 = new char[6];
//			p1 = "nihao";
//			p2 = "nihao";
//			cout << issame(p1, p2) << endl;
//	return 0;
//}
template<class T1,class T2>
class Data{
public:
	Data(){
		cout << "data<T1,T2>" << endl;
	}
private:
	T1 _d1;
	T2 _d2;
};
template<>
class Data<int ,char>{
public:
	Data(){
		cout << "data<int,char>" << endl;
	}
private:
	int _d1;
	char _d2;
};
void TestVector()
{
	Data<int, int> d1;
	Data<int, char> d2;
}
template <typename T1, typename T2>
class Data <T1*, T2*>
{
public:
	Data() { cout << "Data<T1*, T2*>" << endl; }
private:
	T1 _d1;
	T2 _d2;
};
//两个参数偏特化为引用类型
template <typename T1, typename T2>
class Data <T1&, T2&>
{
public:
	Data(const T1& d1, const T2& d2)
		: _d1(d1)
		, _d2(d2)
	{
		cout << "Data<T1&, T2&>" << endl;
	}
private:
	const T1 & _d1;
	const T2 & _d2;
};
void test2()
{
	Data<double, int> d1; // 调用特化的int版本
	Data<int, double> d2; // 调用基础的模板
	Data<int *, int*> d3; // 调用特化的指针版本
	Data<int&, int&> d4(1, 2); // 调用特化的指针版本
}
//类模板的特化应用之类型萃取
// 代表内置类型
struct TrueType
{
	static bool Get(){ return true; }
};
// 代表自定义类型
struct FalseType
{
	static bool Get(){ return false; }
};
template<class T>
struct TypeTraits
{
	typedef FalseType IsPODType;
};
template<>
struct TypeTraits<char>
{
	typedef TrueType IsPODType;
};
template<>
struct TypeTraits<short>
{
	typedef TrueType IsPODType;
};
template<>
struct TypeTraits<int>
{
	typedef TrueType IsPODType;
};
template<>
struct TypeTraits<long>
{
	typedef TrueType IsPODType;
};
template<class T>
void Copy(T* dst, const T* src, size_t size) {
	if (TypeTraits<T>::IsPODType::Get())
		memcpy(dst, src, sizeof(T)*size);
	else
	{
		for (size_t i = 0; i < size; ++i)
			dst[i] = src[i];
	}
}
//int main()
//{
//	int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int a2[10];
//	Copy(a2, a1, 10);
//	string s1[] = { "1111", "2222", "3333", "4444" };
//	string s2[4];
//	Copy(s2, s1, 4);
//	return 0;
//}