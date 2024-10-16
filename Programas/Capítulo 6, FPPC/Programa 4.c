#include <stdio.h>

/* Sim�trico.
El programa, al recibir como dato un arreglo
bidimensional cuadrado, determina si el mismo
es sim�trico. */

const int MAX=100;

void Lectura (int[][MAX], int);
int Simetrico (int[][MAX], int);

void main (void)
{
    int MAT[MAX][MAX], N, RES;
    do
    {
        printf ("Ingrese el Tama�o del Arreglo: ");
        scanf ("%d", &N);
    }

    while (N>MAX || N<1);
    Lectura (MAT, N);
    RES = Simetrico (MAT, N);
    if (RES)
        printf ("\nEl Arreglo Bidimensional es Sim�trico");
    else
        printf ("\nEl Arreglo Bidimensional NO es Sim�trico");
}

void Lectura (int A[][MAX], int T)
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
    {
        printf ("Fila: %d\tColumna: %d", I+1, J+1);
        scanf ("%d", &A[I][J]);
    }
}

int Simetrico (int A[][MAX], int T)
{
    int I=0, J, F = 1;
    while ((I<T) && F)
    {
        J=0;
        while ((J<I) && F)
            if (A[I][J] == A[J][I])
            J++;
        else
            F=0;
        I++;
    }

    return (F);
}
