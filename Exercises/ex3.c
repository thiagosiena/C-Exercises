// Thiago Salata Siena

// recives a value and returns logic value true if the value was a Prime number
// else it´s returns logic value false.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool logic(int n)
{
    int i;
    for (i = 2; i < n-1 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    printf("digite o numero: \n");
    scanf("%i", &n);

    if (n > 0)
    {
        if (logic(n))
        {
            printf("O valor e primo");
        }
        else
        {
            printf("o valor nao e primo");
        }
    }
    else
    {
        printf("erro!");
        return 1;
    }
    return 0;
}
