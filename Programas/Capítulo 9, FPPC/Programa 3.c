#include <stdio.h>

/* Archivos y Cadenas de Caracteres.
El programa escribe cadenas de caracteres
 en un archivo. */

 void main (void)
 {
     char cad[50];
     int res;
     FILE *ar;
     if ((ar = fopen ("arc.txt", "w")) != NULL)
     {
         printf ("\n¿Desea Ingresar una Cadena de Caracteres? \n\n\tSi-1 \tNo-0");
         scanf ("%d", &res);

         while (res)
         {
             fflush (stdin);
             printf ("Ingrese la Cadena: ");
             gets(cad);
             fputs (cad, ar);
             printf ("\n¿Desea Ingresar Otra Caedna de Caracteres? \n\n\tSi-1 \tNo-0");
             scanf ("%d", &res);
             if (res)
                fputs ("\n", ar);
         }

         fclose(ar);
     }

     else
        printf ("No se Puede Abrir el Archivo");
 }
