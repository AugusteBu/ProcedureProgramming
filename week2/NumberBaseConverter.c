#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//(dvejetainis > desimtainis ) 11011, 10010100, 11001011010101  >  27, 148, 13013
//(desimtainis > dvejetainis)                     37, 241, 2487 >  0010 0101, 1111 0001, 1001 1011 0111
//(sesioliktainis > desimtainis)             6E2, ED33, 123456 > 1 762, 60 723 , 1 193 046
//(desimtainis > sesioliktainis)                243, 2483, 4612 > F3, 9B3, 1204


///norint naudoti scanf reik uzkomentuoti masyvus
int main()
{
//converting numebrs

/// dvejetainis > desimtainis
    long long int  A[] = {11011,  10010100, 11001011010101};
     //long long int  A[100];
    //scanf("%lld%lld%lld",&A[0],&A[1],&A[2]);
    for(int i = 0; i < 3; i++)
    {

        int skaicius = 0, laipsn = 0;
        while(A[i] > 0)
        {
            skaicius += (A[i] % 10) * pow(2, laipsn);
            A[i] /= 10;
            laipsn++;
        }
        printf("%d ", skaicius);
    }
    printf("\n\n");

//-----------------------------------------------
///desimtainis i dvejetaini
   int D[] = {37, 241, 2487};
    //int D[100];
    //scanf("%d%d%d",&D[0],&D[1],&D[2]);
    for(int i = 0; i < 3; i++)
    {
        int m = 0;
        int skaicius[] = {0};
        int a = D[i];
        while(a > 0)                 //liekanas sudeda i masyva
        {
            skaicius[m] = a % 2;
            m++;
            a /= 2;
        }
        int kiekis;
         kiekis = m % 4;
         for(int j = 0; j < kiekis; j++)
         {
             printf("%d", 0);
         }
        for(int j = m - 1; j >= 0; j--)
        {
            printf("%d", skaicius[j]);
        }
        printf(" ");
    }
    printf("\n\n");

//--------------------------------------------------------
///sesioliktainis i desimtaine

    int B[] = {0x6E2, 0xED33, 0x123456};
    //int B[100];
    //scanf("%x%x%x",&B[0],&B[1],&B[2]);
    printf("%d %d %d\n\n", B[0], B[1], B[2]);
//------------------------------------------------------------
/// desimtainis i sesioliktaini
    int C[] = {243, 2483, 4612};
    // int C[100];
    //scanf("%d%d%d",&C[0],&C[1],&C[2]);
    printf("%x %x %x", C[0], C[1], C[2]);
//------------------------------------------------------

    return 0;
}
