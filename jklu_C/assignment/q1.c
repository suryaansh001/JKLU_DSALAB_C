#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct stack {
    int top;
    int max;
    int arr[MAX];
} stack;

stack init() {
    stack s;
    s.top = -1;
    s.max = MAX;
    for (int i = 0; i < MAX; i++) {
        s.arr[i] = -1; // initialize all stack values to -1 (empty)
    }
    return s;
}

int is_empty(stack* s) {
    return s->top == -1;
}

void push(stack* s, int val) {
    if (s->top < s->max - 1) {
        s->arr[++s->top] = val;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop(stack* s) {
    if (is_empty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped = s->arr[s->top];
    s->arr[s->top--] = -1;
    return popped;
}

void display(stack* s) {
    printf("Current stack: [");
    for (int i = 0; i < s->max; i++) {
        printf("%d,", s->arr[i]);
    }
    printf("]\n");
}

void pop_at_pos(stack* s, int pos) {
    if (pos < 0 || pos > s->top) {
        printf("Invalid position\n");
        return;
    }
    int popped = s->arr[pos];
    printf("Popped value at position %d: %d\n", pos, popped);
    s->arr[pos] = -1;
    
    // Shift elements to fill the gap after the pop
    for (int i = pos; i < s->top; i++) {
        s->arr[i] = s->arr[i + 1];
    }
    s->arr[s->top] = -1;
    s->top--;
}

void add_at_pos(stack* s, int val) {
    // Find the first empty slot (i.e., the first -1)
    for (int i = 0; i < s->max; i++) {
        if (s->arr[i] == -1) {
            s->arr[i] = val;
            s->top = (i > s->top) ? i : s->top; // Update top if necessary
            printf("Value %d added at position %d\n", val, i);
            return;
        }
    }
    printf("No available position to add value. Stack is full.\n");
}

int main() {
    int size;
    printf("Enter the maximum size of the stack: ");
    scanf("%d", &size);
    getchar();

    stack main_stack = init();
    main_stack.max = size;

    int input[MAX];
    int count = 0;

    printf("Enter initial values (space-separated): ");
    while (count < size && scanf("%d", &input[count]) == 1) {
        count++;
    }
    getchar();

    for (int i = 0; i < count; i++) {
        push(&main_stack, input[i]);
    }

    char choice;
    do {
        printf("Choose an operation:\n");
        printf("1. Remove value at position\n");
        printf("2. Add value at first available position\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1': {
                int pos;
                printf("Enter position to remove: ");
                scanf("%d", &pos);
                pop_at_pos(&main_stack, pos);
                break;
            }
            case '2': {
                int val;
                printf("Enter value to add: ");
                scanf("%d", &val);
                add_at_pos(&main_stack, val);
                break;
            }
            case '3':
                display(&main_stack);
                break;
            case '4':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != '4');

    return 0;
}
