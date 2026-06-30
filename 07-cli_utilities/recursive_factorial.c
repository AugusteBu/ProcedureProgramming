#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int getFactorial(int number, int factorial, int i)
{
    if(number >12 || number < 0)
        return 0;

        factorial *= i;
        if(i>=number)
          return factorial;
    ++i;
getFactorial(number, factorial,i);


}

int main(){
int number, factorial = 1,i = 1;
printf("Counting factorial\n");
scanf("%8d", &number);
factorial = getFactorial(number, factorial,i);
printf(factorial == 0? "factorial could not be calculated":"Number %d factorial is %d", number,factorial);



return 0;
}
