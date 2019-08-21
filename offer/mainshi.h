#pragma once
//typedef struct Node{
//	int data;
//	Node*next;
//}node;
//typedef struct slist{
//	node*first;
//}slist;
////void listInit(listnode*){
////
////}
//void pushfront(slist*list, int val){
//	node *newnode = new (node);
//	newnode->next = list->first;
//	list->first = newnode;
//	newnode->data = val;
//}
//typedef
//typedef struct  Listnode{
//	int data;
//	Listnode* next;
//}listnode;
//void pushfront(listnode** head, int val){
//	listnode*node = new listnode();
//	node->data = val;
//	node->next = *head;
//	*head = node;
//}
//void pushback(listnode**head, int val){
//	//**head��ָ��ָ���ָ��
//	listnode*node = new listnode();
//	node->data = val;
//	node->next = nullptr;
//	//�����������
//	if (*head == nullptr){
//		*head = node;
//	}
//	else{
////�ҵ��������һ���ڵ�
//		listnode* c = *head;
//		while (c->next != nullptr){
//			c = c->next;
//		}
//	}
//}
//void popfront(){
//
//}
//void popback(listnode**head,int val,listnode *del){
//	//head��һ��ָ��ָ���ָ��
//	if (head == nullptr || *head == nullptr){
//		return;
//	}
//	
//
//}
typedef struct listnode{
	int val;
	listnode *next;
}listnode;
listnode* reverse(listnode*head){
	listnode* cur = head;
	listnode* prev = nullptr;
	while (cur!=nullptr){
		//����Ҫ��������㱣�浱ǰ��ֵ
//��������ĵ�һ��������һ�����������ĵ�һ�����Ȼ������������
//��һ�����
		listnode *cnext = cur->next;
		cur->next = prev;
		prev = cur;
		cur = cnext;
	}
return prev;
}
class Solution {
public:
	listnode* removeElements(listnode* head, int val) {
		if (head == nullptr){
			return head;
		}

		listnode*cur = head;
		while (cur->next != NULL)
		{
			if (cur->next->val == val){
				listnode*curnextnext = cur->next->next;
				free(cur->next);
				cur->next = curnextnext;
			}
			else{
				cur = cur->next;
			}
		}
		if (head->val == val){
			listnode*hnext = head->next;
			free(head);
			return hnext;
		}
		else{
			return head;
		}
	}
};
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode *front = pListHead;
		ListNode *back = pListHead;
		int i;
		for (i = 0; front != NULL && i < k; i++) {
			front = front->next;
		}

		if (i < k) {
			return NULL;
		}

		while (front != NULL) {
			front = front->next;
			back = back->next;
		}
		return back;

	}
};
ListNode* partition(ListNode* pHead, int x) {
	// write code here
	ListNode* xiaoyulianbiao = nullptr;
	ListNode*dayulianbiao = nullptr;
	ListNode* xiaoyulast = nullptr;
	ListNode*dayulast = nullptr;
	ListNode*cur = pHead;
	while (cur){
		if (cur->val<x){
			if (xiaoyulianbiao == nullptr){
				xiaoyulianbiao = xiaoyulast = cur;
			}
			else{
				xiaoyulast->next = cur;
				cur = xiaoyulast;
			}
		}
		else{
			if (dayulianbiao == nullptr){
				dayulianbiao = dayulast = cur;
			}
			else{
				dayulast->next = cur;
				cur = dayulast;
			}
		}
		cur = cur->next;
	}
	//��������ֿ��󵥶����Ӹ�����
	if (xiaoyulast != nullptr){
		xiaoyulast->next = dayulianbiao;
	}
	if (dayulast != nullptr){
		dayulast->next = nullptr;
	}
	if (xiaoyulast != nullptr){
		return xiaoyulianbiao;
	}

	else{
		return dayulianbiao;
	}
}
class Solution2 {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL) {
			return NULL;
		}
		//ListNode *fake = (ListNode *)malloc(sizeof(ListNode));
		ListNode *fake = new ListNode(0);
		fake->next = pHead;

		ListNode *prev = fake;
		ListNode *p1 = pHead;
		ListNode *p2 = pHead->next;

		while (p2 != NULL) {
			if (p1->val != p2->val) {
				prev = p1; p1 = p2; p2 = p2->next;
			}
			else {
				while (p2 != NULL && p2->val == p1->val) {
					p2 = p2->next;
				}
				// TODO: û�� free ��㣬���ڴ�й©
				ListNode *cur = p1;
				while (cur != p2) {
					ListNode *next = cur->next;
					delete cur;
					cur = next;
				}
				prev->next = p2;

				p1 = p2;
				if (p2 != NULL) {
					p2 = p2->next;
				}
			}
		}

		pHead = fake->next;
		delete fake;
		return pHead;
	}
};
class PalindromeList {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == NULL) {
			return head;
		}

		ListNode *prev, *cur, *next;
		prev = NULL;
		cur = head;
		next = head->next;

		while (cur != NULL) {
			cur->next = prev;

			prev = cur;
			cur = next;
			if (next != NULL) {
				next = next->next;
			}
		}

		return prev;
	}
	ListNode* middleNode(ListNode* head) {
		if (head == NULL) {
			return NULL;
		}
		ListNode *fast = head;
		ListNode *slow = head;

		while (1) {
			fast = fast->next;
			if (fast == NULL) {
				break;
			}
			slow = slow->next;
			fast = fast->next;
			if (fast == NULL) {
				break;
			}
		}
		return slow;
	}

	bool chkPalindrome(ListNode* A) {

		ListNode * middle = middleNode(A);
		ListNode * r = reverseList(middle->next);

		ListNode *n1 = A, *n2 = r;
		while (n1 != NULL && n2 != NULL) {
			if (n1->val != n2->val) {
				return false;
			}

			n1 = n1->next;
			n2 = n2->next;
		}

		return true;
	}

};
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == nullptr || headB == nullptr) return nullptr;
		ListNode*pA = headA;
		ListNode* pB = headB;

		while (pA != pB) {
			pA = pA == nullptr ? headB : pA->next;
			pB = pB == nullptr ? headA : pB->next;
		}
		return pA;
	}
};
class Solution {
public:
	Node* copyRandomList(Node* head) {
		// �ֿ�������
		// ��һ����ֻ���� ����� value �� next�����½������Ͻ����
		// �ڶ������ٴ��� random �ĸ���
		// ��������������������



		if (head == NULL) {
			return NULL;
		}

		Node *oldNode = head;
		while (oldNode != NULL) {
			Node *newNode = (Node *)malloc(sizeof(Node));
			newNode->val = oldNode->val;

			Node *oldNext = oldNode->next;
			newNode->next = oldNext;
			oldNode->next = newNode;

			oldNode = oldNext;
		}

		oldNode = head;
		while (oldNode != NULL) {
			Node *newNode = oldNode->next;

			if (oldNode->random == NULL) {
				newNode->random = NULL;
			}
			else {
				newNode->random = oldNode->random->next;
			}

			oldNode = newNode->next;
		}

		oldNode = head;
		Node *newHead = head->next;
		while (oldNode != NULL) {
			Node *newNode = oldNode->next;

			oldNode->next = newNode->next;
			if (newNode->next != NULL) {
				newNode->next = newNode->next->next;
			}

			oldNode = oldNode->next;
		}

		return newHead;

	}
};