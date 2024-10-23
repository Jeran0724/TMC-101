#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Minúsculas y Mayúsculas.
El progrma, al recibir como dato un arreglo unidimensional
de tipo cadena de caracteres, determina el número de
minúsculas y mayúsculas que hay en cada cadena. */

void minymay (char *cadena);

void main (void)
{
    int i, n;
    char FRA[20][50];

    printf ("\nIngrese el Número de Filas del Arreglo: ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("Ingrese la Línea %d de Texto: ", i+1);
        fflush (stdin);
        gets (FRA[i]);
    }

    printf ("\n\n");

    for (i=0; i<n; i++)
        minymay(FRA[i]);
}

void minymay (char *cadena)
{
    int i= 0, mi= 0, ma= 0;
    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            ma++;
        i++;
    }

    printf ("\n\nNúmero de Letras Minúsculas: %d", mi);
    printf ("\n\nNúmero de Letras Mayúsculas: %d", ma);
}
