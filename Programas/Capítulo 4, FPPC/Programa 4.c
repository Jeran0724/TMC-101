#include <stdio.h>

/* Prueba de Variables Globales, Locales y Est�ticas.
El programa utiliza funciones en las que se usan
diferentes tipos de variables. */

int f1 (void);  //Prototipos de funciones.
int f2 (void);
int f2 (void);
int f2 (void);

int K = 3;  //Varaible global.

void main (void)
{
    int I;
    for (I=1; I<=3; I++)
    {
        printf ("\nEl Resultado de la Funci�n f1 es: %d", f1());
        printf ("\nEl Resultado de la Funci�n f1 es: %d", f2());
        printf ("\nEl Resultado de la Funci�n f1 es: %d", f3());
        printf ("\nEl Resultado de la Funci�n f1 es: %d", f4());
    }
}

int f1 (void)   //La funci�n f1 utiliza la variable global.
{
    K += K;
    return (K);
}

int f2 (void)   //La funci�n f2 utiliza la variable local.
{
    int K = 1;
    K++;
    return (K);
}

int f3 (void)   //La funci�n f3 utiliza la variable est�tica.
{
    static int K = 8;
    K += 2;
    return (K);
}

int f4 (void)   //La funci�n f4 utiliza dos variables con el mismo nombre: local y global.
{
    int K = 5;
    K = K + ::K;    //Uso de la variable local (K) y global (::K)
    return (K);
}
