#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == x) {
        return mid;
    }
    if (arr[mid] > x) {
        return binarySearch(arr, left, mid - 1, x);
    }
    return binarySearch(arr, mid + 1, right, x);
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap c?c phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tr? %d\n", x, result);
    } else {
        printf("Kh?ng tim thay phan tu %d trong mang\n", x);
    }

    return 0;
}
