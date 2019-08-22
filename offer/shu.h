#pragma once
#include<iostream>
using namespace std;
typedef struct Node{
	char val;
	Node*left;
	Node*right;

}node;
void Preorder(Node *root) {
	if (root != NULL) {
		cout << root->val << endl;
		Preorder(root->left);
		Preorder(root->right);
	}
}

void Inorder(Node *root) {
	if (root != NULL) {
		Inorder(root->left);
		cout << root->val << endl;

		Inorder(root->right);
	}
}

void Postorder(Node *root) {
	if (root != NULL) {

		Postorder(root->left);

		Postorder(root->right);

		cout << root->val << endl;
	}
}
node *creat(char v){
	node*node1 = new node;
	node1->val = v;
	node1->left = node1->right = nullptr;
	return node1;
}
int getsize(node*root){
	//���
	if (root == nullptr){
		return 0;
	}
	int left = getsize(root->left);
	int right = getsize(root->right);
	return left + right + 1;
}
int GetLeafSize(node *root) {
	if (root == NULL) {
		return 0;
	}
	else if (root->left == NULL && root->right == NULL) {
		return 1;
	}
	else {
		return GetLeafSize(root->left) + GetLeafSize(root->right);
	}
}
int getheight(node*root){
	if (root == nullptr){
		return;
	}
	int left = getheight(root->left);
	int right = getheight(root->right);
	return( left > right ?left : right);
}
int getksize(node*root,int k){
	//��õ�k��Ľ��
	if (root == nullptr){
		return 0;
	}
	else if (k==1){
		return 1;
	}
	int left = getksize(root->left, k - 1);

	int right = getksize(root->right, k - 1);
	return left + right;
}
node* find1(node*root, char v){
	if (root == nullptr){
		return nullptr;
	}
	else if (root->val == v){
		return root;
	}
	node* left1 = find1(root->left, v);
	if (left1 != nullptr){
		return left1;
	}
	node* right1 = find1(root->right, v);
	if (right1 != nullptr){
		return right1;
	}
	else{
		return nullptr;
	}
}
bool issame(node*p, node*q){
	if (p == nullptr&&q == nullptr){
		return true;
	}
	if (p == nullptr || q == nullptr){
		return false;
	}
	return p->val == q->val&&	issame(p->left, q->left) || issame(p->right, q->right);
}
//int find(char arry[], int size, char v){
//	for (int i = 0; i < size; i++){
//		if (arry[i] == v){
//			return i;
//		}
//	}
//}
//node*bulittree(char preoder[], char inorder[], int size){
//	if (size == 0){
//		return nullptr;
//	}
//	char rootvalue = preoder[0];
//	int leftsize = find(inorder, size, rootvalue);
//	node*root = new node;
//	root->val = rootvalue;
//	//����������
//	root->left = bulittree(preoder+1, inorder, leftsize);
//	root->right = bulittree(preoder +1+leftsize, 
//		inorder+leftsize+1, size - leftsize - 1);
//
//}
//ǰ��+����
int find(char arry[], int size, char value){
	for (int i = 0; i < size; i++){
		if (arry[i] == value){
			return i;
		}
	}
}
node*bulittree(char pre[], char ino[], int size){
	if (size == 0){
		return nullptr;
	}
	char rootvalue = pre[0];
	node*root = new node;
	root->val = rootvalue;
	int leftsize = find(ino, size, rootvalue);
	root->left = bulittree(pre + 1, ino, leftsize);
	root->right = bulittree(pre + leftsize + 1, ino + leftsize + 1, size - leftsize - 1);

}
//����+����
node*bulid2(char post[], char ino[], int size){
	if (size == 0){
		return nullptr;
	}
	int rootval = post[size - 1];
	node*root = new node;
	root->val = rootval;
	int leftsize = find(ino, size, rootval);
	root->left = bulid2(post, ino, leftsize);
	root->right = bulid2(post + leftsize, ino + leftsize + 1, size - leftsize - 1);
}
#include<vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ans;
		pre(root, 0, ans);
		return ans;
	}

	void pre(TreeNode *root, int depth, vector<vector<int>> &ans) {
		if (!root) return;
		if (depth >= ans.size()){
			//ans.push_back(vector<int> {});
			return;
		}
		ans[depth].push_back(root->val);
		pre(root->left, depth + 1, ans);
		pre(root->right, depth + 1, ans);
	}
};
void qianxu(node*root, int depth, vector < vector<int>>ad){
	if (root){
		return;
	}
	if (depth > ad.size()){
		return;
	}
	//ǰ��
	ad[depth].push_back(root->val);
	qianxu(root->left, depth + 1, ad);
qianxu(root->right, depth + 1, ad);
}
vector<vector<int>> cengxu(node*root){
	vector<vector<int>>ab;
	qianxu(root, 0, ab);

}
//�������˵���˾���ǰ�����
#include<queue>
void cengxubianli(node* root){
	if (root == nullptr){
		return ;
	}
	std::queue<node*>q;
	while (!q.empty()){
		node*dian = q.front();
		q.pop();
		cout << dian->val;
		if (dian->left != nullptr){
			q.push(dian->left);
		}
		if (dian->left != nullptr){
			q.push(dian->right);
		}
	}
	cout << endl;
}
#include<algorithm>
void ajustdown(int arry[], int size, int rootindex){
	//���µ�����Ҫ֪��������λ�ú͸���--�������������
	if (2 * rootindex + 1 >= size){
	//��ʾ����Խ��+��Ҷ��+�������
		return ;
	}
	//����Ҷ��(һ��û��Խ���ж��Ƿ���Ҫ����--�ҵ���С���±�
	int minxiabiao = 2 * rootindex + 1;//������С�±�Ϊ��ߺ���
	if (2 * rootindex + 2 < size&&arry[2 * rootindex + 2] < arry[minxiabiao]){
		minxiabiao = 2 * rootindex + 1;
	}
	//��С�±�͸��Ƚ�����ȸ�С����
	if (arry[minxiabiao] < arry[rootindex]){
		swap(minxiabiao, rootindex);
		ajustdown(arry, size, rootindex);
	}
	else
		return;
}
void createheap(int tree[], int size){
	for (int i = (size - 2) / 2; i>0; i--){
		ajustdown(tree, size,i);
	}
}
void heapsort(int arry[], int size){
	createheap(arry, size);
	for (int i = 0; i < size; i++){
		swap(arry[0], arry[size - 1 - i]);
		ajustdown(arry, size - 1 - i,0);
	}
}
int  jizhun(int a[], int begin, int end){
	//��׼��begin---�����ڿӷ�
	int keng = a[begin];
	while (begin < end){
		while (begin<end&&a[end]>=keng){
			end--;
		}
		a[end] = a[begin];
		while (begin < end&&a[begin] <= keng){
			begin++;
		}
		a[begin] = a[end];
	}
	a[begin] = keng;
	return begin;
}
void quckbufen(int a[], int low, int heigh){
	if (low < heigh){
		int jizhun1 = jizhun(a, low, heigh);
		quckbufen(a, low, jizhun1-1);
		quckbufen(a, jizhun1 + 1, heigh);
	}
}
void qucik(int a[], int size){
	quckbufen(a, 0, size - 1);
}
