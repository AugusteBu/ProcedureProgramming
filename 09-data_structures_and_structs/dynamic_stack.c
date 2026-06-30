#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
typedef struct Stack
{
    int *p, size;
} Stack;
void initStack(Stack *stack)
{
    stack -> size = 0;
    stack -> p = malloc(stack -> size);
}
void printStack(Stack *stack)
{
    for(int i = 0; i < stack -> size; ++i)
        printf("%d ", *(stack->p));
}
int getStackSize(Stack *stack)
{
    return (stack -> size);
}
void push(Stack *stack, int value)
{
    stack -> p += stack -> size + 1;
    ++(stack -> size);
    *(stack -> p) = value;

}
int top(Stack *stack)
{
    if((stack -> p) == 0)
        return 0;
    else
        return *(stack -> p);
}
int pop(Stack *stack)
{
    int last_elmnt = top(stack);
    (stack -> p) -= stack -> size;
    --(stack -> size);
}
void destroyStack(Stack *stack)
{
    free(stack -> p);
}
int main()
{
    Stack stack;
    int value = 37;
    initStack(&stack);
    printStack(&stack);
    int returned_size = getStackSize(&stack);
    push(&stack, value);
    pop(&stack);
    destroyStack(&stack);
    return 0;
}
