#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Cuenta Palabras.
El programa calcula el número de palabras que
hay en la cadena de caracteres. */

int cuentap(char *);

void main (void)
{
    int i;
    char fra[50];
    printf ("\nIngrese la Línea de Texto: ");
    gets(fra);
    strcat(fra, "");

    i = cuentap(fra);
    printf ("\nla Línea de texto Tiene %d Palabras", i);
}

int cuentap (char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, "");

    while (strcmp(cad, ""))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr(cad + 1, "");
    }

    return (i);
}
