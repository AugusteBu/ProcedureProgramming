#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 21
int main()
{
    unsigned long long int Positive_number, factorial = 1;
    int n = 0;
    printf("This program will calculate the factorial of input number\nPlease enter one positive number:\n");
    while(n < 1)
    {
        if(scanf("%3llu", &Positive_number) == 1)
        {
            if(Positive_number > 0)
            {
                if(getchar() == '\n')
                {
                    if(Positive_number < size)
                    {
                        for(int i = 1; i <= Positive_number; ++i)
                        {
                            factorial *= i;

                        }
                        ++n;
                        FILE *myfile = fopen("out.txt", "w");
                        printf("The number has been entered successfully!\n%d factorial is: ", Positive_number);
                        printf("%llu", factorial);
                        fprintf(myfile, "%llu", factorial);
                        fclose(myfile);
                    }
                    else
                    {
                        printf("The number is too large to calculate the factorial! Please reenter a smaller positive number\n");
                    }
                }
                else
                {
                    while(getchar() != '\n');
                    printf("Invalid input! Symbols detected! Please reenter a positive number without any symbols!\n");
                }
            }
            else
            {
                printf("Invalid input! A non-positive number has been entered! Please reenter one positive number\n");
            }
        }
        else
        {
            while(getchar() != '\n');
            printf("Invalid input! Letters detected! Please reenter one positive number\n");
        }
    }
    return 0;
}
