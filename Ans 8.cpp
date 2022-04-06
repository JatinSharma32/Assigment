#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next; 
};

int Node_Counter(struct node * head){
	struct node * a=head;
	int counter=0;
	do{
		counter++;
		a=a->next;
	}while(a!=NULL);
	return counter;
}

int main(){
	struct node *head,*tail,*Middle1,*Middle2,*Middle3;
	head=(struct node *)malloc(sizeof(struct node));
	tail=(struct node *)malloc(sizeof(struct node));
	Middle1=(struct node *)malloc(sizeof(struct node));
	Middle2=(struct node *)malloc(sizeof(struct node));
	Middle3=(struct node *)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=Middle1;
	
	Middle1->data=2;
	Middle1->next=Middle2;
	
	Middle2->data=3;
	Middle2->next=Middle3;
	
	Middle3->data=4;
	Middle3->next=tail;
	
	tail->data=5;
	tail->next=NULL;
	
	printf("The number of nodes are: %d",Node_Counter(head));
}

