#include <stdio.h>

/* Estancia.
El programa, al recibir como dato la superficie de
una estancia expresada en acres, la convierte en
hect�reas.

ECA: Variable de Tipo Real. */

void main (void)

{
    float ECA;
    printf ("Ingrese la Extensi�n de la Estancia: ");
    scanf ("%f", &ECA);
    ECA = ECA * 4047 / 10000;
    printf ("\nExtensi�n de la Estancia en Hect�reas: %5.2f", ECA);
}
