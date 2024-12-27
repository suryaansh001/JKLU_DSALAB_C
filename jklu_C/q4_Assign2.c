#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

Stack init() {
    Stack s;
    s.top = -1;
    return s;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[(s->top)--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        return -1;
    }
    return s->data[s->top];
}

void calculateSpan(Stack *s, int price, int arr[], int index) {
    int count = 1;
    int temp = s->top;

    while (temp != -1 && s->data[temp] <= price) {
        count++;
        temp--;
    }

    push(s, price);
    arr[index] = count;
}

void displaySpans(int arr[], int size) {
    printf("Span Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    Stack s = init();

    int arr[MAX];
    int prices[MAX];
    int choice, price, count = 0;

    do {
        printf("\nMenu:\n");
        printf("1. Push stock price\n");
        printf("2. Display spans\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter stock price: ");
                scanf("%d", &price);
                prices[count] = price;
                calculateSpan(&s, price, arr, count);
                count++;
                break;
            case 2:
                displaySpans(arr, count);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
