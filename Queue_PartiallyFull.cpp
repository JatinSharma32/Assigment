#include<stdio.h>
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

int main(){
	int front=0,rear=-1,n;
	printf("Enter the size of Queue: ");
	scanf("%d",&n);
	int Queue[n];
	printf("How many initial elements are there?\n: ");
	int Ini_element;
	scanf("%d",&Ini_element);
	for(int i=0;i<Ini_element;i++){
		scanf("%d",&Queue[i]);
		rear++;
	}
	int choise;
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
		else{
			printf("!!Wrong Choise!!");
		}
		printf("Do you want to continue press 1:");
		scanf("%d",&choise);
	}while(choise==1);
	
}

