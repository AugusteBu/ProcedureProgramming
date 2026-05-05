#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
// Input number digits are calculated in ascending and descending orders and printed

    int skaicius, zenklas = 0, n;

    printf("Iveskite sveikaji skaiciu: ");
    scanf("%d", &skaicius);
//------------------------------------------------
    if(skaicius < 0)        //jei skaicius neigiamas    (if number is negative)
    {
        skaicius *= -1;
        zenklas = -1;
    }
//--------------------------------------------
    ///didejimo tvarka  (ascending)
    printf("Didejimo tvarka: \n");
    if(zenklas != 0)
        printf("-");

    for(int i = 0; i <= 9; i++)
    {
        n = skaicius;

        while(n > 0)
        {
            if(i == n % 10)
            {
                printf("%d", i);
                n /= 10;
            }
            else
                n /= 10;    // can be done without else since both if and else use the same mathematic equations
        }
    }
    printf("\n");
//--------------------------------------
    ///mazejimo tvarka (descending)
    printf("\nMazejimo tvarka: \n");
    if(zenklas != 0)
        printf("-");

    for(int i = 9; i >= 0; i--)
    {
        n = skaicius;
        while(n > 0)
        {
            if(i == n % 10)
            {
                printf("%d", i);
                n /= 10;
            }
            else
                n /= 10;
        }
    }
    return 0;
}
