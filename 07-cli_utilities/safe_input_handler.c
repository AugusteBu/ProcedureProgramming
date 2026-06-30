#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

 int getPositiveNumber(char *msg)
{
    int input;
      printf("%s", msg);
    while(!(scanf("%8d", &input) == 1 && getchar() == '\n'))
    {
        printf("%s", msg);
        while(getchar() != '\n');
    }

    return input;
}

int main(){
char *msg = "Put in number?\n";
int number;
number = getPositiveNumber(msg);



return 0;
}
