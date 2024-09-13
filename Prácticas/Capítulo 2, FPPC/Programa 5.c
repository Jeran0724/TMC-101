#include <stdio.h>
#include <math.h>

/* Función Matemática.
El programa obtiene el resultado de una función.

OP y T: Variables de Tipo Entero.
RES: Variable de Tipo Real. */

void main (void)
{
    int OP, T;
    float RES;
    printf ("Ingrese la Opción del Cálculo y el Valor Entero: ");
    scanf("%d %d", %OP, &T);

    switch (OP)
    {
        case 1: RES = T / 5;
            break;
        case 2: RES = pow (T, T);
            break;

        /* La función pow está definida en la biblioteca math.h */

        case 3:
        case 4: RES = 6 * T/2;
            break;
        default: RES = 1;
            break;
    }

    printf ("\nResultado: %7.2f", RES);
}
