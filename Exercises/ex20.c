// Thiago Salata Siena

//takes as parameter a positive integer value and returns the sum of this value.

#include <stdio.h>
#include <stdlib.h>

int somatorio(int n)
{
    int i, soma=0;

    if (n < 0)
        return -1;
    for (i = 0; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}

int main()
{
    int n;
    printf("Digite um numero para calcular o somatorio: ");
    scanf("%i", &n);

    printf("O somatorio e = %i", somatorio(n));

    return 0;
}
