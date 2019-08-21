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
//	//**head是指向指针的指针
//	listnode*node = new listnode();
//	node->data = val;
//	node->next = nullptr;
//	//特殊情况处理
//	if (*head == nullptr){
//		*head = node;
//	}
//	else{
////找到链表最后一个节点
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
//	//head是一个指向指针的指针
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
		//还需要第三个结点保存当前的值
//让新链表的第一个结点的下一个变成新链表的第一个结点然后更新新链表的
//第一个结点
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
	//两个链表分开后单独连接各链表
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
				// TODO: 没有 free 结点，有内存泄漏
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
		// 分开三步走
		// 第一步，只复制 结点中 value 和 next，让新结点跟在老结点后边
		// 第二步，再处理 random 的复制
		// 第三步，把链表拆成两个



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