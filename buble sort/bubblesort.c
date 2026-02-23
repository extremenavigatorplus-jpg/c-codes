#include <stdio.h>

void bubble_sort(int arr[], int n){
	for (int i=0; i<n-1 ;i++){
		for(int j=0; j<n-i-1,j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int data[]= {64,34,25,12,11,90};
	int n = sizeof(data) / sizeof(data[0]);
	
	bubbleSort(data, n);
	
	printf("sorted array:\n");
	for(int i=0;i<n;i++){
		printf("%d",data[i]);
	}
	return 0;
}
