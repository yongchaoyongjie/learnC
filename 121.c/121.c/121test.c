# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
# include<string.h>
//����һ����̬����
//struct Student
//{
//	int num;
//	float score;
//	struct Student *next;//����һ��ΪStudent���͵�ָ��
//	};
//int main(){
//	struct Student a, b, c, *head, *p;
////����ΪStudent���͵ı���a,b,c Ҳ����a,b,cΪ���(�����ݺ���һ���ڵ�ĵ�ַ���)
////head��ͷָ��
//	a.num = 101;
//	a.score = 89.5;
//	b.num = 102;
//	b.score = 90;
//	c.num = 103;
//	c.score = 85;
//	head = &a;//���ڵ�a����ʼ��ַ��ͷָ��head
//	a.next = &b;//���ڵ�b����ʼ��ַ��a�ڵ��next��Ա
//	b.next = &c;// ���ڵ�c����ʼ��ַ��ֵ��c(a�α�Ϊa??)�ڵ��next��Ա
//	c.next = NULL; //c�ڵ��next��Ա����������ڵ�ĵ�ַ����Ϊ��
//	p = head;//�ṹ��ָ��ָ��ͷָ��
//	while (p != NULL){
//		printf("%d%5.1f\n", p->num, p->score);
//		p = p->next;//ʹp���ָ����һ���ڵ�;
//		//printf("%d%5.1f\n", p->num, p->score);��ӡ������ֻ��ӡ��bc�ڵ��a�ڵ�û�д�ӡ
//	}
//	//do {
//	//	printf("%d%5.1f\n", p->num, p->score);
//	//
//	//	p = p->next;//ʹp���ָ����һ���ڵ�;
//	//}while (p != NULL);
//	
//	system("pause");
//	return 0;
//}
//������̬�����ǳ�����ִ�й����д��޵��еĽ�����һ������,
//��һ��һ���Ŀ��ٽڵ��������ڵ�����,��������ǿ�����Ĺ�ϵ
//дһ����������һ��������ѧ�����ݵĵ���̬����
//# define LEN sizeof(struct Student)//����LED��СΪstruct student
//struct Student {
//	int num;
//	float score;
//	struct Student *next;
//};
//int n;//ȫ�ֱ���
//struct Student *creat(void)
//{
//	struct Student *p1, *p2, *head;
//	n = 0;
//	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));
//	//��malloc�������ٵ�һ���µ�Ԫ��ʹp1p2��ָ��������ڵ�����Ϊ struct Student*
//	scanf("%d%f", &p1->num, &p1->score);
//	//����num��score,&����Ϊscanf,������һ������Ҫ����������ѽ
//	head = NULL;
//	while (p1->num != 0){//����num������0,��ѭ��
//		//!!!p1ʼ��ָ������½��!!!
//		n = n + 1;
//		if (n == 1){
//			head = p1;//����1���ǰ�p1�Ľ����Ϊ��һ���ڵ�
//			//	
//		}
//		else{//������1,��ʱp1ָ�����½���p2����ָ�ĵ�һ�����
//
//			p2->next = p1;//����һ������next����½��ĵ�ַ
//			//��ʱp2ָ�����Ȼ�ǵ�һ���ڵ�
//		}
//		p2 = p1;//��p2ָ��ڶ������(��p1���������Ľ��)
//
//		p1 = (struct Student*)malloc(sizeof(struct Student));
//		//���ٶ�̬�洢������ʼ��ַ��p1;
//		scanf("%d%f", p1->num, &p1->score);
//	}
//			p2->next = NULL;//��Ϊֻ���������˴�ʱp2nextָ���Ǳ�β
//			//����ʱp1��ָ�Ľ��û������������(��֤p2ָ���β)
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
//	printf("\n��ӡ\n");
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
//����һ������Ľ��
//struct list_node{
//	int date;
//	struct list_node *next;
//};
//typedef struct list_node list;
//list *creat_list_node(int date){
//	list *node = NULL;
//	node = (list*)malloc(sizeof(list));
//	if (node == NULL){
//		printf("����ʧ��\n");
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
//	list *node_ptr = creat_list_node(date);//����һ���ڵ�
//	printf("node_ptr->date=%d\n", node_ptr->date);//��ӡ�ڵ����������
//	printf("node_ptr->next=%d\n", node_ptr->next);
//	system("pasue");
//	return 0;
//}
//β�巨����һ��������
//typedef struct LinkList
//{
//	int date;
//	struct LinkList *next;
//}list,*plist;//����һ���ṹ���Լ��ṹ��ָ��ָ������Ϊlist ��*plist 
////���ṹ��struct LinkList �ض���Ϊlist
////typdef struct LinkList  *plist 
//void CreatFromTail(plist *head,int n ){
//	plist p1 = (plist)malloc(sizeof(list));//����ռ�
//	p1->date =n;//�½���p1�������ó�n
//	p1->next = NULL;//�½��p1��next�ÿ�
//	plist temp = *head;//����һ����ʱ����ָ��ָ���ͷ
//	if (NULL== *head){//�����ͷΪ����p1��Ϊ��һ���½��
//		*head = p1;
//		p1->next = NULL;
//	}
//	else{//������ǿ�������tempָ��β���(null����β���)
//		while (temp->next!= NULL){
//			temp = temp->next;
//		}
//		temp->next = p1;//��β���temp��next��Ϊp1,��p1���ó�β���
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
//	head = NULL;//��ʼ����ͷ
//	int num;
//	printf("��������\n");
//	scanf("%d", &num);
//	while (num != -1){//Ϊ��һ����	
//		CreatFromTail(&head, num);
//		scanf("%d", &num);
//	}
//	printf("��ӡ���������Ϊ:\n");
//	print_list(head);
//	system("pause");
//	return 0;
//}
typedef struct LinkList{
	int date;
	struct LinkList *next;
	

}list,*plist;
void creativeformhead(plist *head,int n){
	plist node = (plist)malloc(sizeof(list));//p1Ϊ�½��
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
