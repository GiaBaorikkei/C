#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n){
	for(int i ; i < n; i++){
		int swapped = 0;
		for( int j = 0; j < n - 1; j++){
			if(arr[j] > arr[j + 1]){
				// ham swap hoan doi
			 	int temp = arr[j];
				 arr[j] = arr[j + 1];
				 arr[j + 1] = temp;
				 swapped = 1; 
			} 
		} 
		if(swapped == 0){
			break;
		}
	} 
} 

void printList(int arr[], int size){
	for(int i  =0; i < size	; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}


int main(){
	int arr[] = {1,3,5,2,4,8,2,6,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Mang truoc khi sap xep la");
	printList(arr,size);
	
	bubbleSort(arr,9);
	printf("Mang sau khi sap xep la:");
	printList(arr,size); 
	return 0; 
} 
 
