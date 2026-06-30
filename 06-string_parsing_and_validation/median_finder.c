#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define min_double -10000000000000
#define max_double 1.7E+308
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)

int main()
{
    double a,b,c, mid,maxi,mini;
printf("This program fill print a middle numebr by value into a file called middle_value.txt:\n");
    FILE *myfile = fopen("trecias.txt", "r");
    if(fscanf(myfile, "%lf;%lf;%lf", &a, &b, &c) == 3)
    {
        fclose(myfile);
        if(a > min_double && b > min_double && c > min_double)
        {
            if(a < max_double && b < max_double && c < max_double)
            {
                maxi = mini = a;
                maxi = max(max(maxi,b),max(maxi,c));
                mini = min(min(mini,b),min(mini,c));
                if(a != maxi && a !=mini)
                    mid = a;
                else if(b != maxi && b != mini)
                    mid = b;
                else
                    mid = c;
                    FILE *myfile = fopen("middle_value.txt", "a");
                    FILE *myfile1 = fopen("middle_value.txt", "w");
                    fprintf(myfile1,"%.2lf", mid);
                    fclose(myfile);
                    fclose(myfile1);

            }
            else
                printf("Invalid input! At least one of the numbers is too high to be calculated\n");

        }
        else
            printf("Invalid input! At least one of the numbers is too low to be calculated\n");

    }
    else
    {
        printf("Invalid input! Please enter a whole number\n");
    }



    return 0;
}
