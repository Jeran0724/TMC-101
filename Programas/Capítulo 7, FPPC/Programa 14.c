#include <stdio.h>

/* Calcula Longitud en Forma Recursiva.
El programa calcula de manera recursiva la longitud
de la cadena sin utilizar la función strlen. */

int cuenta (char *);

void main (void)
{
    int i;
    char cad[50];
    printf ("\nIngrese la Cadena de Caracteres: ");
    gets (cad);
    i = cuenta(cad);
    printf ("\nLongitud de la Cadena: %d", i);
}

int cuenta (char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta (&cadena[1]));
}
