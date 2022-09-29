// Thiago Salata Siena

// checks if a number is positive or negative

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool positivo(int n)
{
    if (n > 0)
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


    
    if (positivo(n) == true)
    {
        printf("o numero e positivo");
    }
    if (positivo(n) == false)
    {
        printf("o numero e negativo");
    }
    if(n==0)
    {
        printf("zero!!!");
    }
    return 0;
}