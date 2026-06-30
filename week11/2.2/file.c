#include "file.h"
#include <stdio.h>

int saveCount = 0;
int loadCount = 0;
void saveToFile(int m1[], int *size1, char *name)
{
    ++saveCount;
    FILE *save_file;
save_file = fopen(name, "wb");
    fprintf(save_file, "%d ", *size1);
    for(int i = 0; i < *size1; ++i)
    {
        fprintf(save_file, "%d ", m1[i]);
    }
    fclose(save_file);
}
void loadFromFile(int m2[], int *size1, char *load_name)
{
    ++loadCount;
  FILE *save_file;
save_file = fopen(load_name, "rb");
fscanf(save_file, "%d", size1);
for(int i = 0; i < *size1; ++i)
    fscanf(save_file, "%d", &m2[i]);
 fclose(save_file);
}
