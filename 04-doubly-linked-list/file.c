#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "file.h"

void Line()
{
    printf("------------------------------------------\n");
}

void Choice()
{
    printf("\nSelect the choice you'd like to apply:\n");
    Line();
    printf("|  1  | Create empty list\n");
    Line();
    printf("|  2  | Create a list (must enter file name ending with .bin)\n");
    Line();
    printf("|  3  | Delete the smallest element from the list\n");
    Line();
    printf("|  4  | Delete a value from the list\n");
    Line();
    printf("|  5  | Print the elements are in the list\n");
    Line();
    printf("|  6  | Delete the list\n");
    Line();
    printf("|  7  | End the program\n");
    Line();
    return;
}

void Number(int *Input)
{
    Choice();
    while(scanf("%d", Input) != 1 || getchar() != '\n')     //checking if a number is entered
    {
        printf("Invalid input. Please reenter the number\n");
        while(getchar() != '\n');
        Choice();
    }
    if (*Input < 1 || *Input > 7)                           //if number isnt too high or too low
    {
        printf("Invalid input. Please reenter the number\n");
        Number(Input);
    }
}

struct List *Create_List()
{
    struct List *Head = (struct List*) malloc(sizeof(struct List));             //creating empty list
    Head -> Prev = NULL;
    Head -> Last = NULL;
    return Head;
}

void Fill_List(struct List *Head, bool *List_Full)
{
    FILE *Data_File;
    char *Reading = (char*) malloc(50);
    printf("Enter the file name: ");
    scanf("%s", Reading);
    Data_File = fopen(Reading, "rb");

    if (Data_File == NULL)                      //checking if file exists
    {
        printf("Unable to open file\n");
        free(Reading);
        return;
    }

    int FileData;
    Reading = (char*) realloc(Reading, strlen(Reading) + 1);
    while(fscanf(Data_File, "%d", &FileData) == 1)
    {
        Insert_Data(Head, FileData, List_Full);
    }
    fclose(Data_File);
    free(Reading);
}

void Insert_Data(struct List *Head, int FileData, bool *List_Full)
{
    if(*List_Full == false)
    {
        Head -> Data = FileData;
        *List_Full = true;
        return;
    }
    struct List *Newnode = (struct List *) malloc(sizeof(struct List));
    Newnode -> Data = FileData;
    Newnode -> Last = NULL;
    struct List *temp = Head;
    while(temp -> Last != NULL)
    {
        temp = temp -> Last;
    }
    temp -> Last = Newnode;
    Newnode -> Prev = temp;
}

void Delete_value(struct List **Head)
{
    int valueToDelete;

    printf("Please enter value to be deleted from the list: ");
    scanf("%d", &valueToDelete);

    struct List *current = *Head;
    struct List *prev = NULL;

    while (current != NULL)
    {
        if (current -> Data == valueToDelete)
        {
            if (prev == NULL)
            {
                *Head = current -> Last;
            }
            else
            {
                prev -> Last = current -> Last;
                if (current -> Last != NULL)
                {
                    current -> Last -> Prev = prev;
                }
            }

            free(current);
            printf("Value %d deleted from the list.\n", valueToDelete);
            return;
        }
        prev = current;
        current = current -> Last;
    }
}

void Delete_List(struct List **Head)
{
    struct List *Delete;
    while (*Head != NULL)
    {
        Delete = *Head;
        *Head = (*Head) -> Last;
        free(Delete);
    }
}

void Print_List(struct List *Head)
{
    printf("The list: ");
    while (Head != NULL)
    {
        printf("%d ", Head->Data);
        Head = Head -> Last;
    }
    printf("\n");
}


int Find_Smallest(struct List *Head)
{
    int Smallest = Head -> Data;
    while(Head != NULL)
    {
        if (Head -> Data < Smallest)
        {
            Smallest = Head -> Data;
        }
        Head = Head -> Last;
    }
    return Smallest;
}

void Delete_Smallest(struct List **Head)
{
    struct List *Del = *Head;
    while(Del != NULL)
    {
        if(Del -> Data == Find_Smallest(*Head))
        {
            if (Del == *Head && Del -> Last == NULL)            //if only element
            {
                free(*Head);
                *Head = NULL;
                break;
            }
            else if (Del == *Head)
            {
                *Head = Del -> Last;
            }
            if(Del -> Last != NULL)
            {
                (Del -> Last) -> Prev = Del -> Prev;
            }
            if(Del -> Prev != NULL)
            {
                (Del -> Prev) -> Last = Del -> Last;
            }
            free(Del);
            Del = NULL;
            break;
        }
        else
        {
            Del = Del -> Last;
        }
    }
}
