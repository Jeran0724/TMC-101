#include <stdio.h>

/* Intercambia,
El programa intercambia las columnas de una arreglo
bidimensional. Los elementos de la primera columna se
intercambian con los de la �ltima, los de la segunda
con los de la pen�ltima, y as� sucesivamente. */

const int MAX=50;

void Lectura (float[][MAX], int, int);
void Intercambia (float[][MAX], int, int);
void Imprime (float[][MAX], int, int);

void main (void)
{
    int F, C;
    float MAT[MAX][MAX];
    do
    {
        printf ("Ingrese el N�mero de Filas: ");
        scanf ("%d", &F);
    }

    while (F>MAX || F<1);
    do
    {
        printf ("Ingrese el N�mero de las Columnas: ");
        scanf ("%d", &C);
    }

    while (C>MAX || C<1);

    Lectura (MAT, F, C);
    Intercambia (MAT, F, C);
    Imprime (MAT, F, C);
}

void Lectura (float A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
    {
        printf ("Ingrese el Elemento %d %d: ", I+1, J+1);
        scanf ("%f", &A[I][J]);
    }
}

void Intercambia (float A[][MAX], int F, int C)
{
    int I, J;
    float AUX;
    for (I=0; I<(C/2); I++)
        for (J=0; J<F; J++)
    {
        AUX=A[J][I];
        A[J][I]=A[J][C-I-1];
        A[J][C-I-1]=AUX;
    }
}

void Imprime (float A[][MAX], int F, int C)
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        printf ("\nElemento %d %d: %5.2f", I+1, J+1, A[I][J]);
}
