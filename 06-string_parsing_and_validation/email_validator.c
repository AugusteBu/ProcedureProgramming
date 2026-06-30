#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define size 50
int main()
{
// Laikykite, kad jis korektiškas, jei
//eilutėje yra vienas simbolis @ ir (po jo) bent vienas taškas, o prieš @, po taško ir tarp šių dviejų simbolių – ne mažiau nei
//vienas kitoks simbolis. Jei įvestis korektiška, programa turi atspausdinti domeną, t.y. el.pašto dalį po simbolio @. Visi kada
//nors pateikti korektiški elektroninio pašto adresai turi būti kaupiami (append) tekstiniame faile “emails.txt”.
    char gmail[size];
    int until_symbol1 = 0, until_symbol2, symb1, symb2 = 0, length, correct = 0;
    printf("This program will check if a gmail adress has been written. It'll print the part of gmail after '@' and will save the other part in a file \"emails.txt\"\n");
    printf("Please enter gmail adress:\n");
    do
    {
        do
        {
            symb1 = 0;
            length = 0;
            fgets(gmail, size, stdin);
            for(int i = 0; gmail[i] != '\n'; ++i)
            {

                if(gmail[i] == '@')
                {
                    symb1++;
                    until_symbol1 = i;
                }

            }
            symb1 == 1? length = until_symbol1: printf(symb1 > 1? "Invalid input! There are more than 1 @ entered. Please reenter the gmail adress\n": "Invalid gmail adress! there are no @. Please reenter a valid gmail adress:\n");
        }
        while(symb1 != 1);
        symb2 = 0;

        for(int i = until_symbol1 + 1; gmail[i] != '\n'; ++i)
        {

            if(gmail[i] == '.')
            {
                symb2++;
                until_symbol2 = i;
            }
            ++length;
        }
        if(symb2 != 0)
        {
            if(until_symbol1 > 0 && until_symbol2 - until_symbol1 > 1 && length - until_symbol2 > 0)
            {
                printf("Email adress has been successfully entered!\n");
                correct = 1;
                for(int i = until_symbol1 + 1; i <= length; ++i)
                {
                    printf("%c", gmail[i]);
                }
                printf("\n");
                FILE *myfile = fopen("emails.txt", "w");
                for(int i = 0; i < until_symbol1; ++i)
                    fprintf(myfile, "%c", gmail[i]);
                fclose(myfile);
            }
            else
            printf("Invalid input. There are no symbols before, after or inbetween @ and . Please reenter a valid gmail adress\n");

        }
        else
            printf("Invalid input! There are no . entered after @. Please reenter the gmail adress\n");
    }
    while(correct != 1);
    return 0;
}
