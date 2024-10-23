#include <stdio.h>

int opcion = 0;
int nume = 0;
float numd = 0;

void main ()
{

    printf ("\n\t Menu \t");
    printf ("\n1. Numeros Enteros a Letras.");
    printf ("\n2. Numeros con Decimales a Letras.");
    printf ("\n3. Salir.");
    printf ("\nSu Opcion Es: ", opcion);
    scanf ("%d", &opcion);

    if (opcion == 1)
    {
        printf ("\nInserte su Numero Entero: ", nume);
        scanf ("%d", &nume);
    }

    if (opcion == 2)
    {
        printf ("\nInserte su Numero con Decimal: ", numd);
        scanf ("%f", &numd);
    }

    else
    {
        return 0;
    }
}
