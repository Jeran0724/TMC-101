#include <stdio.h>

/* Cubo - 1.
El programa calcula el cubo de los 10 primeros
n�meros naturales con la ayuda de una funci�n.
En la soluci�n del problema se utiliza una
variable global, aunque esto, como veremos m�s
adelnate, no es muy recomendable. */

int cubo (void); //Prototipo de funci�n.
int I; //Variable global

void main (void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); //Llamada a la funci�n cubo.
        printf ("\nEl Cubo de %d es: %d", I, CUB);
    }
}

int cubo (void) //Declaraci�n de la funci�n.
{
    return (I*I*I); //La funci�n calcula el cubo de la variable global I.
}
