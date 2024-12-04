#include <stdio.h>

int main() {
    int n, k;
    printf("Nhap so phan tu cua mang (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri k: ");
    scanf("%d", &k);

    printf("Cac cap so co tong bang %d la:\n", k);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
