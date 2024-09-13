#include <stdio.h>

/* Billete de Ferrocaril.
El programa calcula el costo de un billete de
ferrocarril teniendo en cuenta la distancia entre
las dos ciudades y el tiempo de permanencia del
pasajero.

DIS y TIE: Variables de Tipo Entero.
BIL: Variable de Tipo Real. */

void main (void)

{
    int DIS, TIE;
    float BIL;
    printf ("Ingrese la Distancia entre Ciudades y el Tiempo de Estancia: ");
    scanf ("%d %d", &DIS, &TIE);

    if ((DIS * 2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;

    else
        BIL = DIS * 2 * 0.19;
    printf ("\n\nCosto del Billete: %7.2f", BIL);
}
