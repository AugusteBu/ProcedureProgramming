#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg)
{
    int input;
    printf("%s\n", menuTitle);
    for(int i = 0; i < menuSize; ++i)
        printf("%s\n", menuOptions[i]);

    printf("%s\n", inputMsg);

    while(!(scanf("%d", &input) == 1 && input > 0 && input <= menuSize &&  getchar() == '\n'))
    {
        printf("%s\n", menuTitle);
        for(int i = 0; i < menuSize; ++i)
            printf("%s\n", menuOptions[i]);

        printf("%s\n", inputMsg);
        while(getchar() != '\n');
    }
    return input;
}

int main()
{

    char *menuTitle = "TITLE";
    char *menuOptions[] = {"option 1", "option 2", "3 Option", "fourth Option", "V option"};
    int menuSize = 5,number;
    char *inputMsg = "Put menu number: \n";
    number = showMenu(menuTitle, menuOptions, menuSize,inputMsg);

    return 0;
}
