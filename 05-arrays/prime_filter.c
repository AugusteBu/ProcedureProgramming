#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define size 2147483647


//Parašykite programą, kuri leidžia vesti ir įsimena vartotojo vedamus teigiamus skaičius iki tol, kol jis įveda pirmą
//neteigiamą reikšmę. Programa turi atspausdinti visus įvestus pirminius skaičius, kiekvieną pirminį skaičių spausdindama
//tik vieną kartą, t. y. išvedant rezultatus sykį jau atspausdinta pirminio skaičiaus reikšmė nebekartojama.

int main()
{
    int Array[10000] = {0}, i = -1; // i is array size
//----------------------------------
    printf("The program will print all prime numbers entered by the user. It won't print same prime number more than once\nPlease enter numbers to check if it's a prime number (to end the program, enter a non-positive numebr):\n");
    do
    {
        ++i;
        if(scanf("%8d", &Array[i]) == 1  && Array[i] > (size * -1) && Array[i] < size && getchar() == '\n')
        {
            printf("The number has been entered successfully!\n");

        }
        else
        {
            --i;
            printf("Invalid input! Please reenter a number!\n");
            while(getchar() != '\n');

        }

    }
    while(Array[i] >= 0);

//---------------------------------------------------------

    for(int j = 0; j < i; ++j)
    {
        int prime = 0;
        for(int k = 1; k <= Array[j]; ++k)
        {
            if(Array[j] % k == 0)
                ++prime;
        }
        if(prime != 2)
        {
            for(int k = j; k < i; ++k)
            {
                Array[k] = Array[k + 1];
            }
            --i;
            --j;
        }

    }
    printf("There are %d prime numbers:\n ",i);
    printf("Prime numbers:\n");
    for(int j = 0; j < i; ++j)
    {
        for(int k = j + 1; k < i; ++k)
        {
            if(Array[j] == Array[k])
            {
                for(int p = k; p < i-1; p++)
                {
                    Array[p] = Array[p + 1];
                }
                --i;
                --k;
            }
        }

        printf("%d ", Array[j]);
    }
    return 0;
}
