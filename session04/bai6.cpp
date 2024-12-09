#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node* createNode(int value) {
		
	Node *newNode = (Node*) malloc(sizeof(Node));
	// gan data cho Node
	newNode->data = value;
	// gan vi tri cho Node 
	newNode->next = NULL;
	return newNode;
}

// Them 1 phan tu vao dau list
void insertHead(Node** head, int value) {
	//Tao nut moi
	Node* newNode = createNode(value);
	// tro node moi den head
	newNode->next = *head;
	//cap nhat head tro den not moi
	*head = newNode;
}

// Xoa phan tu theo vi tri
void deleteAtPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("Danh sach\n");
        return;
    }

    Node* temp = *head;

    // xoa phan tu dau tien
    if (position == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Duyet den node truoc vi tri can xoa
    Node* prev = NULL;
    int index = 0;
    while (temp != NULL && index < position) {
        prev = temp;
        temp = temp->next;
        index++;
    }

    // N?u v? tr? kh?ng h?p l?
    if (temp == NULL) {
        printf("Vi tri khong hop le\n");
        return;
    }

    // Xoa node toi vi tri
    prev->next = temp->next;
    free(temp);
}

//duyet list
void printList(Node *head) {
	Node* temp = head;
	while(temp != NULL) {
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main() {
	
	Node* head = NULL;
	int n, pos;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int A[n];
	
	for(int i = 0; i < n; i++) {
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	
	for(int i = n - 1; i >= 0; i--) {
		insertHead(&head, A[i]);
	}
	
	printf("Danh sanh ban dau: ");
	printList(head);
	
	printf("Nhap vi tri can xoa: ");
	scanf("%d", &pos);
	deleteAtPosition(&head, pos);
	
	printf("Danh sach sau khi xoa: ");
	printList(head);
	
	return 0;
}
