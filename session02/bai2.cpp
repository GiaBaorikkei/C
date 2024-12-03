#include<stdio.h>

int main(){
	int arr[100];
	int n, i, x, count = 0;
	
	// nhap so luong phan tu
	printf("Nhap so luong phan tu (0 < n <= 100): ");
	scanf("%d", &n);
	
	//kiem tra dieu kien
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }
    
    // nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang: \n");
    for(i = 0; i < n; i++){
    	scanf("%d", &arr[i]);
	}
	
	// nhap so can dem
	printf("nhap so can dem so lan xuar hien: ");
	scanf("%d", &x);
	
	// dem so lan xuat hien
	for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
	
	// in ket qua 
	printf("So %d xuat hien %d lan trong mang \n", x, count);
	
	return 0;
}
