#include <stdio.h>

// Ham hoan doi hai gia tri
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Ham sap xep noi bot
void bubbleSort(int arr[], int n, int ascending) {
    int i, j;
    int swapped; // Bien kiem tra xem co hoan doi nao xay ra khong

    // Lap qua tung phan tu trong mang
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Khoi tao bien swapped cho vong lap moi

        // So sanh cac cap phan tu ke nhau
        for (j = 0; j < n - i - 1; j++) {
            // Kiem tra dieu kien sap xep tang dan hoac giam dan
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]); // Hoan doi neu khong dung thu tu
                swapped = 1; // Danh dau co hoan doi xay ra
            }
        }

        // Neu khong co hoan doi nao xay ra, dung vong lap
        if (!swapped) {
            break;
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

    // Goi ham sap xep noi bot
    bubbleSort(arr, n, choice);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}

