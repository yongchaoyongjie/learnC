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
	linklist *p = NULL;//�����½��
	int i;
	int x;
	head = (linklist*)malloc(sizeof(linklist));
	if (head = NULL){//����ͷָ��
		return head;
	}
	else{
		head->next = NULL;
	}
	printf("����ͷ�巨����������ĸ���%d\n", n);
	for (i = 0; i < n; i++){
		if (p == NULL){
			return p;
		}
		p = (linklist*)malloc(sizeof(linklist));//�����½��
		scanf("%d", &x);
		p->date = x;
		p->next = head->next;//p�������ͷ
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
	printf("����β�巨�������ĸ���\n");
	for (i = 0; i < n; i++){
		p = (linklist*)malloc(sizeof(linklist));
		if (p == NULL){
			return p;
		}
		scanf("%d", &x);
		p->date = x;
		tail->next = p;
		p->next = NULL;//�����һ���ڵ����һ����ַָ��ձ�ʾ����
		tail = p;
	}
	return head;
}
void print(linklist*head ){
	linklist *p=NULL;
	p = head->next;
	if (head->next == NULL){
		printf("�ñ�Ϊ��");
	}
	else{
		printf("��ӡ������\n");
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
	printf("������������\n");
	scanf("%d", &n);
	 creat_headlist( q, n);
	print(q);
	creat_taillist( q,  n);
	print(q);
	system("pause");
	free(q);
	return 0;
}
