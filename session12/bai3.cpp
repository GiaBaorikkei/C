#include <stdio.h>

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiem tra neu khong co phan tu
    if (n <= 0) {
        printf("Mang khong co phan tu doi xung\n");
        return 0;
    }

    int arr[n];
    // Nhap cac phan tu cho mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Kiem tra va in ra cac phan tu doi xung
    int hasSymmetry = 0; 
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - 1 - i]);
            hasSymmetry = 1;
        }
    }

    // Neu khong co cap doi xung
    if (!hasSymmetry) {
        printf("Khong co phan tu doi xung trong mang.\n");
    }

    return 0;
}

