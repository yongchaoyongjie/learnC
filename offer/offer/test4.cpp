#include<iostream>
#include<stack>
#include<queue>
using namespace std;
////����һ��������������һ���ڵ��ҳ�����������е���һ�����
////(1)���һ���������������ô������һ����������������������߽��
////(2)���û���������������������׽���������ô��һ��������
////���ĸ��׽��,
////(3)���һ���ڵ�û�������������Ǹ��׽����ҽ��,��ô
////��������ָ���׽���ָ��һֱ����ֱ���ҵ�һ���������׽�����
////�ӽڵ�Ľ��,Ȼ��������ĸ��׽�����Ҫ�ҵĽ��
//struct binarytree{
//	//int val;
//	binarytree* left;
//	binarytree* right;
//	binarytree* parent;
//
//};
//binarytree* nodenext(binarytree*node){
//	if (node == nullptr){
//		return nullptr;
//	}
//	binarytree* next = nullptr;
//	 if (node->right != nullptr){
//		binarytree*pright = node->right;
//		while (pright->left!=nullptr)
//		{
//			pright = pright->left;
//		}
//		next = pright;
//	}
//	 else if (node->parent != nullptr){
//		 //(2)(3)����һ��
//		 binarytree*cur = node;
//		 binarytree* pparent = node->parent;
//		 while ((pparent!=nullptr)&&(cur=pparent->right))
//		 {//һֱ������
//			 cur = pparent;
//			 pparent = pparent->parent;
//		 }
//		 next = pparent;
//	 }
//	 return next;
//}
////ջ�Ͷ���
////������ջʵ��һ������,��ʵ�ֶ��е�β���ͷɾ
//template<class T>
//class zijidequeue{
//public:
//	zijidequeue(void);
//	~zijidequeue(void);
//	void appendtail(const T&node);
//	T deletehead();
//private:
//	stack<T> stack1;
//	stack<T> stack2;
//};
////ʵ�ֹ���Ϊ����ջ1�������β���abc,Ȼ������������ȳ�,��abc����ڶ���ջ
////��a,ջ2��ȥ��˳��Ϊc,b,aȻ���ڳ�ջ2--��Ϊa,b,c
////��������ɾ�����е�ͷ�Ĳ���Ϊ:��ջ2��Ϊ��ջ2�Ķ�Ԫ�������Ƚ���
////���е�Ԫ��,���Ե���(����ͷɾ),��ջ2Ϊ��,��ջ1��Ԫ�ص���ѹ��ջ2
////�Ϳ���ɾ��ջ������ͷ
////β��,����Ԫ�ؽ���,����ջ1,Ȼ�󵯳��ŵ�ջ2ֱ�ӵ�����Ԫ��,����Ԫ��
////��Զ����������Բ������ì��
//template<class T> 
//void zijidequeue<T>::appendtail(const T&node){
//	//β��ʵ��
//	stack1.push(node);
//}
//template<class T>
//T zijidequeue<T>::deletehead(){
//	if (stack2.size()<=0){
//		while ((stack1.size()>0)
//		{
//			T&data = stack1.top();
//			stack1.pop();
//			stack2.push(data);
//		}
//	}
//	if (stack2.size() == 0){
//		cout << "����Ϊ��" << endl;
//	}
//	T head=stack2.top();
//	stack2.pop();
//}
////����������ʵ��һ��ջ,����1��ѹ��a,b,c,Ȼ�������2ѹ��a,b,
////Ȼ�����1��c,Ȼ�����2��a,����1��a,Ȼ�������2b,Ȼ�������1a
//
//template<class T>
//class zijidestack{
//public:
//	zijidestack(void);
//	~zijidestack(void);
//	void appendtail(const T&node);
//	T deletehead();
//private:
//	queue<T> queue1;
//	queue<T> queue2;
//};
//template<class T>
//void zijistack<T>::appendtail(const T&node){
//	if (!queue1.empty()){
//		queue1.push(node);
//	}
//	else{
//		queue2.push(node);
//	}
//}
//template<class T>
//T zijidequeue<T>::deletehead(){
//	int ret = 0;
//	int i = queue2.size()
//	if (queue1.empty()){
//		while (i > 1){
//			queue1.push(queue2.front());
//			queue2.pop();
//			--i;
//		}
//		ret = queue2.front();
//		queue2.pop();
//	}
//	else
//	{
//		int i = queue1.size();
//		while (i>1)
//		{
//			queue2.push(queue1.front());
//			queue1.pop();
//			--i;
//		}
//		ret = queue1.front();
//		q1.pop();
//	}
//	return ret;
//}
//�ݹ��ѭ����1+2+3+4+..n;
int addall(int n){
	if (n = 0){
		return 0;
	}
	return n + addall(n - 1);
}
int addall1(int n){
	int sum;
	for (int i = 0; i <= n; i++){
		sum+= i;
	}
	return sum;
}
//��쳲������ĵ�n��
long long fib(unsigned int n){
	if (n <= 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	return  fib(n - 1) + fib(n-2);
}
//���ظ���̫��
//���԰��Ѿ���ĵ�����������,�´���Ҫ����ʱ����һ������Ѿ�����˾Ͳ����ظ�������
long long fib1(unsigned int n){
	long a = 1, b = 0;
	if (n == 1){
		return a;
	}
	if (n == 0){
		return b;
	}
	long long zhongjianzhi = 0;
	for (unsigned i = 2; i <= n; i++){
		zhongjianzhi = a + b;//����һ�����������м�ֵ
		b = a;
		a = zhongjianzhi;
	}
	return zhongjianzhi;
}
int main(){
	cout << fib1(6) << endl;
	cout << fib(6) << endl;
}