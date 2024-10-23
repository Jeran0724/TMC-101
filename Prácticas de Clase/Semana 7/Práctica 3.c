#include <stdio.h>

/* Funciones para el Manejo de Cadenas
de Caracteres de la Biblioteca stdio.h */

void main (void)
{
    char *cad0 = "Buenos Dias";
    char cad1[20] = "Hola";
    char cad2[] = "Mexico";
    char cad3[] = {'B', 'I', 'E', 'N', 'V', 'E', 'N', 'I', 'D', 'O', '\0'};
    char cad4[20], cad5[20], cad6[20];

    printf ("\nLa Cadena cad0 es: ");
    puts (cad0);

    printf ("\nLa Cadena cad1 es: ");
    printf ("%s", cad1);

    printf ("\nLa Cadena cad2 es: ");
    puts (cad2);

    printf ("\nLa Cadena cad3 es: ");
    puts (cad3);

    printf ("\nIngrese una Línea de Texto -se lee con gets-: \n");
    gets (cad4);
    printf ("\nLa Cadena cad4 es: ");
    puts (cad4);
    fflush (stdin);

    printf ("\nIngrese una Línea de Texto -se lee con gets-: \n");
    scanf ("%s", cad5);
    printf ("\nLa Cadena cad5 es: ");
    printf ("%s", cad5);
    fflush (stdin);

    char p;
    int i=0;
    printf ("\nIngrese una Línea de Texto -se lee con getchar-: \n");

    while ((p = getchar()) !='\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf ("\nLa Cadena cad6 es: ");
    puts (cad6);
}
