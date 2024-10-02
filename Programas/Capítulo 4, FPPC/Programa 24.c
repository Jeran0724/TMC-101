#include <stdio.h>

/* Parámetos y funciones. */

int f1 (void);  //Prototipos de funciones.
int f2 (void);
int f3 (void);
int f4 (void);
int K = 5;

void main (void)
{
    int I;
    for (I = 1; I <= 4; I++)
    {
        printf ("\n\nEl Resultado de la Función f1 es: %d", f1());
        printf ("\nEl Resultado de la Función f2 es: %d", f2());
        printf ("\nEl Resultado de la Función f3 es: %d", f3());
        printf ("\nEl Resultado de la Función f4 es: %d", f4());
    }
}

int f1 (void)
{
    K *= K;
    return (K);
}

int f2 (void)
{
    int K = 3;
    K++;
    return (K);
}

int f3 (void)
{
    static int K = 6;
    K += 3;
    return (K);
}

int f4 (void)
{
    int K = 4;
    K = K + ::K;
    return (K);
}
