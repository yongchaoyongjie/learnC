# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//建立一个静态链表
//struct Student
//{
//	int num;
//	float score;
//	struct Student *next;//定义一个为Student类型的指针
//	};
//int main(){
//	struct Student a, b, c, *head, *p;
////定义为Student类型的变量a,b,c 也就是a,b,c为结点(由数据和下一个节点的地址组成)
////head是头指针
//	a.num = 101;
//	a.score = 89.5;
//	b.num = 102;
//	b.score = 90;
//	c.num = 103;
//	c.score = 85;
//	head = &a;//将节点a的起始地址给头指针head
//	a.next = &b;//将节点b的起始地址给a节点的next成员
//	b.next = &c;// 将节点c的起始地址赋值给c(a课本为a??)节点的next成员
//	c.next = NULL; //c节点的next成员不存放其他节点的地址所以为空
//	p = head;//结构体指针指向头指针
//	while (p != NULL){
//		printf("%d%5.1f\n", p->num, p->score);
//		p = p->next;//使p结点指向下一个节点;
//		//printf("%d%5.1f\n", p->num, p->score);打印放在这只打印了bc节点的a节点没有打印
//	}
//	//do {
//	//	printf("%d%5.1f\n", p->num, p->score);
//	//
//	//	p = p->next;//使p结点指向下一个节点;
//	//}while (p != NULL);
//	
//	system("pause");
//	return 0;
//}
//建立动态链表是程序在执行过程中从无到有的建立起一个链表,
//即一个一个的开辟节点和输入各节点数据,并建立起强相链的关系
//写一个函数建立一个有三名学生数据的单向动态链表
//# define LEN sizeof(struct Student)//定义LED大小为struct student
//struct Student {
//	int num;
//	float score;
//	struct Student *next;
//};
//int n;//全局变量
//struct Student *creat(void)
//{
//	struct Student *p1, *p2, *head;
//	n = 0;
//	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));
//	//用malloc函数开辟第一个新单元并使p1p2都指向它这个节点类型为 struct Student*
//	scanf("%d%f", &p1->num, &p1->score);
//	//输入num和score,&是因为scanf,创建了一个结点就要给输入数据呀
//	head = NULL;
//	while (p1->num != 0){//输入num不等于0,就循环
//		//!!!p1始终指向的是新结点!!!
//		n = n + 1;
//		if (n == 1){
//			head = p1;//等于1就是把p1的结点作为第一个节点
//			//	
//		}
//		else{//不等于1,此时p1指向了新结点而p2还是指的第一个结点
//
//			p2->next = p1;//将第一个结点的next存放新结点的地址
//			//此时p2指向的依然是第一个节点
//		}
//		p2 = p1;//将p2指向第二个结点(刚p1建立起来的结点)
//
//		p1 = (struct Student*)malloc(sizeof(struct Student));
//		//开辟动态存储区把起始地址给p1;
//		scanf("%d%f", p1->num, &p1->score);
//	}
//			p2->next = NULL;//因为只输入两个人此时p2next指的是表尾
//			//而此时p1所指的结点没有链入链表中(保证p2指向表尾)
//			return head;
//}
//int main(){
//	struct Student *pt;
//		pt = creat();
//	printf("num\n%d\n%5.1f\n", pt->num, pt->score);
//	system("pause");
//	return 0;
//}
//#define LEN sizeof(struct Student)
//struct Student
//{
//	long num;
//	float score;
//	struct Stdent *next;
//};
//int n;
//void print(struct Student *head){
//	struct Student *p;
//	printf("\n打印\n");
//	p = head;
//	if (head != NULL){
//		while (p != NULL){
//			printf("%d%5.1f\n", p->num, p->score);
//			p = p->next;
//		}
//	}
//}
//int main(){
//	struct Student *head;
//	head = creat();
//	print(head);
//	system("pasue");
//	return 0.;
//}
//创建一个链表的结点
//struct list_node{
//	int date;
//	struct list_node *next;
//};
//typedef struct list_node list;
//list *creat_list_node(int date){
//	list *node = NULL;
//	node = (list*)malloc(sizeof(list));
//	if (node == NULL){
//		printf("创建失败\n");
//	}
//	else{
//		memset(node, 0, sizeof(list));
//		node->date = date;
//		node->next = NULL;
//		return node;
//	}
//}
//int main(){
//	int date = 100;
//	list *node_ptr = creat_list_node(date);//创建一个节点
//	printf("node_ptr->date=%d\n", node_ptr->date);//打印节点里面的数据
//	printf("node_ptr->next=%d\n", node_ptr->next);
//	system("pasue");
//	return 0;
//}
//尾插法创建一个单链表
//typedef struct LinkList
//{
//	int date;
//	struct LinkList *next;
//}list,*plist;//建立一个结构体以及结构体指针指针类型为list 的*plist 
////将结构体struct LinkList 重定义为list
////typdef struct LinkList  *plist 
//void CreatFromTail(plist *head,int n ){
//	plist p1 = (plist)malloc(sizeof(list));//申请空间
//	p1->date =n;//新结点的p1数据设置成n
//	p1->next = NULL;//新结点p1的next置空
//	plist temp = *head;//定义一个临时变量指针指向表头
//	if (NULL== *head){//如果表头为空则将p1作为第一个新结点
//		*head = p1;
//		p1->next = NULL;
//	}
//	else{//如果不是空最终让temp指向尾结点(null就是尾结点)
//		while (temp->next!= NULL){
//			temp = temp->next;
//		}
//		temp->next = p1;//将尾结点temp的next设为p1,将p1设置成尾结点
//	}
//}
//void print_list(plist head){
//	plist elem = head;
//	while (elem != NULL){
//		printf("%d", elem->date);
//		elem = elem->next;
//		printf("\n");
//	}
//}
//int main(){
//	plist head;
//	head = NULL;//初始化表头
//	int num;
//	printf("请输入数\n");
//	scanf("%d", &num);
//	while (num != -1){//为负一结束	
//		CreatFromTail(&head, num);
//		scanf("%d", &num);
//	}
//	printf("打印的输出链表为:\n");
//	print_list(head);
//	system("pause");
//	return 0;
//}
typedef struct LinkList{
	int date;
	struct LinkList *next;
	

}list,*plist;
void creativeformhead(plist *head,int n){
	plist node = (plist)malloc(sizeof(list));//p1为新结点
	node->date = n;
	node->next = NULL;
	plist zhizhen = *head;
	if (*head = NULL){
		*head = node;
		node->next = NULL;
	}
	else{
		while ()
	
	}

}
