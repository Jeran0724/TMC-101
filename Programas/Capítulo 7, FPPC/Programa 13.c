#include <stdio.h>

/* Calcula Longitud.
El programa calcula la longitud de la cadena
sin utilizar la función strlen. */

int cuenta (char *);

void main (void)
{
    int i;
    char cad[50];
    printf ("\nIngrese la Cadena de Caracteres: ");
    gets (cad);
    i = cuenta (cad);
    printf ("\nLongitud de la Cadena %d", i);
}

int cuenta (char *cadena)
{
    int c = 0;
    while (!cadena[c] == '\0')
        c++;
    return (c);
}
