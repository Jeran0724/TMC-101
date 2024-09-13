#include <stdio.h>
#include <math.h>

/* Igualdad de Expresiones.
El programa, al rescibir como datos T, P y N, comprueba
la igualdad de una expresión determinada.

T, P y N: Variables de Tipo Entero. */

void main (void)
{
    int T, P, N;
    printf ("Ingrese los Valores de T, P y N: ");
    scanf ("%d %d %d", &T, &P, &N);

    if (P != 0)
    {
        if (pow (T / P, N) == pow (T, N) / pow (P,N))
            printf("\nSe Comprueba la Igualdad");

        else
            printf ("\nNo se Comprueba la Igualdad");
    }

    else
        printf ("\nP Tiene que Ser Diferente de Cero");
}
