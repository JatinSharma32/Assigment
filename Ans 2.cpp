#include<stdio.h>
#define size 5
int No_elem=0;

void insert(int arr[],int pos,int elem){
	if(No_elem==size){
		printf("Array is full");
		return;
	}
	arr[pos]=elem;
	No_elem++;
}

void Delete(int arr[],int pos){
	if(No_elem==0){
		printf("Array is empty");
		return;
	}
	arr[pos]=NULL;
	No_elem--;
}

void display(int arr[]){
	for(int i=0;i<size;i++){
		printf("\n%d the element: %d",i+1,arr[i]);
	}
}

int main(){
	int arr[size]={0},itr=0,choise=0;
	do{
		printf("Enter your choise\nInsert - 1\nDelete - 2\nDisplay - 3\n: ");
		scanf("%d",&choise);
		if(choise==1){
			printf("\nEnter the element and index(0 starting): ");
			int pos,elem;
			scanf("%d %d",&elem,&pos);
			insert(arr,pos,elem);
		}
		else if(choise==2){
			printf("\nEnter the index(0 starting): ");
			int pos;
			scanf("%d",&pos);
			Delete(arr,pos);
		}
		else if(choise==3){
			display(arr);
		}
		else{
			printf("\nInvalid Choise.");
		}
		
		printf("\nWant to continue press 1: ");
		scanf("%d",&itr);
	}while(itr==1);
}

