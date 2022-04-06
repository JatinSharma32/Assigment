#include<stdio.h>
#define n 13

int push(int Stack[],int top,int elem){
	if(top==n-1){
		printf("FUll.\n");
	}
	else{
		top++;
		Stack[top]=elem;
	}
	return top;
}


int pop(int Stack[],int top){
	if(top==-1){
		printf("EMPTY.\n");
	}
	else{
		top--;
	}
	return top;
}

int main(){
	int stack[n]={0},top=-1,choise=0,itr=0;
	do{
		printf("Enter your choise\nPush - 1\nPop - 2\n: ");
		scanf("%d",&choise);
		if(choise==1){
			printf("\nEnter the element: ");
			int elem;
			scanf("%d",&elem);
			top=push(stack,top,elem);
		}
		else if(choise==2){
			top=pop(stack,top);
		}
		else{
			printf("\nInvalid Choise.");
		}
		printf("\nWant to continue press 1: ");
		scanf("%d",&itr);
	}while(itr==1);
}

