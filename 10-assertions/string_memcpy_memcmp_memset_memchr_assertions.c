#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>

//memcpy, memcmp, memset, arba memchr
int main(){
  char  A[] = "string 1", B[] = "second string", C[] = "word";

assert(!memcmp(memcpy(A,B,5), B,5));
assert(memcmp(A,C,10));
assert(memcmp(memset(A + 5,  '.', 2*sizeof(char)), A, 5) );
assert(memcmp(memchr(B,'d', strlen(B)),memchr(C,'r', strlen(C)), 5 ) );


return 0;
}
