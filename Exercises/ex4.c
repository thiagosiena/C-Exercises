// Thiago Salata Siena

// receives as parameter the values necessary for the calculation
// of the bhaskara formula and returns, also as parameter, its roots.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct raizes
{
    int x1;
    int x2;
} raiz;

struct raizes bhaskara(int a, int b, int c)
{
    struct raizes raiz;
    int delta;
    delta = (pow(b, 2)) - 4*a*c;
    if (delta < 0)
    {
        printf("erro !!!\n");
        return raiz;
    }

    raiz.x1 = (-b + sqrt(delta)) / (2 * a);
    raiz.x2 = (-b - sqrt(delta)) / (2 * a);

    return raiz;
}

int main()
{
    int a, b ,c;
    struct raizes raiz;
    printf("digite a: \n");
    scanf("%i", &a);
    printf("digite b: \n");
    scanf("%i", &b);
    printf("digite c: \n");
    scanf("%i", &c);

    raiz=bhaskara(a,b,c);

    printf("raiz 1: %i \n", raiz.x1);
    printf("raiz 2: %i \n", raiz.x2);

    return 0;
}