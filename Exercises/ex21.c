// Thiago Salata Siena

// takes as parameter an integer and positive value N and
// returns the value of S.

// S = 1 + sum of 1/N

#include <stdio.h>
#include <stdlib.h>

float somatoria(int n)
{
    float aux = 0, S;
    for (float i = 2; i <= n; i++)
    {
        aux = aux + (1 / i);
    }
    S = aux + 1;
    return S;
}

int main()
{
    int n;
    float aux;
    printf("digite o numero: \n");
    scanf("%i", &n);
    aux = somatoria(n);
    printf("n = %.2f", aux);
    return 0;
}