# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
#define N 10
//带头结点的单链表
//链表结点的定义

//typedef struct Node{
//	int date;
//	struct Node *next;
//}Node;
////初始化链表
//void init( Node *h){
//	Node *r;//定义一个新结点
//	r = (Node *)malloc(sizeof(Node));//分配空间
//	if (r == NULL)
//		return 0;
//	r->date = 0;
//	r->next = NULL;
//	h = r;
//}
//创建链表从前到后插入
//void createlink(Node *h){
//	Node *s, *r;//r为尾指针,
//	r = h;//尾指针刚开始指向头指针
//	int n;
//	
//	while (1){
//		scanf("%d", &n);
//		if (n == -1)
//			break;
//		else{
//			s = (Node*)malloc(sizeof(Node));
//			s->date = n;
//			r->next = s;//r的地址是s结点指针的地址
//			r = s;
//		}
//	}
//}
//void creatformlink(Node *h){
//	Node *s;
//	int n;
//	while (1){
//		scanf("%d", &n);
//		if (n == 0)
//			break;
//		s = (Node*)malloc(sizeof(Node));
////头插法
//		s->date = n;
//		s->next = h->next;
//		h->next = s;
//	}
//}
//void bianli(Node *h){
//	Node *p;
//	p = h->next;
//	int k = 0;
//	while (k < h->date){
//		printf("%d", p->date);
//		p = p->next;
//		k++;
//	}
//	printf("\n");
//	p = h->next;
//	while (p != NULL){
//		printf("%d", p->date);
//		p = p->next;
//	}
//	printf("\n");
//}
//int main(){
//	Node *h = NULL;
//	init(h);
//	creatformlink( h);
//	bianli( h);
//	system("pause");
//	return 0;
//}
typedef struct Node{
	int date;
	struct Node *next;
}Node;
Node *creatform(int n){
	Node *h, *s, *r;//h是头指针,r是尾,s是创建的新结点
	h =s=r= (Node*)malloc(sizeof(Node));
	for (int i = 0; i < n; i++){
		if (s->next != NULL){
			scanf("%d", &s->date);
		//用尾插法r刚开始指向头之后始终指向尾
			r->next= s;//s是结点指针s的地址给r->next
			r = s;
			s = (Node*)malloc(sizeof(Node));//在创建新结点
		}
	}
	r->next = NULL;
	return h;
}
void print(Node *h){
	Node *p;//定义新结点
	while (p->next != NULL){
		printf("%d", p->date);//输出结点
		p = p->next;//使指针指向新的结点
	}
}
//法1查找结点
//Node *serach(Node *h, int key){//值查找为n的结点
//	Node *p;
//	p = h->next;
//	while (p->next != NULL){
//	
//		if (p->date != key){
//			p = p->next;
//		}
//		else{
//			break;
//		}
//	}
//	return p;
//}
//法二查给定值找结点
Node serach(Node *h, int key){
	Node *p;
	while (p->next != NULL){
		if (p->date == key){
			printf("2d%2%d",p, p ->date);
			break;
		}
	}
}
//如果要查找第i个结点
Node *serach(Node *h, int i){
	int j;
	Node *p;
	if (i < 0){
		return NULL;
	}
		p = h;
		j = 0; 
		while (p->next!=NULL&&(j<i)){
			p = p->next;
		}
		if (i = j){
			return p;
		}
		else{
			return NULL;
		}
}
//求链表的长度
int length(Node *h){
	Node *p;
	p = h->next;
	int j = 0;
	while (p->next != NULL){
		p = p->next;
		j++;
	}
	return j;
}
//法1在已经好的链表中插入一个节点e
//Node *insert(Node *h,int e){
//	Node *p;
//	int n1 = 1;
//	Node *p1 = h;
//	Node *p2;
//	Node *s = (Node*)malloc(sizeof(Node));
//	printf("输入插入的数据\n");
//	scanf("%d",&s->date);
//	while (n1!=e){//对比节点
//		p2 = p1;//p2保存p1的结点
//		p1 = p1->next;//p1结点后移
//		n1++;
//	}
//	if (n1 == e){
//		if (h == p1){//如果这个结点插在表头
//			s->next = h;
//			h = s;
//		}
//		else{//结点插在链表的中间
//			s->next = p1;
//			p2->next = s;
//		}
//	}
//	return h;
//}
////已经好的链表插入一个数据而不是结点
Node *insert(Node *h, int date){
	Node *p1,*p2;
	Node *s=(Node*)malloc(sizeof(Node));
	printf("请输入你要插入的数\n");
	scanf("%d", &p1->date);
	while (p1->date != date){
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->date = date){
		if (p1 == h){
			s->next = h;
		}
		else{
			s->next = p1;
			p2->next = s;
		}
	}
	return h;
}
int main(){
	Node *h;
	creatform(6);
print( h);
	printf("%d", serach(h, 4));
printf("%d", length(h));
	printf("%d", insert(h, 3));
	system("pause");
	return 0;
}
