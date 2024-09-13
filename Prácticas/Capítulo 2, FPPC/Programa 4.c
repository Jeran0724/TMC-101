#include <stdio.h>

/* Incremento de Precio.
El programa, al recibir como dato el precio de
un producto, incrementa al mismo 11% si es menor
a $1500 y 8% en caso contrario (mayor o igual).

PRE y NPR: Variables de Tipo Real. */

void main (void)
{
    float PRE, NPR;
    printf ("Ingrese el Precio del Producto: ");
    scanf ("%f", &PRE);

    if (PRE < 1500)
        NPR = PRE * 1.11;

    else
        NPR = PRE * 1.08;
    printf ("\nNuevo Precio del Producto: %8.2f", NPR);
}
