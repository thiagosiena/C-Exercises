// Thiago Salata Siena

// transforms seconds into hours minutes and seconds

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct temp
{
    int h;
    int m;
    int S;
}temps;

struct temp tempo (int s)
{
    struct temp temps;
    int aux;
     temps.h = s / 3600;
     aux = s % 3600;
     temps.m = aux / 60;
     temps.S = s - (temps.h*3600 + temps.m*60);

     return temps;
}


int main()
{
    int s;
    struct temp temps;
    printf("digite o tempo em segundos: \n");
    scanf("%i", &s);

    temps = tempo(s);

    printf("%isegundos equivalem a %ih %im %is\n\n",s,temps.h,temps.m,temps.S);

    return 0;

}