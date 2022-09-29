// Thiago Salata Siena

// checks if a number is perfect or not

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool funcao(int n)
{
    int aux;
    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            aux += i;
        }
    }
    if (aux == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    printf("digite o numero: \n");
    scanf("%i", &n);
    if (n > 1)
    {
        if (funcao(n) == true)
        {
            printf("o numero e perfeito \n");
        }
        if (funcao(n) == false)
        {
            printf("o numero nao e perfeito \n");
        }
    }
    else 
    {
        printf("erro!!! \n");
    }

    return 0;
}