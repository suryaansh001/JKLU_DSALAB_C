// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node {
//     int row;
//     int col;
//     int value;
//     struct node* next;
// } node;

// // Function to create a new node
// node* creation(int row, int col, int val) {
//     node* newnode = (node*)malloc(sizeof(node));
//     newnode->row = row;
//     newnode->col = col;
//     newnode->value = val;
//     newnode->next = NULL;
//     return newnode;
// }

// // Function to insert a node at the start of the linked list
// void insertstart(int row, int col, int val, node** head) {
//     node* new = (node*)malloc(sizeof(node));
//     new->row = row;
//     new->col = col;
//     new->value = val;
//     new->next = *head;  // Point to the previous head
//     *head = new;        // Update head to the new node
// }

// // Function to display the linked list
// void display(node* head) {
//     node* temp = head;
//     while (temp != NULL) {
//         printf("Row: %d, Col: %d, Value: %d\n", temp->row, temp->col, temp->value);
//         temp = temp->next;
//     }
// }

// int main() {
//     node* head = NULL;  // Start with an empty list
    
//     // Insert nodes at the beginning
//     insertstart(1, 1, 10, &head);  // Insert at start (row: 1, col: 1, value: 10)
//     insertstart(2, 2, 20, &head);  // Insert at start (row: 2, col: 2, value: 20)
//     insertstart(3, 3, 30, &head);  // Insert at start (row: 3, col: 3, value: 30)

//     // Display the linked list
//     printf("Linked list contents:\n");
//     display(head);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// typedef struct stack {
//     int data[100]; // Assuming the stack will hold a maximum of 100 elements
//     int top;
// } stack;

// // Function to initialize the stack
// stack init() {
//     stack S;
//     S.top = -1;  // Stack is empty initially
//     return S;
// }

// void push(stack* s,int val){
//     s->data[++(s->top)]=val;
    

    
// }
// void pop(stack *s){
//     if(s->top=-1){
//         printf("nothingtopop");
//     }
//     else{
//         int ele;
//         ele=s->data[s->top];
//         printf("popped %d",ele);
//         s->top--;

//     }
// }
// void display(stack* s){
//     while (!isEmpty(s))
//     {
//         /* code */
//         printf('')
//     }
    
// }
// void checkBalanced(stack* s){
//     while(!isEmpty(s)){
//         char ele=s->data[s->top];
//         s->top--;
//         if (ele=='(' && s->data[s->top]==')'){
//             printf("balanced");
//         }
//         else{
//             s->top--;
//         }
//     }
// }


void en