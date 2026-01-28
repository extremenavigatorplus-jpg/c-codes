#include <stdlib.h>
#include <stdio.h>



struct node{
	int value;
	struct node*next;
};

int main(){
	
	int i=0,sum=0,num;
	struct node *head=NULL,*temp=NULL,*newNode=NULL;
	
	printf("enter the number of elements:");
	scanf("%d",&num);
	
	printf("enter the elements\n");

	while(i<num){
		newNode=(struct node*)malloc(sizeof(struct node));
		
		scanf("%d",& newNode->value);
		printf("value %d entered\n",newNode->value);
		newNode->next=NULL;
		
		sum+=newNode->value;
		
		if(head==NULL){
			head=newNode;
			temp=newNode;
		}else{
			temp->next=newNode;
			temp=newNode;
		}
		
		free(newNode);
		
		i+=1;
	}

	printf("%d",sum);
	return 0;
}
