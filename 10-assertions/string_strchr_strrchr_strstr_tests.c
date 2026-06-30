#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>

//strchr, strrchr, arba strstr.
int main(){
  char A[] = "A strings blank!",B = 's', C = 'l', D[] = "in";
assert((strchr(A,C),"lank!"));
assert(strcmp(strchr(A,C), strrchr(A,C)) == 0);
assert(strcmp(strchr(A,B), strrchr(A, B)) != 0);
assert(!(strrchr(A,B) == A));
assert(strstr(A, D));
assert((strrchr(strstr(A,D), B)));
assert(!strrchr(D,B));
return 0;
}
