#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;

}

int main(){
int a, b;
scanf("%8d %8d", &a, &b);
swap(&a, &b);


printf("%d %d", a, b);
return 0;
}
