#include <stdio.h>
#include <ctype.h>

/* letras Minúsculas y Mayúsculas.
El programa, al recibir como dato un archivo formado
por cadenas de caracteres, determina el número de
letras minúsculas y mayúsculas que hay en el archivo. */

void minymay (FILE *);

void main (void)
{
    FILE *ap;
    if ((ap = fopen ("arc.txt", "r")) != NULL)
    {
        minymay (ap);
        fclose (ap);
    }
    else
        printf("No Se Puede Abrir el Archivo");
}

void minymay (FILE *ap1)
{
    char cad [30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1))
    {
        fgets (cad, 30, ap1);
        i = 0;
        while (cad[i] != '\0')
        {
            if (islower (cad [i]))
                mi++;
            else if (isupper (cad [i]))
                ma++;
            i++;
        }
    }
    printf ("\n\nNúmero de Letras Minúsculas: %d", mi);
    printf ("\nNúmero de Letras Mayúsculas: %d", ma);
}

