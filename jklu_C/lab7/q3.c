#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    stack s1;
    stack s2;
} ;

MaxStack initMaxStack() {
    MaxStack ms;
    ms.s1 = init();
    ms.s2 = init();
    return ms;
}

void pushMax(MaxStack *ms, int a) {
    push(&ms->s1, a);
    if (isEmpty(&ms->s2) || a >= top(&ms->s2)) {
        push(&ms->s2, a);
    }
}

int popMax(MaxStack *ms) {
    int topElement = pop(&ms->s1);
    if (topElement == top(&ms->s2)) {
        pop(&ms->s2);
    }
    return topElement;
}

int getMaximum(MaxStack *ms) {
    return top(&ms->s2);
}

int main() {
 return 0;
}


