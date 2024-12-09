#include<stdio.h>
#include<stdlib.h>

// dinh nghia mot Node
typedef struct Node {
	int data; //phan du lieu cua node
	struct Node* node; //con tro tro den node tiep theo
} Node;

// tao 1 Node
Node* createNode(int value) {
	//cap nhat bo nho
	Node* newMode = (Node*) malloc(sizeof(Node));
	
	// gan data cho Node	
	newMode->data = value;
	
	//gan phan link
	newMode->next = NULL;
	return newMode;
}

//them phan tu vao dau list
void insertAtHead(Mode** head, int value){
	//tao not moi
	Node* newNode = createMode(value);
	
	//tro node moi den head
	newMode->next = *head;
	
	//cap nhat phan head tro den node moi
	*head = newMode;
}

// duyet list - khi lay ra de su dung thi *, khi can thay doi thi dung **
void printList(Node* head){
	Node* temp = head;
	while(temp != NULL){
		printf("%d-->NULL", temp->data);
		temp = temp->next;
	}
}
int main(){
	Node* head  = NULL;
	// them 1 phan tu vao dau danh sach
	printf("moi ban nhap vao phan tu dau");
	int value;
	scanf("%d", &value);
	insertAtHead(&head, value);
	//in ra
	printf("Danh sach ne \n");
	printList(head);
	do{
		printf("=============================Menu=============================\n");
		printf("1. Them 1 phan tu vao dau: ");
		printf("2. Xem danh sach");
		printf("3. Thoat");
		printf("Moi ban chon tu 1 -> 3");
	}
	return 0;
}




























	
