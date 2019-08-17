#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//class Student : public Person{
//protected:
//	int _stuid; // 学号
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // 工号
//};
// Student的_num和Person的_num构成隐藏关系，可以看出这样代码虽然能跑，但是非常容易混淆
//class Person
//{
//protected:
//	string _name = "小李子"; // 姓名
//	int _num = 111; // 身份证号
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " 姓名:" << _name << endl;
//		cout << " 身份证号:" << Person::_num << endl;
//		cout << " 学号:" << _num << endl;
//	}
//protected:
//	int _num = 999; // 学号
//};
//class A {
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A {
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//
//};
//void Test()
//{
//	Student s1;
//	s1.Print();
//};
//void Test1()
//{
//	B b; 
//	b.fun(10);
//	cout << "--------" << endl;
//	A a;
//	a.fun();
//};
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // 姓名
//public:
//	static int _count; // 统计人的个数。
//};
//int Person::_count = 0;
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // 研究科目
//};
//void TestPerson()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " 人数 :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " 人数 :" << Person::_count << endl;
//}
//class Person
//{
//public:
//	string _name; // 姓名
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //学号
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // 职工编号
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//void Test()
//{
//	Assistant a;
//	a._name = "peter";
//}
//class A {
//public:
//	int _a;
//};
////int main()
////{
////	/*Student s;
////	Teacher t; s.Print();
//	t.Print();*/
//	//	Test1();
//	Test();
//
//	return 0;
//}
// class B : public A
//class A {
//public:
//	int _a;
//};
//class B : virtual public A {
//public:
//	int _b;
//};
//// class C : public A
//class C : virtual public A {
//public:
//	int _c;
//};
//class D : public B, public C {
//public:
//	int _d;
//};
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};
//int main()
//{/*
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2; 
//	d._b = 3; 
//	d._c = 4;
//	d._d = 5;*/
//	Base b;
//	return 0;
//}
//class Base{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	virtual void Func2()
//	{
//	
//			cout << "Base::Func2()" << endl;
//	}
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//private:
//	int _d = 2;
//};
//int main()
//{
//	Base b;
//	Derive d;
//	return 0;
//}
//class Person { 
//public:
//	virtual void BuyTicket() 
//	{ 
//		cout << "买票-全价" << endl;
//	} 
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "买票-半价" << endl; }
//};
//void Func(Person& p) {
//	p.BuyTicket();
//}
//int main()
//{
//	Person chen;
//	Func(chen);
//	Student zhang;
//	Func(zhang);
//	return 0;
//}
