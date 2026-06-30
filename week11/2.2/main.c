#include "file.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define ARRAY_SIZE 80000
void fillArray(int m1[], int *size1)        /// 1 Generating array
{
    scanf("%d", size1);        ///the size1 of the array that is going to be filled with random numbers
    for(int i = 0; i < *size1; ++i)
    m1[i] = rand();

}
void printArray(int m1[], int *size1)       /// 2 Printing array
{

for(int i = 0; i < *size1; ++i)
    printf("%d ", m1[i]);
    printf("\n");

}
int main(){
    int m1[ARRAY_SIZE], m2[ARRAY_SIZE], m3[ARRAY_SIZE], size1,size2,size3;
    char name[10000], load_name[10000];
     loadCount = 0;
    saveCount = 0;
fillArray(m1, &size1);
fillArray(m2, &size2);
fillArray(m3, &size3);
saveToFile(m1,  &size1,"save2.bin");
saveToFile(m3,  &size3,"save2.bin");
loadFromFile(m1, &size1, "save2.bin");
saveToFile(m2,  &size2,"anotherfile.bin");
saveToFile(m3,  &size3,"anotherfile.bin");
loadFromFile(m2, &size2, "save2.bin");



printf("%d %d\n", saveCount, loadCount);
if(saveCount == 3 && loadCount == 3)
printf("All good");
else
    printf("Something's wrong");


return 0;
}
