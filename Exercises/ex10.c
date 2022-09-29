// Thiago Salata Siena

// Calculate your ideal weight based on your gender using the following formula:
// For men,
// ideal weight = 72.7 × height - 58
// for women
// ideal weight = 62.1 × h - 44.7.

#include <stdio.h>
#include <stdlib.h>

float funcao(float n, char s)
{
    if (s == 'M')
    {
        return (n * 72.7) - 58;
    }
    if (s == 'F')
    {
        return (n * 62.1) - 44.7;
    }
    else 
    return -1;
}

int main()
{
    float n,aux;
    char op;

    printf("digite o sexo(M/F): \n");
    scanf("%c", &op);
    printf("digite a altura: \n");
    scanf("%f", &n);

   aux = funcao(n,op);

   printf("seu peso ideal e de: %.2f", aux);

   return 0;
}
