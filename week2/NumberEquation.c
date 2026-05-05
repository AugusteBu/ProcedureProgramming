#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main ()
{
// Inputs go through mathematic equation provided:
// a.
// x + 4 * y + z^3
//
// b.
// (x + sqrt(y)) * (z^4 - |z| + 46.3)
    double x, y, z, pirma_reiksme, antra_reiksme;
    printf( "Iveskite 3 reiksmes:\n" );
    scanf( "%lf %lf %lf", &x, &y, &z );

//a
    pirma_reiksme = x + 4 * y + pow(z,3);

//b
    antra_reiksme = ( x + sqrt(y)) * (pow(z,4) - abs(z) + 46.3);

    printf( "%.2f %.2f", pirma_reiksme, antra_reiksme);

    return 0;
}

