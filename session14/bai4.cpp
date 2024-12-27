#include<stdio.h>
#include<stdlib.h>

// ham hoan doi 2 so qua vi tri
void swap(int *a, int *b){
	int temp = *a;
	*a = *b; 
	*b = temp;
}

void selectionSort(int arr[], int n){
	for(int i =0; i < n; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		// su dung ham doi cho
		swap(&arr[min],&arr[i]);
	}
}

void printList(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[10] = {7,2,4,5,9,3,1,19,8,10};
	int size = sizeof(arr)/ sizeof(arr[0]);
	printf("Mang truoc khi sap xep:");
	printList(arr,size);
	selectionSort(arr, size);
	printf("Mang sau khi sap xep:");
	printList(arr,size);
	return 0;
}
