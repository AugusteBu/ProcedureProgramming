#include <stdio.h>
#include <math.h>


int main()
{
    int skaicius, liekana;

    scanf( "%d", &skaicius );
    printf("%s", (skaicius % 2) == 0? "Lyginis" : "Nelyginis");
    return 0;
}


