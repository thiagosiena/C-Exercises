// Thiago Salata Siena

// takes a person's age in years, months and days and returns
// this age expressed in days.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int idade(int a, int m, int d)
{
    return a * 365 + m * 30 + d;
}

int main()
{

    int a, m, d ,D ;
    printf("digite a idade da pessoa em anos meses e dias: \n");
    scanf("%i%i%i",&a,&m,&d);
    D  = idade(a,m,d);
    printf("%i anos %i meses %i dias correspondem a: %i dias \n",a,m,d,D);

    return 0;


}