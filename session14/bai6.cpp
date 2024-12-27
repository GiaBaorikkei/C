#include <stdio.h>

// Ham sap xep Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Di chuyen cac phan tu lon hon Key vè phia sau
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Ham tim kiem tuyen tinh
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i; // Tra ve vi tri tim thay
    }
    return -1; // Khong tim thay
}

// Ham tim kiem nhi phan
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Kiem tra phan tu giua
        if (arr[mid] == x)
            return mid;

        // Neu x nho hon, bo qua nua phai
        if (arr[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1; // Khong tim thay
}

int main() {
    int n;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // In mang ban dau
    printf("\nMang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Sap xep mang bang Insertion Sort
    insertionSort(arr, n);

    // In mang sau khi sap xep
    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int x;
    // Nhap gia tri can tim
    printf("\n\nNhap gia tri can tim: ");
    scanf("%d", &x);

    // Tim kiem tuyen tinh
    int linearResult = linearSearch(arr, n, x);
    if (linearResult != -1)
        printf("\nTim kiem tuyen tinh: Tim thay %d tai vi tri %d (mang chua sap xep)", x, linearResult);
    else
        printf("\nTim kiem tuyen tinh: Khong tim thay %d trong mang", x);

    // Tim kiem nhi phan
    int binaryResult = binarySearch(arr, 0, n - 1, x);
    if (binaryResult != -1)
        printf("\nTim kiem nhi phan: Tim thay %d tai vi tri %d (mang chua sap xep)", x, binaryResult);
    else
        printf("\nTim kiem nhi phan: Khong tim thay %d trong mang\n", x);

    return 0;
}

