#include "file.h"
#include <stdio.h>

int file_write = 0;
int file_write = 0;
void saveToFile(struct arrayy *m, struct arrayy int *size_of_array)
{
    FILE *save_file;
save_file = fopen("saving_to_file.bin", "wb");
    fprintf(save_file, "%d ", *size_of_array);
    for(int i = 0; i < *size_of_array; ++i)
    {
        fprintf(save_file, "%d ", m[i]);
    }
    fclose(save_file);
}
void loadFromFile(int m[], int *got_size)
{
  FILE *save_file;
save_file = fopen("saving_to_file.bin", "rb");
fscanf(save_file, "%d", got_size);
for(int i = 0; i < *got_size; ++i)
    fscanf(save_file, "%d", &m[i]);
 fclose(save_file);
}
