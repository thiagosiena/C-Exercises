// Thiago Salata Siena

// takes three integer values as parameters and returns them in ascending order.

#include <stdio.h>
#include <stdlib.h>

int *funcao(int a, int b, int c)
{
    int *vet = malloc(sizeof(int) * 2);

    if (a > b)
    {
        if (a > c)
        {
            vet[0] = a;
            if (c > b)
            {
                vet[1] = c;
                vet[2] = b;
            }
            else
            {
                vet[1] = b;
                vet[2] = c;
            }
        }
        else
        {
            vet[0] = c;
            vet[1] = a;
            vet[2] = b;
        }
    }
    else
    {
        if (b > c)
        {
            vet[0] = b;
            if (a > c)
            {
                vet[1] = a;
                vet[2] = c;
            }
            else
            {
                vet[1] = c;
                vet[2] = a;
            }
        }
        else
        {
            vet[0] = c;
            vet[1] = b;
            vet[2] = a;
        }
    }
    return vet;
}

int main()
{
    int *p;
    int a, b, c;
    printf("digite o valor de a: \n");
    scanf("%i", &a);
    printf("digite o valor de b: \n");
    scanf("%i", &b);
    printf("digite o valor de c: \n");
    scanf("%i", &c);
    p = funcao(a, b, c);
    for (int i = 0; i < 3; i++)
    {
        printf("%i\t", *(p + i));
    }
    return 0;
}
