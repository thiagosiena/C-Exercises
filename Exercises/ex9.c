// Thiago Salata Siena

// checks whether the value is even or odd

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funcao(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}

int main()
{
    int n;
    printf("digite o numero: \n");
    scanf("%i", &n);

        if (funcao(n) == true)
    {
        printf("o valor e par");
    }

    if (funcao(n) == false)
    {
        printf("o valor e impar");
    }
    return 0;
}