#include<iostream>
#include<stack>
#include<queue>
using namespace std;
////给定一个二叉树和其中一个节点找出中序遍历序列的下一个结点
////(1)如果一个结点有右子树那么它的下一个结点就是它的右子树最左边结点
////(2)如果没有右子树如果结点是它父亲结点的左结点那么下一个结点就是
////它的父亲结点,
////(3)如果一个节点没有右子树并且是父亲结点的右结点,那么
////可以沿着指向父亲结点的指针一直向上直到找到一个是它父亲结点的左
////子节点的结点,然后这个结点的父亲结点就是要找的结点
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
//		 //(2)(3)属于一类
//		 binarytree*cur = node;
//		 binarytree* pparent = node->parent;
//		 while ((pparent!=nullptr)&&(cur=pparent->right))
//		 {//一直向上走
//			 cur = pparent;
//			 pparent = pparent->parent;
//		 }
//		 next = pparent;
//	 }
//	 return next;
//}
////栈和队列
////用两个栈实现一个队列,并实现队列的尾插和头删
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
////实现过程为先在栈1里面依次插入abc,然后队列是先入先出,则abc插入第二个栈
////出a,栈2进去的顺序为c,b,a然后在出栈2--则为a,b,c
////如果向继续删除队列的头的步骤为:当栈2不为空栈2的顶元素是最先进入
////队列的元素,可以弹出(就是头删),当栈2为空,把栈1的元素弹出压入栈2
////就可以删除栈顶就是头
////尾插,当新元素进入,亚如栈1,然后弹出放到栈2直接弹出顶元素,则新元素
////永远在最底下所以不会出现矛盾
//template<class T> 
//void zijidequeue<T>::appendtail(const T&node){
//	//尾插实现
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
//		cout << "队列为空" << endl;
//	}
//	T head=stack2.top();
//	stack2.pop();
//}
////用两个队列实现一个栈,队列1先压入a,b,c,然后给队列2压入a,b,
////然后队列1出c,然后队列2出a,队列1进a,然后出队列2b,然后出队列1a
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
//递归和循环求1+2+3+4+..n;
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
//求斐波那契的第n项
long long fib(unsigned int n){
	if (n <= 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	return  fib(n - 1) + fib(n-2);
}
//求重复项太多
//可以把已经求的的数保留起来,下次需要计算时候检查一下如果已经算过了就不用重复计算了
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
		zhongjianzhi = a + b;//定义一个变量保存中间值
		b = a;
		a = zhongjianzhi;
	}
	return zhongjianzhi;
}
int main(){
	cout << fib1(6) << endl;
	cout << fib(6) << endl;
}