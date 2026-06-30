#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// 1. Vartotojas įveda tris sveikus skaičius (a, b, c). Programa turi atspausdinti kvadratinės lygties ax2+bx+c=0
//sprendinių skaičių ir, jei sprendinių yra, jų reikšmes

int main()
{
    char coefficient[] = {'a', 'b', 'c'};
    int  i = 0, num[3], discriminant;
    printf("This program will calculate quadratic equations (ax^2 + bx + c = 0) discriminant, number of solutions and their value\nPut in three integers\n");

//----------------------------------------------------------------          
//                          getting coefficients from user
//----------------------------------------------------------------

    while(i < 3)
    {
        printf("%c:", coefficient[i]);
        if(scanf("%8d", &num[i]) == 1 && num[i] >-1000000 && num[i] < 10000000 && getchar() == '\n')
        {
            printf("The number has been entered successfully!\n");
            ++i;
        }
        else
        {
            while(getchar() != '\n');
            printf("Invalid input please enter an integer!\n");
        }
    }

//----------------------------------------------------------------
//                      counting discriminant
//----------------------------------------------------------------

    discriminant = pow(num[1],2) - 4 * num[0] * num[2];
    if(sqrt(num[1] > sqrt(2147372400)) || num[1] < ((-1) * sqrt(2147372400)))
    {
        printf("The numbers entered are too high to calculate the discriminant\n");
        discriminant = -1;
    }
    else
    {
        printf("\nThe discriminant is %d\n", discriminant);
        printf("There will be ");
        if(discriminant > 0)
            printf("%d",2);
        else if(discriminant == 0)
            printf("%d",1);
        else
            printf("no");
        printf(" solutions\n");
    }

//----------------------------------------------------------------
//                      counting solutions
//----------------------------------------------------------------
    if (discriminant > 0)
    {
        printf("First solutions answer: %.2lf\n",((-1.00) * num[1] + sqrt(discriminant)) / (2 * num[0]));
        printf("Second solutions answer: %.2lf\n",((-1.00) * num[1] - sqrt(discriminant)) / (2 * num[0]));
    }
    else if(discriminant == 0)
    {
        printf("The solutions answer: %.2lf\n",(-1.00) * num[1] / (2 * num[0]));
    }

    return 0;
}

