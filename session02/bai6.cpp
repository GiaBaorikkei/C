#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
    scanf("%d", &n);

    printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
    scanf("%d", &m);

    if (n <= 0 || n > 1000 || m <= 0 || m > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int arr1[n], arr2[m], arr3[n + m];

    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // G?p hai m?ng
    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        arr3[n + i] = arr2[i];
    }

    printf("Mang ket qua sau khi gop: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
