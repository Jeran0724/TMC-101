#include <stdio.h>

/* Funciones para el manejo de caracteres de ;a biblioteca stdio.h */

void main (void)
{
    char p1, p2, p3 = '$';

    printf ("\nIngrese un Caracter: ");
    p1=getchar();
    putchar (p1);
    printf ("\n");
    fflush (stdin);

    printf ("\nEl Caracter p3 es: ");
    putchar (p3);
    printf ("\n");

    printf ("\nIngrese Otro Caracter: ");
    fflush (stdin);
    scanf ("%c", &p2);
    printf ("%c", p2);
}
