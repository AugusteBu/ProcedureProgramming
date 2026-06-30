#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 6. Vartotojas įveda teigiamų skaičių seką, kurios pabaigą žymi pirma įvesta neteigiama reikšmė. Programa turi
//rasti, kuris skaičius tarp įvestųjų turi daugiausiai skaitmenų.

int main()
{

    /// pragrama neveikia nes bandant paversti is double i int neuzroundina skaiciu

    double Numbers[100000];
    long duplicate[100000];
    double long_duplicate;
    int n = -1, m = 0, size[10000] = {0},digits[10000], most_digits = 0, total[10000];
    printf("You'll need to put in a sequence of positive numbers (the end will be marked by a non-positive number)\nThe program will output a number which has the most digits\n");

    do
    {
        ++n;
        scanf("%d.%d", &Numbers[n]);
        if(Numbers[n] > 100000)
        {
            printf("Invalid input! The number is too big\n");
        }


    }
    while(Numbers[n] > 0);
    for(int i = 0; i<n; ++i)
        duplicate[i] = Numbers[i];

//-----------------------------------------------
//          user inputs numbers
//-----------------------------------------------

    int pow_function[100000];
    for(int i = 0; i < n; ++i)
    {
        while(duplicate[i] > 0)
        {
            duplicate[i] /= 10;

            size[i]++;

        }
        pow_function[i] = pow(10, (6 - size[i]));
    }

//-----------------------------------------------
//          counts digits before 
//-----------------------------------------------

    for(int i = 0; i < n; ++i)
    {

        long_duplicate = Numbers[i] * (pow_function[i]);

        total[i] = (int)long_duplicate+(1e-9);
        printf("%d ", total[i]);
        int zeros = 0;
        for(int j = 0; j < 8; j++)
        {
            int amount =  total[i] % 10;
            if(amount == 0)
            {
                zeros++;
            }
            else
                break;
            total[i] /= 10;
        }
        digits[i] = (8 - zeros);
    }
    int place = 0 ;
    most_digits = digits[0];
    for(int i = 1; i < n; ++i)
    {

        if(most_digits <  digits[i])
        {
            place = i;
            most_digits = digits[i];
        }
    }
    bool incorrect = 0;
    for(int i = 0; i <n; ++i)
    {
        for(int j=0; j<size[i]; ++j)
        {
            if(total[i] % 10 == ' ')
            {
                incorrect = 1;
                break;
            }
            total[i] /= 10;
        }
    }

    for(int i = 0; i < n; ++i)
        if(digits[i] == digits[place] && incorrect == 0)
            printf("The number in sequence with the most digits is %f with %d digit(s)\n", Numbers[i], digits[i]);
    if(place == -1)
        printf("The program doesn't work due to either incorrect input or numbers that are too big to calculate\n");

    return 0;
}
