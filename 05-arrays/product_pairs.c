#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 100000000
#define array_size 100000
#define error_msg printf("Invalid input! please reenter number(s)!\n");
int main()
{
    printf("This program need s and n\nFor the following n times you'll need to enter a number that will be put into array\nNon-positive numbers can't be entered, else you'll need to reenter a positive number\nIf 2 numbers multiplied equal s, it'll be printed:\n");
    double Array[array_size] = {0},s;
    int n, answer = 0;
repeat:
    printf("Enter s (if s is equal to 2 number multiplcation) and n (Array size):\n");
    if(scanf("%lf%d", &s, &n) == 2 && s < size && s > 0 && n > 0 && n < array_size)
    {
        for(int i = 0; i < n; ++i)
        {
            printf("Enter %d element of array:", i + 1);
            if(scanf("%lf", &Array[i]) == 1 && Array[i] >= 0 && Array[i] < size && getchar() == '\n')
                printf("The number has been input successfully!\n");
            else
            {
                while(getchar() != '\n');
                error_msg;
                --i;
            }
        }
        for(int i = 0; i < n - 1; ++i)
        {
            for(int j = i + 1; j < n; ++j)
            {
                if(Array[i] * Array[j] == s)
                {
                    printf("%.2lf * %.2lf = %.2lf\n", Array[i], Array[j], s);
                    ++answer;
                }
            }
        }
    }
    else
    {
        error_msg;
        goto repeat;
    }
    if(answer == 0)
        printf("There are no such numbers :(");


    return 0;
}
