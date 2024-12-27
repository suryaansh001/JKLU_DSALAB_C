//=========================================Lab3 q1======================





























//===================================LAB q3======================================
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int val;
    struct node* next;
} node;

node* createnode(int val) {
    node* new = (node*)malloc(sizeof(node));
    new->val = val;
    new->next = NULL;
    return new;
}

void display(node* ptr) {
    while(ptr != NULL) {
        printf("%d ", ptr->val);
        ptr = ptr->next;
    }
    printf("\n");
}

void insertBegin(node** head) {
    int val;
    printf("Enter value to insert at beginning: ");
    scanf("%d", &val);

    node* newnode = createnode(val);
    newnode->next = *head;
    *head = newnode;
}
void insertatend(struct node*head){
    struc
}

int main() {
    node* head = NULL;
    int choice;

    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Display list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                insertBegin(&head);
                break;
            case 2:
                printf("The linked list is: ");
                display(head);
                break;
            case 3:
                // Free memory before exiting
                while(head != NULL) {
                    node* temp = head;
                    head = head->next;
                    free(temp);
                }
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
//============================================end==============================