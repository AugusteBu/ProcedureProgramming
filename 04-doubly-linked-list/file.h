#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

struct List{
    int Data;
    struct List *Prev;
    struct List *Last;
};

void Number(int *Input);
void Choice();
void Line();
struct List *Create_List();
void Delete_List(struct List **Head);
void Delete_value(struct List **Head);
void Print_List(struct List *Head);
void Fill_List(struct List *Head, bool *List_Full);
void Insert_Data(struct List *Head, int FileData, bool *List_Full);
int Find_Smallest(struct List *Head);
void Delete_Smallest(struct List **Head);

#endif
