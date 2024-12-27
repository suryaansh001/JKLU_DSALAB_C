#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
typedef struct 
{
    int arr [MAX];
    int top;
}stack;

stack init()
{
    stack s;
    s.top = -1;
    return s;
}

int isEmpty(stack * ps)
{
    return (ps->top ==-1);
}

int isFull(stack * ps)
{
    return(ps->top ==MAX-1);
}

int top(stack * ps)
{
    if(isEmpty(ps))
    {
        printf("\nStack is empty");
        return 0;
    }   
return ps->arr[ps->top];
}
void printStack(stack *s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}


void push(stack * ps , int a)
{
    if(isFull(ps))
    {
        printf("\nno space: will overflow");
    }
    else
    {
        ps->top = ps->top+1;
        ps->arr[ps->top] = a;
    }
}

int pop(stack * ps)
{
    if(isEmpty(ps))
    {
        printf("\nno element: will underflow");
        return -1;
    }
    int ele = ps->arr[ps->top];
    ps->top --;
    return ele;
}



void tempcopy(stack *s, stack *d) {
    stack temp = init();
    
    while (!isEmpty(s)) {
        int ele = pop(s);
        push(&temp, ele);
        
    }
    
    while (!isEmpty(&temp)) {
        push(d, pop(&temp));
    }

}
void copyrecursion(stack* s,stack*p){
  if (isEmpty(s)){
    return;
  }
   int ele = pop(s);
    push(p, ele);
    copyrecursion(s, p);
  
}


int main() {
    stack s1 = init();
    stack s2 = init();

    push(&s1, 1);
    push(&s1, 2);
    push(&s1, 3);
    
    tempcopy(&s1, &s2);
    
    printf("Original stack: ");
    printStack(&s1);
    
    printf("Copied stack: ");
    printStack(&s2);
    
    return 0;
}




