#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAXIM(a,b) (a>b? a:b)
#define MINIM(a,b) (a<b? a:b)
#define INT_MAX 100000000
#define INT_MIN -10000000

// 4. Vartotojas įveda tris natūraliuosius skaičius (a, b, c). Programa turi atspausdinti du skaičius – šių trijų skaičių
//didžiausią bendrąjį daliklį (DBD) bei mažiausiąjį bendrą kartotinį (MBK).


// GCD (Greatest Common Divisor) and LCM (Least Common Multiple) are calculated using the Euclidean algorithm and the relationship between GCD and LCM.

int main()
{
    int i = 0, Numbers[3], GCD, LCM;
    char Characters[] = {'a','b','c'};
    printf("The program will find greatest common divisor (GCD) and least common multiple (LCM) from numbers (a, b, c) input by the user\na, b and c are natural numbers\n");
 
//---------------------------------------------------------------

    while(i < 3)
    {
        printf("Please enter %c: ", Characters[i]);
        if(scanf("%6d", &Numbers[i]) == 1 && getchar() == '\n' && Numbers[i] > INT_MIN && Numbers[i] < INT_MAX)
        {
            printf("The number has been entered successfully!\n");    
            ++i;
        }
        else
        {
            while(getchar() != '\n');
            printf("enter a natural nunmber!\n");
        }
    }
    printf("Calculating GCD and LSM...\n\n");

//----------------------------------------------------------------------------
//         highest and lower number finding which will make counting easier
//-----------------------------------------------------------------------------

    int highest, middle,lowest;
    highest = MAXIM(MAXIM(Numbers[0], Numbers[1]), Numbers[2]);
    lowest = MINIM(MINIM(Numbers[0], Numbers[1]), Numbers[2]);
    if(highest != Numbers[0] && lowest != Numbers[0])
        middle = Numbers[0];
    else if(highest != Numbers[1] && lowest != Numbers[1])      //find second highest number for faster calculations
        middle = Numbers[1];
    else
        middle = Numbers[2];

//----------------------------------------------------------------------------
//                          GCD
//----------------------------------------------------------------------------

    for(i = highest; i >= 0; --i)
    {
        if(highest % i == 0 && middle % i == 0 && lowest % i == 0)
        {
            GCD = i;
            break;
        }
    }
    printf("greatest common diviser (GCD) of %d, %d and %d is: %d\n\n",Numbers[0], Numbers[1], Numbers[2], GCD);

//----------------------------------------------------------------------------
//                          LCM
//----------------------------------------------------------------------------

    i = highest;
    while(i % highest != 0 || i % middle != 0 || i % lowest || 0)
    {
        i += highest;
        if(i > INT_MAX)
        {
            i = -1;
            break;
        }
    }
    LCM = i;
    if(LCM != -1) //because LCM must always be postive
        printf("Least common multiple (LCM) of %d, %d and %d is: %d", Numbers[0], Numbers[1], Numbers[2],LCM);
    else
        printf("The LCM couldn't be calculated since the numbers were too high for the porgram too calculate :(");
    return 0;
}
