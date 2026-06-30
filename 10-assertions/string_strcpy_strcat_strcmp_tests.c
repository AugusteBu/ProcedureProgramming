#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>


int main(){
    //strcpy, strcat, arba strcmp.
char A[] ="Vienas zodis", B[] = "Du zodis";

assert(strcmp(strcpy(A, B), B) == 0);
assert(strcmp(A, B) == 0);
assert(strcmp(strcat(A,B), "Vienas zodisDu zodis"));
assert(strcmp(strcpy(B,A), A));
assert(strcmp(strcpy(B,A), B) == 0);
assert(strcpy(A,B) != "k");
assert(strcat(A,B) != "raides");


return 0;
}
