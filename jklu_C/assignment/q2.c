#include <stdio.h>
#include <stdlib.h>

typedef struct node {
 int data;
 struct node* next;
} node;

node* createNode(int data) {
 node* newNode = (node*)malloc(sizeof(node));
 if (newNode == NULL) {
 printf("Memory allocation failed\n");
 exit(1);
 }
 newNode->data = data;

 newNode->next = NULL;
 return newNode;
}

node* insertAtBeginning(node* head, int data) {
 node* newNode = createNode(data);
 newNode->next = head;
 return newNode; 
}

node* insertNodeAtEnd(node* head, int data) {
 node* newNode = createNode(data);
 if (head == NULL) {
 return newNode; 
 }

 node* temp = head;
 while (temp->next != NULL) {
 temp = temp->next; 
 }
 temp->next = newNode; 
 return head; 
}

void printList(node* head) {
 node* current = head;
 while (current != NULL) {
 printf("%d -> ", current->data);
 current = current->next;
 }
 printf("NULL\n");
}
// Main function
int main() {
 node* head = NULL; 
 int data;
 while (1) {
 printf("ENTER 1 FOR AMBULANCE AND 0 FOR NORMAL bvehicle: ");
 scanf("%d", &data);
 if (data == 1)
 {
 head = insertAtBeginning(head, data);
 }
 else if (data == 0)
 {
 head = insertNodeAtEnd(head, data); 
 }
 else
 {
 break;
 }
 printList(head); 
 }

 return 0;
}