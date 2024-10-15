#include <stdio.h>

/* Elección.
El programa almacena los votos emitidos en una
elección en la que hubo cinco candidatos e
imprime el total de votos que tuvo cada uno de
ellos. */

void main (void)
{
    int ELE[5] = {0}; //Declaración del arreglo entero ELE de 5 elementos. Todos sus elementos se inicializan en 0
    int I, VOT;
    printf ("Ingresa el Primer Voto (0 - Para Terminar): ");
    scanf ("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
            ELE[VOT-1]++;
        printf ("\nEl Voto Ingresado es Incorrecto.\n");
        printf ("Ingresa el Siguiente Voto (0 - Para Terminar): ");
        scanf ("%d", &VOT);
    }

    printf ("\n\nResultados de la Elección\n");
    for (I=0; I<=4; I++)
        printf ("\nCandidato %d: %d", I+1, ELE[I]);
}
