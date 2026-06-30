#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>


int splitData(int First[], int full_size, int first_size, int **Ptr1, int **Ptr2)
{
    if(First == 0 || full_size == 0 || first_size > full_size)
        return -1;

    *Ptr1 = malloc(first_size);
    int n = full_size - first_size;
    *Ptr2 = malloc(n);
    if(Ptr1 == NULL || Ptr2 == NULL)
        return -1;
    for(int i = 0; i < first_size; ++i)
    {
        Ptr1[i] = First[i];
    }
    for(int i = 0; i < n; ++i)
    {
        Ptr2[i] = First[i + first_size];
    }
    return 0;
}


int main()
{
    int First[] = {38,3,2,4,5,7,6,8,10,52,48}, full_size = 11, first_size = 6, *Ptr1, *Ptr2;
   int work =  splitData(First, full_size, first_size, &Ptr1,&Ptr2);
    if(work == 0)
printf("%d %d\n", Ptr1, Ptr2);


    return 0;
}
