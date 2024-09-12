#include <stdio.h>
#include <math.h>

/* Volumen y Área del Cilindro.
El programa, al recibir como datos el radio y la
altura de un cilindro, calcula su área y su volumen.

RAD, ALT, VOL, ARE: Variables de tipo real. */

void main (void)

{
    float RAD, ALT, VOL, ARE;
    printf ("Ingrese el Radio y la Altura del Cilindro: ");
    scanf ("%f %f", &RAD, %ALT);
    /* M_PI es una constante de definida en math.h que contiene el valor de PI. */
    VOL = M_PI * pow (RAD, 2) * ALT;
    ARE = 2 * M_PI * RAD * ALT;
    printf ("\nEl Volumen es: %6.2f  \t El Área es: %6.2f", VOL, ARE);
}
