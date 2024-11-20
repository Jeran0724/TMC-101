#include <stdio.h>

/* Archivos y Cadenas de Caracteres.
El programa lee cadenas de caracteres de un archivo. */

void main (void)
{
    char cad[50];
    FILE *ap;
    if ((ap=fopen ("arc.txt", "r")) != NULL)
    {
         while (!feof(ap))
         {
             fgets (cad, 50, ap);
             puts(cad;)
         }

         fclose(ap);
    }

    else
        printf ("No se Puede Abrir el Archivo");
}
