#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define size_of_arrays 100000
int main(){


char Number[size_of_arrays];
int size[size_of_arrays],s, i = 0,n;
do{
    scanf("%s", &Number[i]);
    s = strlen(Number[i]);
size[i] = s;
++i;
}while(Number[i-1] > 0);
n = i;
for(int i = 0;i<n;++i)
 for(int j = 0; j < size[i]; ++j)
    {

        if(Number[j] == '.')
            size[i]--;
    }

return 0;
}
