#include <stdio.h>

/* Promedio Curso.
El programa, al recibir como dato el promedio de
un alumno en un curso universitario, escribe
aprobado si su promedio es mayor o igual a 6, o
reprobado en caso contrario.

PRO: Variable de Tipo Real. */

void main (void)
{
    float PRO;
    printf ("Ingrese el Promedio del Alumno: ");
    scanf ("%f", &PRO);

    if (PRO >= 6.0)
        printf ("\nAprobado");

    else
        printf ("\nReprobado");
}
