#include "file.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define ARRAY_SIZE 80000
void fillArray(int m1[], int *size_of_array)        /// 1 Generating array
{
    scanf("%d", size_of_array);        ///the size of the array that is going to be filled with random numbers
    for(int i = 0; i < *size_of_array; ++i)
    m1[i] = rand();

}
void printArray(int m1[], int *size_of_array)       /// 2 Printing array
{

for(int i = 0; i < *size_of_array; ++i)
    printf("%d ", m1[i]);
    printf("\n");

}
int main(){
    int m1[ARRAY_SIZE], m2[ARRAY_SIZE], size_of_array, got_size, not_same = 0;
fillArray(m1, &size_of_array);
printArray(m1, &size_of_array);
saveToFile(m1,  &size_of_array);
loadFromFile(m2, &got_size);
printArray(m2, &got_size);
for(int i = 0; i < size_of_array; ++i)
    if(m1[i] != m2[i])
    ++not_same;
if(not_same == 0)
printf("All good");
else
    printf("Something's wrong");


return 0;
}
