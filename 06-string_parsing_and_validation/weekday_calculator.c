#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
int main()
{

    int year, month, day, day_of_the_week, i = 0;
    char week[999];
    while(i < 1)
    {
        printf("This program will find the day of the week by input date\nPlease put in a date (YYYY-MM-DD format):\n");
        if(scanf("%d-%d-%d", &year, &month, &day) == 3 && getchar() == '\n')
        {
            ++i;

            static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };                        //finds the index of weekday
            year -= month < 3;
            day_of_the_week =  (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day)% 7;

            FILE *myfile = fopen("week.txt", "r");      //opens file
            int j = 0;
            if (myfile == NULL)
                printf("File does not exist\n");
            else
            {
                while(j < day_of_the_week)
                {

                    fscanf(myfile, "%s", week);         //scans until the weekday

                    ++j;
                }
                printf("%s", week);
                 fclose(myfile);
            }

        }
        else
        {
            printf("Invalid input! The date was not netered in a YYYY-MM-DD format\n");
            while(getchar() != '\n');
        }
    }

    return 0;
}
