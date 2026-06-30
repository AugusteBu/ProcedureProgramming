#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>



// strncpy, strncat, arba strncmp.

int main(){
    char A[] = "vienas", B[] = "du", C[10], D[] = "dureles";
assert(strncmp(strncpy(C, A, 3), C, 2) == 0);
assert(strncpy(A, B,4) != "kazkas");
assert(strncmp(strncat(B,A,3), "duvienas", 4));
assert((strncmp(C,B,2)) != -1);
assert(strncmp(B, D, 2) == 0);
assert(strncmp(strncat(B, D, 5), A, 3) != 0);
assert(strncmp(strncat(C,A,2), D, -2));
return 0;
}
