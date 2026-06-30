#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define maxi 100000000


// 3. Vartotojas įveda tris neneigiamus sveikuosius skaičius (a, b, c). Programa turi atspausdinti c-ąjį skaičių fc, kur
//fc=fc-1+fc-2, o f0 = a ir f1 = b. Jei a=0 ir b=1, fc yra c-asis garsiosios Fibonačio sekos skaičius.


int main()
{
    int A[10000] = {0},c;
    bool too_large = 0;
    char Letter[3] = {'a','b','c'};
    printf("The program will calculate a whole, non-negative number (fc) using Fibonacci sequence\n(in which each number is the sum of the two preceding ones)\n");
    printf("The sequence will start from 0. First number will be a (f0), then b (f1) and c (fc)\n(if negative numebr are put in, please press \"enter\" to reenter the numbers!)\n");


    for(int i = 0; i < 3; ++i)
    {
        printf("Please enter %c:\n", Letter[i]);
        if(scanf("%8d", &A[i]) == 1 && getchar() == '\n' && A[i] >=0)
            printf("The number has been input successfully!\n");
        else
        {
            --i;
            printf("Invalid input! please enter a whole, non-negative number, that's not too high\n");
            while(getchar() != '\n');
        }
    }
    c = A [2];

//---------------------------------------------------------------

    for(int i = 2; i <=c; ++i)
    {
        A[i] = A [i - 1] + A[i - 2];
        if(A[i] > maxi && A[i] >=0)
        {
            too_large = 1;
            break;
        }
    }

//---------------------------------------------------------------

    if(too_large != 1)
        printf("\nfc is %d", A[c]);
    else
        printf("Sadly it is impossible to calculate as the numbers are too high!");


    return 0;
}
