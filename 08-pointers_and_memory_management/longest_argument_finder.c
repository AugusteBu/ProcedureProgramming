#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define size 256
char *counting_bytes(int argc, char *argv[], int largest)
{
    char *largestName = malloc(size);
    if(largestName == NULL || argc == 1)
        return NULL;
    largest = strlen(argv[1]);
    strcpy(largestName, argv[1]);
    for(int i = 1; i < argc; ++i)
    {
        if(largest < strlen(argv[i]))
        {
            largest = strlen(argv[i]);
            strcpy(largestName, argv[i]);
        }
    }
    return largestName;
}

int main(int argc, char *argv[])
{
    int largest;
    char *ptr_largest_name = counting_bytes(argc, argv, largest);
    if (ptr_largest_name != NULL)
    {
        printf("%s ", ptr_largest_name);
    }
    else
    {
        printf("There are no names");
    }
    return 0;
}

