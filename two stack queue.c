#include <stdio.h>
#define max 5

int stk1[max],stk2[max];
int top1=-1,top2=-1;

void enqueue(int x){
	if(top1==max-1){
		printf("Queue is full");
		}else{
			stk1[++top1]=x;
			printf("%d is entered to queu to successfully",stk1[top1]);
					}
	}

int dequeue(){
	if(top1==-1 & top2==-1){
		printf("Queue is empty");
		return -1;
		}else if(top2==-1){
			for(int i=top1; i>=0 ;i++){
				stk2[++top2]=stk1[top1];
				}
		}
		return stk2[top2--];
	}

int main(){
	int y;
	enqueue(10);
	enqueue(20);
	y=dequeue();
	
	printf("%d is dequeue from queue successfully",y);	enqueue(30);
	
	return 0;
}