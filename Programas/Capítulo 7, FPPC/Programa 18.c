#include <stdio.h>

/* Cadena Invertida Resuelta en Forma Recursiva. */

void inverso (char *);

void main (void)
{
    char fra[50];
    printf ("\nIngrese la Línea de Texto: ");
    gets(fra);
    printf ("\nEscribe la Línea de Texto en Forma Inversa: ");
    inverso(fra);
}

void inverso (char *cadena)
{
    if (cadena[0] != '\0')
    {
        inverso (&cadena[1]);
        putchar (cadena[0]);
    }
}
