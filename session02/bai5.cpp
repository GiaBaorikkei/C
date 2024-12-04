#include <stdio.h>

int main() {
    int n, k;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap phan tu can xoa: ");
    scanf("%d", &k);

    int found = 0;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Mang sau khi xoa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay phan tu can xoa.\n");
    }

    return 0;
}
