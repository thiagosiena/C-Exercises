// Thiago Salata Siena


// receives the 3 grades of a student per parameter and a 
// Letter. If the letter is A, the procedure calculates the
// arithmetic mean of the grades of the
// student, if P, his weighted average (weights: 5, 3 and 2)
// and if H, his average harmonic.

#include <stdio.h>
double medias(double v1, double v2, double v3, char op)
{
    double media;

    if(op == 'A')
        media = (v1 + v2 + v3)/3;
    else if(op == 'P')
        media = (v1 * 0.5) + (v2 * 0.3) + (v3 * 0.2);
    else if(op == 'H')
        media = 3 / (1/v1 + 1/v2 + 1/v3);
    else {
      printf("\nErro");
      return -1.0;
    }

    return media;
}


int main(void) {
    char op;
    double v1, v2, v3, md;

    printf("Digiteo tipo de media e o valor das 3 notas  |A / P / H|: ");
    scanf("%c%lf%lf%lf", &op, &v1, &v2, &v3);

    md = medias(v1,v2,v3,op);

    if (md != -1.0)
        printf("A media das notas %.2f, %.2f, %.2f sera de: %.2f", v1, v2, v3, md);

    return 0;
}