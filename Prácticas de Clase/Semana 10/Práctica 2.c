#include <stdio.h>

/* Archivos y Caracteres.
El programa lee caracteres de un archivo. */

void main(void)
{
    char p1;
    FILE *ar;

    if ((ar = fopen ("2 Practica.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p1 = fgetc( ar);
            putchar (p1);
        }

    fclose(ar);
    }

    else
    printf ("No Se Puede Abrir el Archivo");
}
