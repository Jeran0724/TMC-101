#include <stdio.h>

/* Incremento de Precio.
El programa, al recibir como dato el precio
de un producto importado, incrementa 11% el
mismo si éste es inferior a $1,500.

PRE y NPR: Variable de Tipo Real. */

void main (void)
{
    float PRE, NPR;
    printf ("Ingrese el Precio del Producto: ");
    scanf ("%f", &PRE);

    if (PRE > 1500)
    {
        NPR = PRE * 1.11;
        printf ("\nNuevo Precio: %7.2", NPR);
    }
}
