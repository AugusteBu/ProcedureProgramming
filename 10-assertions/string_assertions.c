#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>


int main(){
    char A[] = "Zodis";
assert(strlen(A) == 5);
assert(strlen(A) > 0);
assert(strlen(A) != 6);
assert(strlen(A) == 0x5);
assert(strlen(A) > strlen(A)-1);
assert(strlen(A) == strlen(A));
return 0;
}
