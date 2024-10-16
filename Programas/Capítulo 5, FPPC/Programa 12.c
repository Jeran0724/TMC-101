#include <stdio.h>

/* Ordenaci�n por Inserci�n Directa. */

const int MAX = 100;

void Lectura (int *, int);
void Ordena (int *, int);
void Imprime (int *, int);

void main (void)
{
    int TAM, VEC [MAX];
    do
    {
        printf ("Ingrese el Tama�o del Arreglo: ");
        scanf ("%d", &TAM);
    }

    while (TAM>MAX || TAM<1);

    Lectura (VEC, TAM);
    Ordena (VEC, TAM);
    Imprime (VEC, TAM);
}

void Lectura (int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf ("Ingrese el Elemento %d: ", I + 1);
        scanf ("%d", &A[I]);
    }
}

void Imprime (int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
        printf ("\nA[%d]", I, A[I]);
}

void Ordena (int A[], int T)
{
    int AUX, L, I;
    for (I=1; I<T; I++)
    {
        AUX = A[I];
        L = I - 1;
        while ((L>=0) && (AUX < A[L]))
        {
            A[L+1] = A[L];
            L--;
        }

        A[L+1] = AUX;
    }
}
