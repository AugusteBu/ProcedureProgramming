#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define min_size 10
#define max_size 1000
#define reenter printf("Please write a new file name in which the number will be input (write .txt at the end):"); scanf("%s", new_file); FILE *my_file = fopen(new_file ,"a"); fclose(my_file); FILE *myfile = fopen(new_file ,"w"); printf("Write number to check its length:"); scanf("%s",new_number); fprintf(my_file, "%s", new_number);fclose(myfile);

int main()
{
        printf("This program will calculate length of the number input. It'll calculate all 0's and come symbol.  Please enter a real number with it's fraction part (if theres none just enter 0):\n\n");
    int skaicius1 = 0, skaicius2 = 0, length = 1, i = 0;
    char new_file[100000] = "in.txt", new_number[100000];
    while(i < 3)
    {

        ++i;
        FILE *myfile = fopen(new_file, "r");
        if(fscanf(myfile, "%d.%d", &skaicius1, &skaicius2) == 2)
        {
            fclose(myfile);
            if(skaicius1 >= min_size)
            {
                if((skaicius1 <= max_size && skaicius2 == 0) || (skaicius1 < max_size))
                {
                    if(skaicius2 < 1000)
                    {
                        while(skaicius1 > 0)
                        {
                            length++;
                            skaicius1 /= 10;
                        }
                        while(skaicius2 > 0)
                        {
                            length++;
                            skaicius2 /= 10;
                        }
                        printf("%d", length);
                        break;
                    }
                    else
                    {
                        printf("Invalid input! The fraction part of the number is too large, please enter a number who's fraction part is no larger than 3 digits\n");
                        reenter;
                    }
                }
                else
                {
                    printf("Invalid input! The number is too high! please enter a number lower than %d\n", max_size);
                    reenter;
                }
            }
            else
            {
                printf("Invalid input! The number is too low! Please enter a numebr higher than %d\n", min_size);
                reenter;
            }
        }
        else
        {
            printf("Invalid input! Letters detected! Please enter a number\n");
            reenter;
        }
    }
    return 0;
}
