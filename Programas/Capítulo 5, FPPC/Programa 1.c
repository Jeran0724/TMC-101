#include <stdio.h>

/* Cuenta-N�meros.
El programa, al recibir como datos un arreglo
unidimensional de tipo entero, determina cu�ntas
veces se encuentra el n�mero en el arreglo. */

void main (void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];
    for (I=0; I<100; I++)
    {
        printf ("Ingrese el Elemento %d del Arreglo: ", I+1);
        scanf ("%d", &ARRE[I]);
    }

    printf ("\n\nIngrese el N�mero que se Va a Buscar en el Arreglo: ");
    scanf ("%d", &NUM);
    for (I=0; I<100; I++)
        if (ARRE[I] == NUM)
        CUE++;
    printf ("\n\nEl %d se Encuentra %d Veces en el Arreglo", NUM, CUE);
}
