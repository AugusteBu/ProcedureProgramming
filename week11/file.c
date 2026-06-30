#include "file.h"
#include <stdio.h>
void saveToFile(int m1[], int *size_of_array)
{
    FILE *save_file;
save_file = fopen("saving_to_file.bin", "wb");
    fprintf(save_file, "%d ", *size_of_array);
    for(int i = 0; i < *size_of_array; ++i)
    {
        fprintf(save_file, "%d ", m1[i]);
    }
    fclose(save_file);
}
void loadFromFile(int m2[], int *got_size)
{
  FILE *save_file;
save_file = fopen("saving_to_file.bin", "rb");
fscanf(save_file, "%d", got_size);
for(int i = 0; i < *got_size; ++i)
    fscanf(save_file, "%d", &m2[i]);
 fclose(save_file);
}
