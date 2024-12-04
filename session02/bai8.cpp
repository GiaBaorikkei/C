#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int arr[n - 1];
    printf("Nhap cac phan tu cua mang (tu 1 den n):\n");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum = n * (n + 1) / 2;

    int actual_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        actual_sum += arr[i];
    }

    int missing_number = total_sum - actual_sum;

    printf("So bi thieu la: %d\n", missing_number);

    return 0;
}
