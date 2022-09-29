// Thiago Salata Siena

// reads 50 integer values and returns the largest and smallest of them.
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Maior;
    int Menor;

} valores;

valores comparador()
{
    valores medidas;
    int aux = 0;
    medidas.Maior = -1;
    medidas.Menor;

    for (int i = 0; i < 50; i++)
    {
        printf("Informe valores: ");
        scanf("%i", &aux);
        if (medidas.Maior < aux)
        {
            medidas.Maior = aux;
        }
        if (aux < medidas.Menor)
        {
            medidas.Menor = aux;
        }
    }

    return medidas;
}

int main()
{
    valores medidas;
    medidas = comparador();
    printf("Menor valor:%i\n Maior valor:%i", medidas.Menor, medidas.Maior);
    return 0;
}