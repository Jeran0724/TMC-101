#include <stdio.h>

/* Incorpora Caracteres.
El programa agrega caracteres al archivo
libro.txt. */

void main (void)
{
    char p1;
    FILE *ar;
    ar = fopen( "libro.txt", "a");

    if (ar != NULL)
    {
        while ((p1 = getchar()) != '\n')
            fputc(p1, ar);
        fclose(ar);
    }
    else
        printf("No Se Puede Abrir el Archivo");
}
