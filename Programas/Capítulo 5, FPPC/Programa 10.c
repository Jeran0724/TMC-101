#include <stdio.h>

/* Búsqueda Secuencial en Arreglos Ordenados
en Forma Creciente. */

const int MAX = 100;

void Lectura (int *, int);
int Busca (int *, int, int);

void main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf ("Ingrese el Tamaño del Arreglo: ");
        scanf ("%d", &TAM);
    }

    while (TAM>MAX || TAM<1);
    Lectura (VEC, TAM);
    printf ("\nIngrese el Elemento a Buscar: ");
    scanf ("%d", &ELE);
    RES = Busca (VEC, TAM, ELE);

    if (RES)
        printf ("\nEl Elemento se Encuentra en la Posición: %d", RES);
    else
        printf ("\nEl Elemento no se Encuentra en el Arreglo");
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

int Busca (int A[], int T, int E)
{
    int RES, I = 0, BAN = 0;
    while ((I<T) && (E>=A[I]) && !BAN)
        if (A[I] == E)
            BAN++;
        else
            I++;
    if (BAN)
        RES = I + 1;
    else
        RES = BAN;
    return (RES);
}
