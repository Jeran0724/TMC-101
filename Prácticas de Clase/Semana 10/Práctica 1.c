#include <stdio.h>

/* Archivos y Caracteres.
El programa escribe caracteres en un archivo. */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen ("1 Practica.txt", "w");

    if (ar != NULL)
    {
        while ((p1=getchar()) != '\n')
            fputc (p1, ar);
        fclose (ar);
    }

    else
    printf ("No Se Puede Abrir el Archivo");
}
