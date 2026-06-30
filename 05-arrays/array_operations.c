#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 10
#define error_msg while(getchar() != '\n');printf("Invalid input! please reenter numbers!\n");
#define size 2147483647
int main()
{
    printf("All 10 elements of array will be set to 0\nThe array:\n");
    int A[CAPACITY] = {0}, x, y;

    for(int i = 0; i < CAPACITY; ++i)
        printf("%d ", A[i]);
    printf("\nThe first, fourth and tenth element of the array will be set to 1, 2 and 3 accordingly\n");
    A[0] = 1;
    A[3] = 2;
    A[9] = 3;
    printf("Third element of the array will be deleted\n");

    for(int i = 2; i < CAPACITY - 1; ++i) //d
        A[i] = A[i + 1];
    printf("Number 4 is placed in the array so after the addition it is the seventh element of the array\n");
    for(int i = CAPACITY - 2; i > 6; --i)
        A[i] = A[i - 1];
    A[6] = 4;
    printf("The whole array after changes:\n");
    for(int i = 0; i < CAPACITY; ++i) //f
        printf("%d ", A[i]);


    printf("\nA new element y will be put into array with the index x\nPlease enter x and y:\n");
again1:
    if((scanf("%8d",&x) == 1 && getchar() == '\n' && x >=0 && x < CAPACITY) && (scanf("%8d",&y) == 1 && getchar() == '\n' && y > (-1 * size) && y < size));
    else
    {

        error_msg;
        goto again1;
    }
    printf("The input has been successful!\n");
    A[x] = y;

    printf("Put in a number (x) which will erase arrays element with the index x:\n");
again2:
    if(scanf("%d", &x) == 1 && getchar() == '\n' && x >= 0 && x < CAPACITY)
    {
        for(int i = x; i < CAPACITY - 1; ++i)
            A[i] = A[i + 1];                //capacity will be lower by 1
        printf("The input has been successful!\n");
    }
    else
    {
        error_msg;
        goto again2;
    }

    printf("Enter 2 numbers (x, y) which after adding to the array the index will be x and the element of it - y:\n");
again3:
    if((scanf("%8d",&x) == 1 && getchar() == '\n' && x >= 0 && x < CAPACITY) && (scanf("%8d",&y) == 1 && getchar() == '\n' && y > (-1 * size) && y < size));
    else
    {
        error_msg;
        goto again3;
    }
    for(int i = CAPACITY - 1; i > x; --i)
        A[i] = A[i - 1];
    A[x] = y;
    printf("The input has been successful!\n");

    printf("The whole array:\n");
    for(int i = 0; i < CAPACITY; ++i)
        printf("%d ", A[i]);


    return 0;
}
