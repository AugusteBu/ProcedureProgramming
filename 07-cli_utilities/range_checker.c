#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int isInRange(int number, int low, int high)
{
    if(number >= low && number <= high)
        return true;
    return false;
}

int main(){
int number, low, high;

printf("Input number, low, high:");
scanf("%8d%8d%8d", &number, &low, &high);
bool in_range = isInRange(number, low, high);
printf("\n%d", in_range);

return 0;
}
