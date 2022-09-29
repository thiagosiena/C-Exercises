// Thiago Salata Siena

// takes as parameter an integer and positive value N and
// returns the value of S.

// S = 1 + sum of 1/N!
#include <Stdio.h>
#include <Stdlib.h>

float somatoria(float n)
{
    float S = 0, fatorialt, aux = 1;
    float t = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j != i - 1; j--)
        {

            fatorialt = 1 / (aux = aux * j);
        }

        t += fatorialt;
    }
    S = t + 1;

    return S;
}

int main()
{
    float n;
    float aux;

    printf("Valor: ");
    scanf("%f", &n);

    aux = somatoria(n);

    printf("Total= %.2f", aux);

    return 0;
}