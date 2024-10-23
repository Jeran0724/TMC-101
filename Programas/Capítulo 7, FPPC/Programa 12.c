#include <stdio.h>
#include <ctype.h>

/* Cuenta Letras Minúsculas y Mayúsculas.
El programa, al recibir como dato una frase, determina
el número de letras minúsculas y mayúsculas que existen
en la frase. */

void main (void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;
    printf ("\nIngrese la Cadena de Caracteres (máximo 50 caracteres): ");
    gets(cad);

    while (cad[i] != '\0')
    {
        if (islower (cad[i]))
            mi++;
        else
            if (isupper (cad[i]))
            ma++;
        i++;
    }

    printf ("\n\nNúmero de Letras Minúsculas: %d", mi);
    printf ("\n\nNúmero de Letras Mayúsculas: %d", ma);
}
