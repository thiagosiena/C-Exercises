// Thiago Salata Siena

// takes as parameter an integer and positive value N and
// returns the value of S.

// S = sum of (N^2+1)/(N+3)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somatoria(float n)
{
    float i, S = 0;

    if (n < 0)
        return -1;

    for (i = 1; i <= n; i++)
    {
        S += (pow(i, 2) + 1) / (i + 3);
    }
    return S;
}

int main()
{
    int n;

    printf("Digite o valor: \n");
    scanf("%i", &n);

    printf("S = %.2f", somatoria(n));
    return 0;
}

