// Thiago Salata Siena

// receives as parameter a value N and calculates and writes
// he multiplication table from 1 to N.

#include <stdio.h>
#include <stdlib.h>

int tabuada(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("%i * %i = %i\n", i, n, n * i);
    }
}

int main()
{
    int n, tab;

    printf("numero para a tabuada: ");
    scanf("%i", &n);

    tab = tabuada(n);

    return 0;
}