#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct node{
	ElemType data;
	struct node* prev, * next;
}Node;
void insertHead(Node* L,ElemType e) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->prev = L;
	p->next = L->next;
	L->next->prev = p;
	L->next = p;
}