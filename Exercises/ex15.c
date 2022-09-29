// Thiago Salata Siena

// reads of positive values and returns
// the arithmetic mean of them.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float funcao(int n)
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, aux;
    float total;
    while (i < n)
    {
        aux = 0;
        printf("digite %i° numero:", i + 1);
        scanf("%i", &aux);

        if (aux < 0)
        {
            return printf("erro!!!");
        }

        total += aux;
        i++;
    }
    return total / n;
}

int main()
{
    int n;
    float aux;
    printf("digite a quantidade de numero: \n");
    scanf("%i", &n);
    aux = funcao(n);
    printf("media aritimetica:%.2f \n", aux);
    return 0;
}