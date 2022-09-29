// Thiago Salata Siena

// calculates the volume of a sphere from its radius

#include <stdio.h>
#include <stdlib.h>
#include <math.h>




float volume(float r)
{
    float j;
    j = 4/3* 3,1415 *pow(r,3);
    return j;
}

int main()
{
    float r, k;
    printf("digite o raio da esfera: \n");
    scanf("%f", &r);

    k = volume(r);
    printf("o volume da esfera e: %.1f\n", k);
    return 0;
}