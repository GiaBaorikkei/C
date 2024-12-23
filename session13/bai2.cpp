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
            printf("Hoan doi: %d va %d\n", arr[i], arr[minOrMaxIdx]); // Hien thi qua trinh hoan doi
            swap(&arr[i], &arr[minOrMaxIdx]);
        }
    }
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

    // In mang truoc khi sap xep
    printf("Mang truoc khi sap xep: ");
    printArray(arr, n);

    int choice;
    // Lua chon sap xep tang dan hoac giam dan
    printf("Nhap 1 de sap xep tang dan, 0 de sap xep giam dan: ");
    scanf("%d", &choice);

    // Goi ham sap xep chon
    selectionSort(arr, n, choice);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}

