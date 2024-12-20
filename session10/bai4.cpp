#include <stdio.h>
#include <stdlib.h>

// Dinh nghia mot nut trong danh sach lien ket
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Dinh nghia hang doi
typedef struct {
    Node *front; // Phan tu dau hang doi
    Node *rear;  // Phan tu cuoi hang doi
} Queue;

// Khoi tao hang doi
void initQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

// Kiem tra hang doi co rong khong
int isEmpty(Queue *q) {
    return q->front == NULL;
}

// Them phan tu vao hang doi
void enqueue(Queue *q, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("Khong du bo nho!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("Da them %d vao hang doi.\n", value);
}

// Xoa phan tu khoi hang doi
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Hang doi rong!\n");
        return -1;
    }
    Node *temp = q->front;
    int value = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL; // Hang doi tro lai trang thai cu
    }
    free(temp);
    return value;
}

// Xem phan tu dau hang doi
int peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Hang doi rong!\n");
        return -1;
    }
    return q->front->data;
}

int main() {
    Queue q;
    initQueue(&q);

    int n;
    printf("Nhap so luong phan tu muon them vao: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int value;
        printf("Nhap gia tri cua phan tu thu %d: ", i + 1);
        scanf("%d", &value);
        enqueue(&q, value);
    }

    printf("\nPhan tu dau hang doi: %d\n", peek(&q));

    printf("\nXoa phan tu khoi hang doi: %d\n", dequeue(&q));
    printf("Phan tu dau hang doi sau khi xoa: %d\n", peek(&q));

    return 0;
}

