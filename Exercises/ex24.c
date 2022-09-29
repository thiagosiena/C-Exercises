// Thiago Salata Siena

// receives as a parameter two values X and Z and calculates and returns
// Xz. (without using ready-made functions or power operators)

#include <stdio.h>
#include <math.h>

int potencia(int a, int b)
{
    int total = 1, j = 0;

    for (int i = 1; i <= b; i++)
    {
        for (j; j < i; j++)
        {
            total *= a;
        }
    }

    return total;
}

int main()
{

    int X, z;
    int aux;

    printf("Informe X e z: ");
    scanf("%i %i", &X, &z);

    aux = potencia(X, z);

    printf("X^z: %i ", aux);

    return 0;
}