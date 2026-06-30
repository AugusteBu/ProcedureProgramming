#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define min(a,b) (a < b? a: b)
#define max(a,b) (a > b? a: b)
#define max_size 2147483647

// 5. Vartotojas įveda skaičių n, o po to – n realiųjų skaičių. Programa turi suskaičiuoti šių skaičių sumą ir vidurkį,
//o taip pat mažiausią (minimumą) ir didžiausią (maksimumą) reikšmes.

int main()
{
    int n, i = 0;
    bool too_large = 0;
    double sum = 0, Numbers[99999], minim, maxim;
    printf("You'll need to enter a real number which will determine how big will be the sequence of numbers.\nThe program will find the sum, average, minimum and maximum numbers of the sequence\n");

//-----------------------------------------------

again:
    printf("Please enter how long should the sequence be:");
    if(scanf("%d", &n) == 1 && getchar() == '\n' && n < max_size && n > (-1 * max_size));
    else{
        while(getchar() != '\n');
        printf("Invalid input!\n");
        goto again;
    }
    while(i < n)
    {
        printf("Enter %d number: ", i + 1);
        if(scanf("%lf", &Numbers[i]) == 1 && getchar() == '\n' && n < max_size && n > (-1 * max_size))
        {
            printf("The number has been input successfully!\n");
            sum += Numbers[i];
            if(sum > max_size || sum < (-1 * max_size))
            {
                too_large = 1;
                break;
            }
            ++i;
        }

        else
        {
            while(getchar() != '\n');
            printf("Invalid input! Please enter a real number!\n");
        }

    }
    printf("The numbers have all been input successfully!\n");
    if(too_large != 1)
    printf("The sum of numbers: %.2lf\nThe average of all numbers is %.2lf\n", sum, sum/n);
    else
    printf("The sum could not be calculated due to numbers being either too high or too low\n");

//-------------------------------------------------------

minim = Numbers[0];
maxim =  Numbers[0];

    for(int i = 1; i < n; ++i)
    {
            minim = min(minim, Numbers[i]);
            maxim = max(Numbers[i], maxim);
    }
    printf("The maximum value in this sequence is %.2lf\nThe minimum value in this sequence is: %.2lf", maxim, minim);

    return 0;
}
