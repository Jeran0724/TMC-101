#include <stdio.h>

/* Estancia.
El programa, al recibir como dato la superficie de
una estancia expresada en acres, la convierte en
hectáreas.

ECA: Variable de Tipo Real. */

void main (void)

{
    float ECA;
    printf ("Ingrese la Extensión de la Estancia: ");
    scanf ("%f", &ECA);
    ECA = ECA * 4047 / 10000;
    printf ("\nExtensión de la Estancia en Hectáreas: %5.2f", ECA);
}
