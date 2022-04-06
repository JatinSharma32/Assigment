#include<stdio.h>
#include<stdlib.h>
#define n 5

struct node{
	int data;
	struct node * next;
};

void concat(struct node * LL1,struct node * LL2){
	struct node * d=LL1;
	do{
		d=d->next;
	}while(d->next!=NULL);
	d->next=LL2;
}

void display(struct node * head){
	struct node * d=head;
	do{
		printf("\nData-> %d",d->data);
		d=d->next;
	}while(d!=NULL);
}


int main(){
	struct node * one, *two, *three;
	one=(struct node *)malloc(sizeof(struct node));
	two=(struct node *)malloc(sizeof(struct node));
	three=(struct node *)malloc(sizeof(struct node));
	one->data= 34; one->next= two;
	two->data= 97; two->next= three;
	three->data= 45; three->next= NULL;
	struct node * a, *b, *c;
	a=(struct node *)malloc(sizeof(struct node));
	b=(struct node *)malloc(sizeof(struct node));
	c=(struct node *)malloc(sizeof(struct node));
	a->data= 23; a->next= b;
	b->data= 35; b->next= c;
	c->data= 75; c->next= NULL;
	printf("Before concat:\nLL1");	
	display(one);
	printf("\nLL2");
	display(a);
	printf("\nAfter concat:");
	concat(one,a);
	display(one);
}

