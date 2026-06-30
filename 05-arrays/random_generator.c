#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define CAPACITY 1000
#define size 2147483647

int main()
{
    int a,b,c, A[CAPACITY] = {0};

    printf("This program will generate random numbers from interval [a; b]\nThere will be c amount of random generated numbers\nPlease input a, b and c:\n");
again1:
    if(scanf("%8d%8d%8d", &a, &b,&c) == 3 && b >= a && a > (-1 * size) && a < size && b > (-1 * size) && b < size && c > 0 && c <= CAPACITY && getchar() == '\n')
    {
        srand(time(NULL));
        printf("The numbers have been input successfully!\n%d Random generated numebrs [%d; %d]\n", c,a,b);
        for(int i = 0; i < c; ++i)
        {
            A[i] = (rand() % (b - a + 1)) + a;
            printf("%d ", A[i]);
        }
    }
    else
    {
        printf("There has been invalid input! Please reenter all numebrs!\n");
        goto again1;
    }

    return 0;
}
