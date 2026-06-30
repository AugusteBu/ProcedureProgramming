//Augustes Buklerytes
//Programu sistemos 1 semestras, 3 grupe
//N9. Sudaryti dvipusi saraas. Parasyti procedura, kuri ismeta is saraso maziausia elementa.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "file.h"

int main()
{
    int Input;
    bool List_Exists, List_Full;
    struct List *Head;

    printf("This program will delete smallest element from doubly linked list while also having other features\n");

    List_Exists = false;
    List_Full = false;

    while(1)
    {
        Number(&Input);
        if(Input == 1)
        {
            if (List_Exists == true)
            {
                printf("The list already exists\n");
            }
            else
            {
                Head = Create_List();
                printf("The list has been created\n");
                List_Exists = true;
            }
        }
//---------------------------------------------------------
        else if(Input == 2)
        {
            if (List_Exists == false)
            {
                printf("Create a list first!\n");
            }
            else if (List_Full == true)
            {
                printf("The list already exists\n");
            }
            else
                Fill_List(Head, &List_Full);
        }
//---------------------------------------------------------
        else if(Input == 3)
        {
            if (List_Exists == false)
            {
                printf("A list doesn't exist yet\n");
            }
            else if (List_Full == false)
            {
                printf("There is no data in the list\n");
            }
            else
            Delete_Smallest(&Head);
            if (Head == NULL)
            {
                List_Exists = false;
                List_Full = false;
            }
        }
//---------------------------------------------------------
        else if(Input == 4)
        {
            if(List_Exists == false || List_Full == false)
            {
                printf("A value cannot be deleted because the list doesn't exist\n");
            }
            else
            Delete_value(&Head);
        }
//---------------------------------------------------------
        else if(Input == 5)
        {
            if(List_Exists == false || List_Full == false)
            {
                printf("Theres no list to be printed\n");
            }
            else
                Print_List(Head);
        }
//---------------------------------------------------------
        else if(Input == 6)
        {
            if (List_Exists == false || List_Full == false)
            {
                printf("It cannot be deleted\n");
            }
            else
            {
                            Delete_List(&Head);
            printf("The list has been deleted\n");
            List_Exists = false;
            List_Full = false;
            }
        }
//---------------------------------------------------------
        if(Input == 7)
        {
            if (List_Exists == true)
            {
                Delete_List(&Head);
            }
            return 0;
        }

    }
return 0;
}
