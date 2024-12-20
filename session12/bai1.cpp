#include <stdio.h>

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiem tra neu mang khong co phan tu
    if (n <= 0) {
        printf("Khong co gia tri lon nhat\n");
        return 0;
    }

    int arr[n];
    // Nhap cac phan tu cho mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tim gia tri lon nhat trong mang
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // In ra gia tri lon nhat
    printf("Gia tri lon nhat la: %d\n", max);

    return 0;
}

