#include <stdio.h>

// Ham tim kiem nhi phan su dung de quy
int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        // Kiem tra neu phan tu o giua la phan tu can tim
        if (arr[mid] == target) {
            return mid; // Tra ve chi so cua phan tu
        }

        // Neu phan tu can tim nho hon phan tu o giua, tim trong nua trai
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }

        // Neu phan tu can tim lon hon phan tu o giua, tim trong nua phai
        return binarySearch(arr, mid + 1, right, target);
    }

    // Tra ve -1 neu khong tim thay
    return -1;
}

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Kiem tra neu so luong phan tu khong hop le
    if (n <= 0) {
        printf("Mang khong hop le.\n");
        return 0;
    }

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang (da sap xep tang dan):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    // Nhap phan tu can tim
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);

    // Goi ham tim kiem nhi phan
    int result = binarySearch(arr, 0, n - 1, target);

    // Kiem tra ket qua
    if (result != -1) {
        printf("Phan tu %d nam o vi tri: %d\n", target, result);
    } else {
        printf("Khong tim thay phan tu trong mang.\n");
    }

    return 0;
}

