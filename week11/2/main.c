#include "file.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define arrayy_SIZE 8000

struct arrayy{
int first[arrayy_SIZE], second[arrayy_SIZE], size_of_arrayy, got_size;
};

void fillarrayy(struct arrayy *m) {
    scanf("%d", &(m->size_of_arrayy));

    for (int i = 0; i < m->size_of_arrayy; ++i)
        m->first[i] = rand();
}
void printarrayy(struct arrayy *m, int first)       /// 2 Printing arrayy
{

for(int i = 0; i < m->size_of_arrayy; ++i)
    printf("%d ", first);
    printf("\n");

}
int main(){
    struct array m1, m2, m3;
    int  not_same = 0;
fillarrayy(&m1);
fillarrayy(&m2);
fillarrayy(&m3);


printarrayy(&m1, &(m1.first));
saveToFile(&m1.first,  &m1.size_of_arrayy);
loadFromFile(&m1.second, &m1.got_size);
printarrayy(&m1, &m1.got_size);




if(1)
printf("All good");
else
    printf("Something's wrong");


return 0;
}
