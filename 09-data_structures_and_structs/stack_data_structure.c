#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
typedef struct Point
{
    double x, y;
} Point;
typedef struct Stack
{
    Point *p;
    int size;
} Stack;
void initStack(Stack *stack)
{
    stack -> size = 0;
    stack -> p = malloc(stack -> size);
}
Point createPoint(double x, double y)
{
    Point coordinates = {x, y};
    return coordinates;
}
///-------------------------------------------
/// doesnt work here
void printStack(Stack *stack)
{
    stack -> size = 5;
    stack -> p = malloc(stack -> size);
    for(int i = 0; i < stack -> size; ++i)  //prisikiria reiksmes
    {
        *(stack -> p) = createPoint(i*2, i*-2);
        printf("%lf %lf\n", (stack -> p));      //printing to see what numbers i get
        ++(stack -> p);                          ///  <-  neveikia del sitos eilutes (istrynus veikia), o kitose eilutese toks pats veikia
    }                                                ///vietoj rodykliu naudojant masyvus taip pat neveikia
    (stack -> p) -= (stack -> size);
    for(int i = 0; i < stack -> size; ++i)      ///spausdina gautas reiksmes, bet jei butu tsg 1 didelis ciklas vis tiek neveikia
    {
        printf("P   %lf %lf\n", (stack->p->x), (stack ->p->y));     //printing to see if correct numbers are put
        ++(stack -> p);
    }
}
///--------------------------------------------------
int getStackSize(Stack *stack)
{
    return (stack -> size);
}
void push(Stack *stack, Point value)
{
    stack -> p += stack -> size + 1;
    ++(stack -> size);
    ++(stack -> p);
    *(stack -> p)  = value;

}
Point top(Stack *stack)
{
    if(stack -> p -> x != 0 && stack -> p -> y != 0)
        return *(stack -> p);
    else
    {
        Point nothing;
        nothing.x = 0;
        nothing.y = 0;
        return nothing;
    }

}
int pop(Stack *stack)
{
    Point last_elmnt = top(stack);
    (stack -> p) -= stack -> size;
    --(stack -> size);
}
void destroyStack(Stack *stack)
{
    free(stack);
}
int main()
{
    Stack stack;
    Point value;
    value.x = 52;
    value.y = -2;
    initStack(&stack);
    printStack(&stack);
    int returned_size = getStackSize(&stack);
    push(&stack, value);
    pop(&stack);
    destroyStack(&stack);
    return 0;
}
