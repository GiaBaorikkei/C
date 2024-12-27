#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int x, int n){
	for( int i = 0 ; i < n; i++  ){
		if(arr[i] == x){
			printf("Phan tu %d o vi tri thu %d", x, i); 
			return i; 
		}
	} 
	printf("Khong co phan tu %d", x);
	return -1; 
} 

int main(){
	int n = 10 ;
	int arr[n] = {1,2,3,4,5,6,7,8,9,10};
	int x; 
	printf("Nhap vao so can tim");
	scanf("%d", &x);
	linearSearch(arr, x, n ); 
	return 0;  
} 
