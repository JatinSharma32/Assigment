#include<stdio.h>
#define n 10
//Make display fun.c as well
int push(int Queue[],int n,int rear){
	if(rear==n-1){
		printf("Stack OverFlow(Full)\n");
	}
	else{
		int element;
		printf("Enter the value: ");
		scanf("%d",&element);
		rear++;
		Queue[rear]=element;
	}
	return rear;
}

int pop(int Queue[],int rear,int front){
	if(front>rear){
		printf("Stack UnderFlow(Empty)\n");
	}
	else{
		front++;
	}
	return front;
}

void rev(int Queue[],int front,int rear,int n){
	if(front>rear){
		printf("Stack UnderFlow(Empty)\n");
		return;
	}
	while(front<rear){
		int temp=Queue[front];
		Queue[front]=Queue[rear];
		Queue[rear]=temp;
		front++;
		rear--;
	}
}

void display(int Queue[],int front,int rear){
	for(int i=front;i<=rear;i++){
		printf("\n%d",Queue[i]);
	}
	printf("\n");
}

int main(){
	int front=0,rear=-1,Queue[n],choise;
	do{
		int Pu_Po;
		printf("Enter your choise\nPush - 1\nPop - 2\n: ");
		scanf("%d",&Pu_Po);
		if(Pu_Po==1){
			rear=push(Queue,n,rear);
		}
		else if(Pu_Po==2){
			front=pop(Queue,rear,front);
		}
		else if(Pu_Po==3){
			rev(Queue,front,rear,n);
		}
		else{
			printf("!!Wrong Choise!!");
		}
		display(Queue,front,rear);
		printf("Do you want to continue press 1:");
		scanf("%d",&choise);
	}while(choise==1);
	
}
