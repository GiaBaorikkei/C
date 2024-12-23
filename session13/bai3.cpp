#include <stdio.h>

// Ham hoan doi hai gia tri
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ham sap xep chon
void selectionSort(int arr[], int n, int ascending) {
    int i, j, minOrMaxIdx;

    // Lap qua tung phan tu cua mang
    for (i = 0; i < n - 1; i++) {
        minOrMaxIdx = i; // Gia su phan tu hien tai la nho nhat/lon nhat

        // Tim phan tu nho nhat/lon nhat trong mang con lai
        for (j = i + 1; j < n; j++) {
            if ((ascending && arr[j] < arr[minOrMaxIdx]) || (!ascending && arr[j] > arr[minOrMaxIdx])) {
                minOrMaxIdx = j;
            }
        }

        // Hoan doi neu can thiet
        if (minOrMaxIdx != i) {
            swap(&arr[i], &arr[minOrMaxIdx]);
        }
    }
}

// Ham tim kiem nhi phan
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Neu tim thay phan tu
        if (arr[mid] == x) {
            return mid;
        }

        // Neu x lon hon, bo qua nua trai
        if (arr[mid] < x) {
            left = mid + 1;
        } else { // Neu x nho hon, bo qua nua phai
            right = mid - 1;
        }
    }

    return -1; // Khong tim thay phan tu
}

// Ham in mang
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    // Lua chon sap xep tang dan hoac giam dan
    printf("Nhap 1 de sap xep tang dan, 0 de sap xep giam dan: ");
    scanf("%d", &choice);

    // Goi ham sap xep chon
    selectionSort(arr, n, choice);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    int x;
    // Nhap phan tu can tim
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Tim kiem phan tu trong mang
    int result = binarySearch(arr, n, x);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, result + 1);
    } else {
        printf("Khong tim thay phan tu %d\n", x);
    }

    return 0;
}

