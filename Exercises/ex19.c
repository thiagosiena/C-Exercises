// Thiago Salata Siena

// takes as parameter an integer and positive value and returns
// the number of divisors of this value.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int divisor(int n)
{
    int aux = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            aux++;
        }
    }

    return aux;
}

int main()
{
    int n, aux;
    printf("digite o numero: \n");
    scanf("%i", &n);

    aux = divisor(n);
    printf("o numero %i possui %i divisores: \n", n, aux);
    return 0;
}