#include<stdio.h>
#include<stdlib.h>
#define n 5

struct node{
	int data;
	struct node * next;
};

//---------------On Node Work---------------------------------
void remove(struct node * head,struct node * NODE){
	if(head==NULL){
		printf("L.List is Empty\n");
	}
	struct node *a=head;
	do{
		if(a->next==NODE){
			break;
		}
		a=a->next;
	}while(1);
	a->next=NODE->next;
	free(NODE);
}

void insert(struct node * head,struct node * NODE,int Data){
	struct node * a=head;
	struct node * b;
	b=(struct node *)malloc(sizeof(struct node));
	do{
		a=a->next;
	}while(a!=NODE);
	b->data=Data;
	b->next=a->next;
	a->next=b;
}
//---------------------------------------------------------------
    
void display(struct node * head){
	struct node * a=head;
	do{
		printf("\nData-> %d",a->data);
		a=a->next;
	}while(a!=head);
}

int main(){
	struct node * one, *two, *three, *forth;
	one=(struct node *)malloc(sizeof(struct node));
	two=(struct node *)malloc(sizeof(struct node));
	three=(struct node *)malloc(sizeof(struct node));
	forth=(struct node *)malloc(sizeof(struct node));
	one->data= 34;
	one->next= two;
	two->data= 97;
	two->next= three;
	three->data= 45;
	three->next= forth;
	forth->data= 402;
	forth->next= one;
	printf("\nBefore Insert: ");
	display(one);
	insert(one,three,72);
	printf("\nAfter Insert: ");
	display(one);
	remove(one,two);
	printf("\nAfter Delete: ");
	display(one);
}

