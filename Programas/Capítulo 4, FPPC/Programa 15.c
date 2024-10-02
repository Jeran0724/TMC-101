#include <stdio.h>

/* Productoria.
El programa calcula la productoria de los N
primeros números naturales. */

int Productoria (int);  //Prototipo de función.

void main (void)
{
    int NUM;
    /* Se escribe un do-while para verificar que el
    número del cual se quiere calclar la productoria
    sea correcto. */
    do
    {
        printf ("Ingresa el Número del cual Quieres Calcular la Productoria: ");
        scanf ("%d", &NUM);
    }

    while (NUM >100 || NUM < 1);
    printf ("\nLa Productoria de %d es: %d", NUM, Productoria(NUM));
}

int Productoria(int N)
//La función calcula la productoria de N.
{
    int I, PRO = 1;
    for (I = 1; I<= N; I++)
        PRO *= I;
    return (PRO);
}
