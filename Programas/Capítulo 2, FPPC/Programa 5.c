#include <stdio.h>
#include <math.h>

/* Funci�n Matem�tica.
El programa obtiene el resultado de una funci�n.

OP y T: Variables de Tipo Entero.
RES: Variable de Tipo Real. */

void main (void)
{
    int OP, T;
    float RES;
    printf ("Ingrese la Opci�n del C�lculo y el Valor Entero: ");
    scanf("%d %d", %OP, &T);

    switch (OP)
    {
        case 1: RES = T / 5;
            break;
        case 2: RES = pow (T, T);
            break;

        /* La funci�n pow est� definida en la biblioteca math.h */

        case 3:
        case 4: RES = 6 * T/2;
            break;
        default: RES = 1;
            break;
    }

    printf ("\nResultado: %7.2f", RES);
}
