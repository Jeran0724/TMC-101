#include <stdio.h>
#include <ctype.h>

/* Letras Minúsculas y Mayúsculas.
El programa, al recibir como dato un archivo formado
por cadenas de caracteres, determina el número de
letras minúsculas y mayúsculas que hay en el archivo. */

void minymay (FILE *);

void main (void)
{
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        fclose(ar);
    }
    else
        printf("No se Pudo Abrir el Archivo");
}

void minymay (FILE *arc)
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if (islower (p))
            min++;
        else if (isupper (p))
            may++;
    }
    printf ("\nNúmero de Minúsculas: %d", min);
    printf ("\nNúmero de Mayúsculas: %d", may);
}

