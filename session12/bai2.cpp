#include <stdio.h>

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiem tra neu khong co phan tu
    if (n <= 0) {
        printf("Khong co gia tri nho nhat\n");
        return 0;
    }

    int arr[n];
    // Nhap cac phan tu cho mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tim gia tri nho nhat trong mang
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // In ra gia tri nho nhat
    printf("Gia tri nho nhat la: %d\n", min);

    return 0;
}

