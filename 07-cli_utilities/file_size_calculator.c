#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#define size 10000
long getFileSize(const char *fileName)
{
FILE *files = fopen(fileName, "r");
if(files == NULL)
    return -1;
fseek(files, 0, SEEK_END);
long size_in_byts = ftell(files);
fclose(files);
return size_in_byts;
}


int main(){
char fileName[size];
long file_size;
printf("Iveskite failo varda (su .txt galune): ");
scanf("%s", fileName);
file_size = getFileSize(fileName);
printf("%ld", file_size);



return 0;
}
