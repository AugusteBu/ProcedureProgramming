#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){

int i, j, s = 0;
for(i = 0, j = 1; i++ < 4; s += ++i + j--)
    ;
printf("%d",s);



return 0;
}
