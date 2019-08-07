#include<string>
#include<stdlib.h>
#include<assert.h>
#include<iostream>
#include<stack>
using namespace std;
//替换空格
//实现一个函数把字符串中的每个空格替换成%20
void replace(char str[],int length){
	if (str == nullptr || length <= 0){
		return;
	}
	int acstringlength = 0;
	int i = 0;
	int kongge = 0;
	while (str[i] != '\0'){
		acstringlength++;
		if (str[i] == ' '){
			kongge++;
		}
		i++;
	}
	int newstrlength = acstringlength + kongge * 2;
	if (newstrlength > length){
		return;
	}
	int oldbiaoji = acstringlength;
	int newbiaoji = newstrlength;
	while (oldbiaoji >= 0 && newbiaoji >oldbiaoji){
		if (str[oldbiaoji] == ' '){
			str[newbiaoji--] = '0';
			str[newbiaoji--] = '2';
			str[newbiaoji] = '%';
		}
		else{
			str[newbiaoji--] = str[oldbiaoji];
		}
	}
}
void yidong(char *src, char *des, size_t size){
	if ((src - des > 0) && (src - des < size)){
		while (size--){
			src[size-1] = des[size-1];
		}
	}
	else
	{
		int i=0; 
		while (i < size){
			src[i] = des[i];
			i++;
		}
	}
}
void replace2(char*str, int length){
	int cnt = 0;
	char* p = str;
	if (str == nullptr || length <= 0){
		return;
	}
	for (int i = 0; i < length; i++){
		if (str[i] == ' '){
			cnt++;
		}
	}
	//从后向前复制空格
	int newstrlength = cnt * 2 + length;
	int xin = newstrlength - 1;
	int jiu = length - 1;
	while (jiu >= 0 && xin>= 0){
		if (p[jiu] == ' '){
			str[xin] = p[jiu];
			
			str[xin--] = '0';
			str[xin--] = '2';
			str[xin--] = '%';
			
		}
		else{

			str[xin] = p[jiu];
			xin--;
		}
		jiu--;
	}
	return;
}
int main(){
	char s[] = "we are ux";
	
	replace2(s,strlen(s));
	cout << s<< endl;
	return 0;
}
//单链表的尾插
struct listnode{
	int value;
	listnode* next;
};
typedef listnode node;
void addtotail(node*head, int val){
	node* newnode = new node();
	newnode->next = nullptr;
	newnode->value = val;
	if (head == nullptr){
		head = newnode;
	}
	else
	{
		node* pnode = head;//保存头结点让pnode遍历
		while (pnode->next != nullptr){
			pnode = pnode->next;
			pnode->next = newnode;
		}
	}
}
//链表中找到第一个含有某个值的结点并删除
void  remove(node*head, int val){
	if (head == nullptr || head->next == nullptr){
		return;
	}
	node* delnode = nullptr;//删除的是头结点
	if (head->value = val){
		head = head->next;
	}
	else
	{
		node*nodenode = head;
		while (nodenode->next != nullptr&&nodenode->next->value != val){
			nodenode = nodenode->next;
		}
		if (nodenode->next != nullptr&&nodenode->next->value == val){
			delnode = nodenode->next;//找到删除的结点
			nodenode->next = nodenode->next->next;
		}
	}
	if (delnode != nullptr){
		delete delnode;
		delnode = nullptr;
	}

}
//从尾巴到头打印链表---先进后出!!!--1栈2递归
struct listnode{
	int key;
	listnode* next;
};
//栈可以实现先进后出
void printflist(listnode* head){
	stack<listnode*>node1;
	listnode*pnode = head;
	while (pnode != nullptr){
		node1.push(pnode);
		pnode = pnode->next;
	}
	while (!node1.empty()){
		pnode = node1.top();
		cout << pnode->key << endl;
		node1.pop();

	}
}
void printflist(listnode* head){
	listnode*node2 = head;
	stack<listnode*>node1;
	while (node2!=nullptr){
		node1.push(node2);
	}
	while (!node1.empty())
	{
		node1.top();
		cout << node2->key << endl;
		node1.pop();
	}
}
//法2---递归实现
void pirintf2(listnode*head){
	if (head != nullptr){
		if (head->next != nullptr){
			pirintf2(head->next);
		}
		cout << head->key << endl;
	}
}
//重建二叉树--前序确定根中序确定左右子树1的左边是左子树
//1的右边是右子树
struct binarytree{
	int val;
	binarytree* left;
	binarytree* right;
};
binarytree* jiansheshu(int *preoder, int*inorder, int length){
	//判断特殊情况
	if (preoder == nullptr || inorder == nullptr || length <= 0){
		return nullptr;
	}
	return jianshejienode(preoder, preoder + length - 1,
		inorder, inorder + length - 1);

}
//建设结点需要知道四个值前序的开始结束,中序的开始结束
binarytree*jianshejienode(int *startpreorder, int* endpreorder,
	int*startinorder, int*endinorder){
	//找到前序遍历的特点前序遍历的第一个结点是root
	//root->left为空
	int rootvalue = startinorder[0];
	binarytree*root = new binarytree();//申请新结点
	root->val = rootvalue;
	root->left = nullptr;
	root->right = nullptr;
	//特殊情况处理
	if (startpreorder == endpreorder){
		if (startinorder == endinorder&&
			*startpreorder==*startinorder){
			return root;//只有根
		}
		else
		{
			cout << "no use input" << endl;
		}
	}
	//中序遍历找到根节点的值
	int *rootinorder = startinorder;//定义中序遍历的结点
	while (rootinorder <= endinorder&
		&(*rootinorder) != rootvalue){
		++rootinorder;
	}
	if (rootinorder == endinorder&&
		rootinorder != rootvalue){
		cout << "no use input" << endl;
	}
	int left_height = rootinorder - startinorder;
	//左边高度
	int *leftpreorderend = startpreorder + left_height;
		//左子树前序遍历的结束=前序的开始+左边的高度
	if (left_height > 0){
		//构建左子树,前序的第一个是根,结束就是左边高度+前序的开始
		//构建左子树中序是开始为中序的开始,
//但是结束为根减1,因为中序对称根在最中间对于左子树就是最中间-1
		//最中间是根所以根减1
		root->left = jianshejienode(startpreorder + 1, leftpreorderend,
			startinorder, rootinorder - 1);
	}
	if (left_height <endpreorder-startpreorder){
		//建立右子树开始是左边的高度小于前序遍历的开始和前序遍历的结束
		//之差说明不是全部是左子树右右子树开始右子树构建
		root->right = jianshejienode(leftpreorderend+1, endpreorder,
			rootinorder+1, endinorder);
//右子树的建立在根的右边,对于前序leftpreorderend = startpreorder + left_height+1
//+1表示加根所以是右子树的开始位置,结束就是endpreorder,
//对于右子树的开始就是中序遍历根的右边所以中序+1,右子树的结束就是中序的结束
	}
	return root;
}