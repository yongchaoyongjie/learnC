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
//	string _name = "peter"; // ����
//	int _age = 18; // ����
//};
//class Student : public Person{
//protected:
//	int _stuid; // ѧ��
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
//};
// Student��_num��Person��_num�������ع�ϵ�����Կ�������������Ȼ���ܣ����Ƿǳ����׻���
//class Person
//{
//protected:
//	string _name = "С����"; // ����
//	int _num = 111; // ���֤��
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " ����:" << _name << endl;
//		cout << " ���֤��:" << Person::_num << endl;
//		cout << " ѧ��:" << _num << endl;
//	}
//protected:
//	int _num = 999; // ѧ��
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
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//};
//int Person::_count = 0;
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // �о���Ŀ
//};
//void TestPerson()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " ���� :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " ���� :" << Person::_count << endl;
//}
//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
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
//		cout << "��Ʊ-ȫ��" << endl;
//	} 
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
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
