# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
typedef struct linklist{
	int date;
	struct linklist *next;

}linklist;
linklist* creat_headlist(linklist *head, int n){
	linklist *p = NULL;//定义新结点
	int i;
	int x;
	head = (linklist*)malloc(sizeof(linklist));
	if (head = NULL){//创建头指针
		return head;
	}
	else{
		head->next = NULL;
	}
	printf("请用头插法输入插入数的个数%d\n", n);
	for (i = 0; i < n; i++){
		if (p == NULL){
			return p;
		}
		p = (linklist*)malloc(sizeof(linklist));//产生新结点
		scanf("%d", &x);
		p->date = x;
		p->next = head->next;//p结点插入表头
		head->next = p;
	}
	return head;
}
linklist* creat_taillist(linklist *head, int n){
	linklist *p = NULL;
	linklist *tail;
	int i;
	int x;
	head = (linklist*)malloc(sizeof(linklist));
	if (head == NULL){
		return head;
	}
	else{
		head->next = NULL;
		tail = head;
	}
	printf("请用尾插法输入插入的个数\n");
	for (i = 0; i < n; i++){
		p = (linklist*)malloc(sizeof(linklist));
		if (p == NULL){
			return p;
		}
		scanf("%d", &x);
		p->date = x;
		tail->next = p;
		p->next = NULL;//将最后一个节点的下一个地址指向空表示结束
		tail = p;
	}
	return head;
}
void print(linklist*head ){
	linklist *p=NULL;
	p = head->next;
	if (head->next == NULL){
		printf("该表为空");
	}
	else{
		printf("打印该链表\n");
		while (head->next != NULL){
			printf("%d", p->date);
			p = p->next;
		}
		printf("\n");
	}
}
int main(){
	linklist *q=NULL;
	int n;
	printf("请输入链表长度\n");
	scanf("%d", &n);
	 creat_headlist( q, n);
	print(q);
	creat_taillist( q,  n);
	print(q);
	system("pause");
	free(q);
	return 0;
}
