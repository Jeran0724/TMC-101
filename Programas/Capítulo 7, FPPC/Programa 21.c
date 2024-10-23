#include <stdio.h>
#include <string.h>

void intercambia (char FRA[][30], int);

void main (void)
{
    int i, n;
    char FRA[20][30];
    printf ("\nIngrese el Número de Filas del Arreglo: ");
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf ("Ingrese la Línea de Texto Número %d: ", i+1);
        fflush (stdin);
        gets (FRA[i]);
    }

    printf ("\n\n");
    intercambia (FRA, n);
    for (i = 0; i < n; i++)
    {
        printf ("Impresión de la Línea de Textp %d: ", i + 1);
        puts (FRA[i]);
    }
}

void intercambia (char FRA[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i = 0; i < (n/2); i++)
    {
        strcpy (cad, FRA[i]);
        strcpy (FRA[i], FRA[j]);
        strcpy (FRA[j], cad);
        j--;
    }
}
