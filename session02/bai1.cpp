#include<stdio.h>

int main() {
    int n, i, max;
    int arr[100];

    // nhap so luong phan tu
    printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);

    //kiem tra dieu kien
    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    //nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // khoi tao gia tri lon nhat
    max = arr[0];

    // tim gia tri lon nhat
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // in ket qua
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
