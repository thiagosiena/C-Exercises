// Thiago Salata Siena

// recives as parameters 3 values and check if these 3 values can form a triangle, 
// if so, its identifies what type of triangle it is.

#include <stdio.h>
#include <stdlib.h>

float funcao(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b &&c == a &&b == c)
        {
            return printf("equilatero");
        }
        else if (a != b && b != c && a != c)
        {
            return printf("escaleno");
        }
        else
        {
            return printf("isoceles");
        }
    }
    return printf("erro!!!\n");
}

int main()
{
    float a, b, c;
    printf("digite o valor de x: \n");
    scanf("%f", &a);
    printf("digite o valor de y: \n");
    scanf("%f", &b);
    printf("digite o valor de z: \n");
    scanf("%f", &c);

    funcao(a,b,c);
    return 0;
}