#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define array_size 10000

void generateArray(int data[], int *size, int *low, int *high)
{
    for(int i = 0; i < *size; ++i)
        data[i] = rand()%(*high - *low + 1) + *low;
}


int main()
{
    int data[array_size] = {0}, size, low, high;
    srand(time(0));
    printf("Input size, low, high:\n");
    scanf("%d%d%d", &size, &low, &high);
    generateArray(data, &size, &low, &high);
    printf("\n\n\n");
    for(int i = 0; i < size; ++i)
        printf("%d ",data[i]);
    return 0;
}
