#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

unsigned long fact(unsigned char n)
{
    unsigned long factorial = 1;
    for(int i = 1; i <= n; ++i)
    {
     factorial *= i;
    }
   fact(n);
}


int main(){
unsigned char n = -2;
unsigned long k = fact(n);
printf("%lu", k);

return 0;
}

