#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define minim -2147483647
#define maxim 2147483647


// 2. Vartotojas įveda tris sveikus skaičius (a, b, c). Programa turi atspausdinti visus teigiamus sveikus skaičius iš
//intervalo (a; b], kurie dalijasi iš skaičiaus c su liekana 1.

int main()
{
    int Numbers[3] = {0};
    char Chars[3] = {'a','b','c'};
    printf("The program will ask you to input 3 integers.\nIt'll put out all positive integers between the bounds of (a; b] (a - first number input, b - second number input)\nwhich, when divided by c (third input number), the remainder will be 1");
    printf("\nPlease input three numbers (a, b and c)\n");

//---------------------------------------------------------------
//                          getting a, b and c
//---------------------------------------------------------------

  for(int i = 0 ; i < 3; ++i)
  {
       printf("%c: ", Chars[i]);
       if(scanf("%d", &Numbers[i]) == 1 && Numbers[i] > minim && Numbers[i] < maxim && getchar() == '\n')                              //would void be better? (idk how to return variables ngl)
    {
        printf("The numbers have been entered successfully!\n");
    }
    else
    {
        while(getchar() != '\n');
        printf("Invalid input please enter an integer!\n");
        --i;
    }
  }

//--------------------------------------------------------------

printf("\nAll numbers have been input successfully!\nNumbers which remainder is 1 when devided by %d (%d; %d]:\n", Numbers[2],Numbers[0],Numbers[1]);
int size = 0; //number of how many numbers will be output on screen
for(int i = Numbers[0] + 1; i <= Numbers[1]; ++i)
{
    if(i % Numbers[2] == 1)
    {
       printf("%d ", i);
       size++;
    }
}
if(size == 0)
{
    printf("There are no such numbers :(\n");
}

    return 0;
}
