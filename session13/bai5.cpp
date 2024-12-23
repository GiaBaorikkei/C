#include <stdio.h>
#include <stdbool.h>

// Ham sap xep noi bot (Bubble Sort) co cai tien
void bubbleSort(int arr[], int n, bool ascending) {
    int loopCount = 0; // Dem so lan lap
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                // Hoan doi hai phan tu
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // Tang so lan lap
        loopCount++;

        // Hien thi mang sau moi lan lap
        printf("Lan lap %d: ", loopCount);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        // Neu khong co hoan doi nao, dung lai
        if (!swapped) {
            break;
        }
    }

    printf("Sap xep hoan thanh sau %d lan lap.\n", loopCount);
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

    // Goi ham sap xep noi bot
    bubbleSort(arr, n, choice);

    // Hien thi mang sau khi sap xep
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}

