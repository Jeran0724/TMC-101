#include <stdio.h>
#include <string.h>

/* Otras Funciones de la Biblioteca string.h para el manejo de cadenas. */

void main (void)
{
    int i;
    char cad0[20] = "Hola Rep. Dom.";
    char cad1[20] = "Hola Santiago";
    char cad2[20] = "Hola Punta Cana";
    char cad3[20] = "Hola Rep. Dom.";
    char *c, c3;

    i = strcmp(cad0, cad1);
    printf ("\nResultado de la Comparación -cad0 y cad1-: %d", i);

    i = strcmp(cad0, cad2);
    printf ("\nResultado de la Comparación -cad0 y cad2-: %d", i);

    i = strcmp(cad0, cad3);
    printf ("\nResultado de la Comparación -cad0 y cad3-: %d", i);

    i = strlen(cad0);
    printf ("\nLongitud Cadena cad0: %d", i);

    i = strlen(cad1);
    printf ("\nLongitud Cadena cad1: %d", i);

    c = strchr(cad1, 'G');
    if (c !=NULL)
    {
        c3 = *c;
        printf ("\nEl Valor de c3 es: %c", c3);
    }

    c = strchr(cad2, 'V');
    if (c !=NULL)
    {
        c3 = *c;
        printf ("\nEl Valor de c3 es: %c", c3);
    }
}
