#include <stdio.h>
#include <math.h>

/* Par, Impar o Nulo.

NUM: Variable de Tipo Entero. */

void main (void)
{
    int NUM;
    printf ("Ingrese el Número: ");
    scanf ("%d", &NUM);

    if (NUM == 0)
        printf ("\nNulo");

    else
        if (pow (-1, NUM) > 0)
        printf ("\nPar");

        else
            printf ("\nImpar");
}
