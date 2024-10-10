#include <stdio.h>

/*Cuenta - Números.
El programa, al recibir como datos un arreglo
unidimensional de tipo entero y un número entero,
determina cuántas veces se encuentra el número en
el arreglo. */

void main (void)
{
    int I, NUM, CUE = 0;
    int ARRE [5]; //Declaración del arreglo.
    for (I=0; I<5; I++)
    {
        printf ("Ingrese el Elemento %d del Arreglo: ", I+1);
        scanf ("%d", &ARRE[I]); //Lectura -asignación- del arreglo.
    }

    printf ("\n\nIngrese el Número que se Va a Buscar en el Arreglo: ");
    scanf ("%d", &NUM);
    for (I=0; I<5; I++)
        if (ARRE[I] == NUM) //Comparación del número con los elementos del arreglo.
        CUE++;
    printf ("\n\nEl %d se Encuentra %d Veces en el Arreglo", NUM, CUE);
}
