#include<stdio.h>
#include<stdlib.h>
#define n 5

struct node{
	int data;
	struct node * next;
};

void rev(struct node *head) {  
        //Node current will point to head  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data) {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    } 

void display(struct node * head){
	struct node * d=head;
	do{
		printf("\nData-> %d",d->data);
		d=d->next;
	}while(d!=NULL);
}


int main(){
	struct node * one, *two, *three, *four;
	one=(struct node *)malloc(sizeof(struct node));
	two=(struct node *)malloc(sizeof(struct node));
	three=(struct node *)malloc(sizeof(struct node));
	four=(struct node *)malloc(sizeof(struct node));
	one->data= 34; one->next= two;
	two->data= 97; two->next= three;
	three->data= 66; three->next= four;
	four->data= 45; four->next= NULL;
	printf("Original LL");	
	display(one);
	rev(one);
	printf("\nReverse LL");	
	display(one);
}

