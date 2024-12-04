#include<stdio.h>

int main(){
	int n;
	int arr[n];
	
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }	
    
    for (int i = 0; i < n / 2; i++) {
         int temp = arr[i];
         arr[i] = arr[n - i - 1];
         arr[n - i - 1] = temp;
     }
     
    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
