// Thiago Salata Siena

// calculates the fatorial of a number.
#include <stdio.h>
#include <stdlib.h>

int fatorar(int n)
{
    int i = 1, fatorial = 1;
    fatorial = n;
    for (i; i < n; i++)
    {
        fatorial *= n - i;
    }
    return fatorial;
}

int main()
{
    int n;

    printf("Informe numero p/ fatorar: ");
    scanf("%i", &n);

    printf("o fatorial de %i = %i", n, fatorar(n));
}