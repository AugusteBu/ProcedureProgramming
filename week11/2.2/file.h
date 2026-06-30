#ifndef FILE_H
#define FILE_H
extern int saveCount;
extern int loadCount;
void saveToFile(int m1[], int *size1, char *name);
void loadFromFile(int m2[], int *size1, char *load_name);

#endif
