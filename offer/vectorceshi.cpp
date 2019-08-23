#include<map>
#include<vector>
#include<string>
#include<iostream>
#include<stdio.h>
#include<thread>
#include<mutex>

using namespace std;
//typedef vector<int> VECTOR_I;
//typedef map<string, vector<int> > MAP_S_S;
//int main()
//{
//	VECTOR_I vec1( 1,1);
//	VECTOR_I vec2(10, 2);
//	VECTOR_I vec3(10, 3);
//	VECTOR_I vec4(10, 4);
//	VECTOR_I vec5(10, 5);
//	MAP_S_S m;
//	m.insert(make_pair("001", vec1));
//	m.insert(MAP_S_S::value_type("002", vec2));
//	m.insert(MAP_S_S::value_type("003", vec3));
//	m.insert(MAP_S_S::value_type("004", vec4));
//	m.insert(MAP_S_S::value_type("005", vec5));
//	MAP_S_S::iterator mit;
//	VECTOR_I::iterator iit;
//	for (mit = m.begin(); mit != m.end(); mit++)
//	{
//		cout << mit->first << ' ';
//		for (iit = mit->second.begin(); iit != mit->second.end(); iit++)
//		{
//			cout << *iit << ' ';
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}
void test(){
	vector<vector<int>>c(5, vector<int>(6));
	int temp;
	for (int i = 0; i < c.size(); i++){
		for (int j = 0; j < c[i].size(); j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
void test2(){
	int temp;
	vector<vector<int>>item(7);
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			cin >> temp;
			item[i].push_back(temp);
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			cout << item[i][j] << " ";
		}
		cout << endl;
	}
}
void add1(const vector<vector<int>>&pvi){
	int i = 0, j = 0;
	for (; i < pvi.size(); i++){
		for (; j < pvi[i].size(); j++){
			cout << pvi[i][j] << " ";
		}
		cout << endl;
	}
}
void test3(){
	vector < vector<int>> vvi;
	//vector<int>vi;
	vector<int>{};
	int i = 0, j = 0, k = 0;
	for (int i = 0; i < 10; i++){
		/*for (int j = 0; j < 10; j++){
			vi.push_back(k++);
		}*/
		cout << "1";
		vvi.push_back({});

		//vi.clear();
	}
	add1(vvi);
}
void  test4(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);//&a是数组指针+1跳到下一个数组的地址
	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5//2是没有问题的arr+1,
	//ptr是指向arr的下一个数组给下一个数组的地址减一arr-1就成了最后一个5
}
extern "C" void test5()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int*)(&a + 1);
	int *ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//4   2000000
}
//extern "C" int main(int argc, char* argv[]){
//	//test();
//	//test2();
//	//test3();
//	//test4();
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//
//	p = a[0];
//	printf("%d\n", *p);//1
//	printf("%d\n", p[2]);//5
//	printf("%d\n", p[1]);//3
//	printf("%d\n", p[0]);//1
//	system("pause");
//	return 0;
//}
//
void test6(){
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int*)(&aa + 1);//10
	int *ptr2 = (int *)(*(aa + 1));//5---二维数组ptr-1变成一维数组最后一个元素了
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
}
//void test7(){
//		int a[5][5];
//		int(*p)[4];
//		p = a;
//		printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
//		printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//}
class ehan{
	static ehan* fangfa(){
		return &eh;
	}

private:
	ehan(){};//构造函数私有化
	ehan(ehan const&) = delete;
	ehan& operator=(ehan const &) = delete;
	static ehan  eh;
};
class lanhan{
public:
	static lanhan* fangfa(){
		if (nullptr == lh){
			m_tex.lock();
			if (nullptr == lh){
				lh = new lanhan();//new lanhan//创建一个对象不初始化newlanhan(),创建一个对象初始化
			}
			m_tex.unlock();
		}
		return lh;
	}
	class lajihuishou{//定义一个内嵌的垃圾回收类
	public: 
		~lajihuishou(){
			if (lanhan::lh){
				delete lanhan::lh;
			}
		}
	};
	static lajihuishou lj;
private:
	lanhan(){};//构造私有化函数
	lanhan(lanhan const&) = delete;
	lanhan& operator=(lanhan const &) = delete;
	static lanhan* lh;//定义一个单例对象的指针
	static mutex m_tex;
};
lanhan*  lanhan::lh = nullptr;
lanhan::lajihuishou lj;
mutex lanhan::m_tex;
void fuc(int n){
	cout << lanhan::fangfa() << endl;
}
int main(){
	//test7();
	//多线程演示
	thread t1(fuc, 10);
	thread t2(fuc, 10);

	t1.join();
	t2.join();
	//cout << lanhan::fangfa() << endl;
	//cout << lanhan::fangfa() << endl; 
	system("pause");
	return 0;
}