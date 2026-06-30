#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
int createArray(int size, int low, int high)
{
    int *Array = malloc(size);

    if(Array == NULL)               // if NULL in array
        return 0;

    srand(time(NULL));              //generates according to time

    for(int i = 0; i < size; ++i)
    {
         *Array = rand() % (high - low + 1) + low;
         *(++Array);
    }
    Array -= size;
    return *Array;
}
//---------------------------------------
int main()
{
    int size, low, high;
    scanf("%d%d%d", &size,&low,&high);
    int first_element = createArray(size,low,high);
     printf("\n%d", first_element);

    return 0;
}
