#include<stdio.h>
#include<stdlib.h>
#define n 5

struct node{
	struct node * prev;
	int data;
	struct node * next;
};

//---------------On Node Work---------------------------------
void remove(struct node * head,struct node * NODE){
	if(head==NULL){
		printf("L.List is Empty\n");
	}
	struct node *a=head,*b;
	do{
		if(a->next==NODE){
			break;
		}
		a=a->next;
	}while(1);
	b=NODE->next;
	b->prev=a;
	a->next=b;
	free(NODE);
}

void insert(struct node * head,struct node * NODE,int Data){
	struct node * a=head, *b, *c;
	b=(struct node *)malloc(sizeof(struct node));
	do{
		a=a->next;
	}while(a!=NODE);
	c=a->next;
	b->data=Data;
	a->next=b;
	b->prev=a;
	b->next=c;
	c->prev=b;
}
//---------------------------------------------------------------
    
void display(struct node * head){
	struct node * a=head;
	printf("\nForward: ");
	do{
		printf("\nData-> %d",a->data);
		a=a->next;
		if(a->next==NULL){
			printf("\nData-> %d",a->data);
			printf("\nBackward: ");
			do{
				printf("\nData-> %d",a->data);
				a=a->prev;
			}while(a!=NULL);
			break;
		}
	}while(a!=NULL);
}

int main(){
	struct node * one, *two, *three;
	one=(struct node *)malloc(sizeof(struct node));
	two=(struct node *)malloc(sizeof(struct node));
	three=(struct node *)malloc(sizeof(struct node));
	
	one->prev=NULL;
	one->data= 34;
	one->next= two;
	
	two->prev=one;
	two->data= 97;
	two->next= three;
	
	three->prev=two;
	three->data= 45;
	three->next= NULL;
	
	printf("\nBefore Insert: ");
	display(one);
	insert(one,two,72);
	printf("\nAfter Insert: ");
	display(one);
	remove(one,two);
	printf("\nAfter Delete: ");
	display(one);
}

