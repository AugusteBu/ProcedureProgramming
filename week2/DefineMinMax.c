#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define Maxi(x,y) (x>=y? x:y)
#define Mini(x,y) (x<=y? x:y)
int main(){

// Min and max values from 3 numbers input
    int a,b,x,y,c,maz,did;
scanf("%d%d%d", &a, &b, &c);

did = Maxi(Maxi(a,b),Maxi(b,c));
maz = Mini(Mini(a,b),Mini(b,c));

printf(maz==did?"Visos reiksmes yra vienodos: %d": "Maksimali reiksme: %d \nMinimali reiksme: %d",did,maz);



return 0;
}
