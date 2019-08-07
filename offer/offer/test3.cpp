#include<string>
#include<stdlib.h>
#include<assert.h>
#include<iostream>
#include<stack>
using namespace std;
//�滻�ո�
//ʵ��һ���������ַ����е�ÿ���ո��滻��%20
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
	//�Ӻ���ǰ���ƿո�
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
//�������β��
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
		node* pnode = head;//����ͷ�����pnode����
		while (pnode->next != nullptr){
			pnode = pnode->next;
			pnode->next = newnode;
		}
	}
}
//�������ҵ���һ������ĳ��ֵ�Ľ�㲢ɾ��
void  remove(node*head, int val){
	if (head == nullptr || head->next == nullptr){
		return;
	}
	node* delnode = nullptr;//ɾ������ͷ���
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
			delnode = nodenode->next;//�ҵ�ɾ���Ľ��
			nodenode->next = nodenode->next->next;
		}
	}
	if (delnode != nullptr){
		delete delnode;
		delnode = nullptr;
	}

}
//��β�͵�ͷ��ӡ����---�Ƚ����!!!--1ջ2�ݹ�
struct listnode{
	int key;
	listnode* next;
};
//ջ����ʵ���Ƚ����
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
//��2---�ݹ�ʵ��
void pirintf2(listnode*head){
	if (head != nullptr){
		if (head->next != nullptr){
			pirintf2(head->next);
		}
		cout << head->key << endl;
	}
}
//�ؽ�������--ǰ��ȷ��������ȷ����������1�������������
//1���ұ���������
struct binarytree{
	int val;
	binarytree* left;
	binarytree* right;
};
binarytree* jiansheshu(int *preoder, int*inorder, int length){
	//�ж��������
	if (preoder == nullptr || inorder == nullptr || length <= 0){
		return nullptr;
	}
	return jianshejienode(preoder, preoder + length - 1,
		inorder, inorder + length - 1);

}
//��������Ҫ֪���ĸ�ֵǰ��Ŀ�ʼ����,����Ŀ�ʼ����
binarytree*jianshejienode(int *startpreorder, int* endpreorder,
	int*startinorder, int*endinorder){
	//�ҵ�ǰ��������ص�ǰ������ĵ�һ�������root
	//root->leftΪ��
	int rootvalue = startinorder[0];
	binarytree*root = new binarytree();//�����½��
	root->val = rootvalue;
	root->left = nullptr;
	root->right = nullptr;
	//�����������
	if (startpreorder == endpreorder){
		if (startinorder == endinorder&&
			*startpreorder==*startinorder){
			return root;//ֻ�и�
		}
		else
		{
			cout << "no use input" << endl;
		}
	}
	//��������ҵ����ڵ��ֵ
	int *rootinorder = startinorder;//������������Ľ��
	while (rootinorder <= endinorder&
		&(*rootinorder) != rootvalue){
		++rootinorder;
	}
	if (rootinorder == endinorder&&
		rootinorder != rootvalue){
		cout << "no use input" << endl;
	}
	int left_height = rootinorder - startinorder;
	//��߸߶�
	int *leftpreorderend = startpreorder + left_height;
		//������ǰ������Ľ���=ǰ��Ŀ�ʼ+��ߵĸ߶�
	if (left_height > 0){
		//����������,ǰ��ĵ�һ���Ǹ�,����������߸߶�+ǰ��Ŀ�ʼ
		//���������������ǿ�ʼΪ����Ŀ�ʼ,
//���ǽ���Ϊ����1,��Ϊ����ԳƸ������м�����������������м�-1
		//���м��Ǹ����Ը���1
		root->left = jianshejienode(startpreorder + 1, leftpreorderend,
			startinorder, rootinorder - 1);
	}
	if (left_height <endpreorder-startpreorder){
		//������������ʼ����ߵĸ߶�С��ǰ������Ŀ�ʼ��ǰ������Ľ���
		//֮��˵������ȫ��������������������ʼ����������
		root->right = jianshejienode(leftpreorderend+1, endpreorder,
			rootinorder+1, endinorder);
//�������Ľ����ڸ����ұ�,����ǰ��leftpreorderend = startpreorder + left_height+1
//+1��ʾ�Ӹ��������������Ŀ�ʼλ��,��������endpreorder,
//�����������Ŀ�ʼ����������������ұ���������+1,�������Ľ�����������Ľ���
	}
	return root;
}