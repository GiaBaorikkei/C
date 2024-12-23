#include <stdio.h>

// Ham sap xep chen (Insertion Sort)
void insertionSort(int arr[], int n, int ascending) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Phan tu can chen
        int j = i - 1;

        // Di chuyen cac phan tu lon hon/nh? hon key sang phai
        while (j >= 0 && ((ascending && arr[j] > key) || (!ascending && arr[j] < key))) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // Hien thi qua trinh chen
        printf("Buoc %d: ", i);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
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

    // Hien thi mang ban dau
    printf("Mang ban dau: ");
    printArray(arr, n);

    int choice;
    // Lua chon sap xep tang dan hoac giam dan
    printf("Nhap 1 de sap xep tang dan, 0 de sap xep giam dan: ");
    scanf("%d", &choice);

    // Goi ham sap xep chen
    insertionSort(arr, n, choice);

    // Hien thi mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}

