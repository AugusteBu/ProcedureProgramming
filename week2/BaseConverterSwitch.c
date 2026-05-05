#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//(dvejetainis > desimtainis ) 11011, 10010100, 11001011010101  >  27, 148, 13013
//(desimtainis > dvejetainis)                     37, 241, 2487 >  0010 0101, 1111 0001, 1001 1011 0111
//(sesioliktainis > desimtainis)             6E2, ED33, 123456 > 1 762, 60 723 , 1 193 046
//(desimtainis > sesioliktainis)                243, 2483, 4612 > F3, 9B3, 1204

int main()
{
long long int x, y = 0,trupmena,a;

/// dvejetainis i desimtainis
    printf("Dvejetainis i desimtaine:\n");
        scanf("%lld",&x);
    int skaicius = 0, laipsn = 0;
    while(x > 0)
    {
        skaicius += (x % 10) * pow(2, laipsn);
        x /= 10;
        laipsn++;
    }
    printf("%d ", skaicius);
    printf("\n\n");
//------------------------------------------------------------
///desimtainis i dvejetaini
printf("Desimtainis i dvejetaine:\n");
     scanf("%lld",&x);
                int m = 0;
        int Skaicius[32] = {0};
         a = x;
        while(a > 0)                 //liekanas sudeda i masyva
        {
            Skaicius[m] = a % 2;
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
            printf("%d", Skaicius[j]);
        }
        printf(" ");

///sesioliktainis i desimtaine
printf("\nSesioliktainis i desimtaine:\n");
scanf("%x", &x);
 m = 0;
 a = x;
while(a > 0){
trupmena = a % 10;
switch (trupmena){
case 'a': trupmena = 10;
break;
case 'b': trupmena = 11;
break;
case 'c': trupmena = 12;
break;
case 'd': trupmena = 13;
break;
case 'e': trupmena = 14;
break;
case 'f': trupmena = 15;
break;
}
y += trupmena * pow(16, m);
a /= 10;
m++;
}
printf("%x", y);

/// desimtainis i sesioliktaini
m =0;
y = 0;
printf("\nDesimtainis i sesioliktaini:\n");
scanf("%d", &x);

while(x > 0)
{

trupmena = x % 10;
switch (trupmena){
case 'a': trupmena = 10;
break;
case 'b': trupmena = 11;
break;
case 'c': trupmena = 12;
break;
case 'd': trupmena = 13;
break;
case 'e': trupmena = 14;
break;
case 'f': trupmena = 15;
break;
}
y += trupmena * pow(10, m);
x /= 10;
m++;
}
printf("%x", y);

///sesioliktaine i dvejitaine



///dvejetaine i sesioliktaine
printf("\nDvejetaine i sesioliktaine:\n");
scanf("%d", &x);
a = x;
m = 0;
int sk[] = {0};
while(a > 0)
{
    int sum = 0;

    trupmena = a % 10000;
    for(int i = 0; i < 4; i++)
    {
        sk[m] += (trupmena % 10)* pow(10,i);
    }
    switch (sk[m]){
case 'a': sk[m] = 10;
break;
case 'b': sk[m] = 11;
break;
case 'c': sk[m] = 12;
break;
case 'd': sk[m] = 13;
break;
case 'e': sk[m] = 14;
break;
case 'f': sk[m] = 15;
break;
}
m++;
a /= 10000;
}
for(int i = m-1;  i>= 0; i--)
{
    printf("%d", sk[i]);
}
    return 0;
}
