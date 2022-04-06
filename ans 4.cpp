#include<stdio.h>
int push(int Queue[],int n,int front,int rear){
	if(rear==n-1&&front==0){
		printf("Stack OverFlow(Full)\n");
	}
	else if(rear+1==front){
		printf("Stack OverFlow(Full)\n");
	}
	else{
		int element;
		if(front==-1 && rear==-1){
		// condition to check queue is empty
        	printf("Enter the value: ");
			scanf("%d",&element);
			Queue[0]=element;
			return -2;
    	}
		printf("Enter the value: ");
		scanf("%d",&element);
		if(rear==n-1){
			rear=-1;
		}
		rear++;
		Queue[rear]=element;
	}
	return rear;
}

int pop(int Queue[],int rear,int front,int n){
	if(front==-1&&rear==-1){
		printf("Stack UnderFlow(Empty)\n");
	}
	else{
		if(front==rear){
			return -2;
		}
		if(front==n-1){
			front=-1;
		}
		front++;
	}
	return front;
}

int main(){
	int stack[n]={0},front=-1,rear=-1,choise=0,itr=0;
	do{
		int Pu_Po;
		printf("Enter your choise\nPush - 1\nPop - 2\n: ");
		scanf("%d",&Pu_Po);
		if(Pu_Po==1){
			rear=push(Queue,n,front,rear);
			if(rear==-2){
				front=0;
				rear=0;
			}
			display(Queue,front,rear,n);
		}
		else if(Pu_Po==2){
			front=pop(Queue,rear,front,n);
			if(front==-2){
				front=-1;
				rear=-1;
			}	
			display(Queue,front,rear,n);
		}
		else{
			printf("!!Wrong Choise!!");
		}
		printf("Do you want to continue press 1:");
		scanf("%d",&itr);
	}while(itr==1);	
}
